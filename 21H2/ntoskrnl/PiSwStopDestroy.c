/*
 * XREFs of PiSwStopDestroy @ 0x140738E04
 * Callers:
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     PnpConcatPWSTR @ 0x140607BE4 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x140734BB0 (PiSwCloseDevice.c)
 *     PiSwFindChildren @ 0x14074721C (PiSwFindChildren.c)
 *     PiSwFindPdoAssociation @ 0x140770D08 (PiSwFindPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return (unsigned int)v7;
}
