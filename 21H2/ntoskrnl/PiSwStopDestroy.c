/*
 * XREFs of PiSwStopDestroy @ 0x140738C44
 * Callers:
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     PnpConcatPWSTR @ 0x1406A9C64 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x1407349F0 (PiSwCloseDevice.c)
 *     PiSwFindChildren @ 0x14074705C (PiSwFindChildren.c)
 *     PiSwFindPdoAssociation @ 0x140770B48 (PiSwFindPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // r14
  int v7; // esi
  _QWORD *v8; // rbx
  _DWORD *v9; // rdi
  const wchar_t *v10; // rcx
  __int64 v11; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Str2; // [rsp+78h] [rbp+20h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren(&DestinationString);
  if ( Children )
  {
    v7 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v7 >= 0 )
    {
      v8 = *Children;
      while ( v8 != Children )
      {
        v9 = v8 - 12;
        v10 = (const wchar_t *)*(v8 - 11);
        v8 = (_QWORD *)*v8;
        if ( !wcsicmp(v10, Str2) && (v9[1] & 1) == 0 )
        {
          LOBYTE(v11) = 1;
          if ( PiSwFindPdoAssociation(v9, a3, v11) )
            PiSwCloseDevice(v9);
        }
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v7 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
