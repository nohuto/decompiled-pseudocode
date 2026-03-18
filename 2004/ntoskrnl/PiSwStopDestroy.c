/*
 * XREFs of PiSwStopDestroy @ 0x14073287C
 * Callers:
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PiSwFindChildren @ 0x1407329D8 (PiSwFindChildren.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rsi
  int v5; // edi
  _QWORD *v7; // rbx
  _DWORD *v8; // r14
  const wchar_t *v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *Str2; // [rsp+60h] [rbp+18h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren(&DestinationString);
  if ( Children )
  {
    v5 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v5 >= 0 )
    {
      v7 = *Children;
      while ( v7 != Children )
      {
        v8 = v7 - 12;
        v9 = (const wchar_t *)*(v7 - 11);
        v7 = (_QWORD *)*v7;
        if ( !wcsicmp(v9, Str2) && (v8[1] & 1) == 0 )
          PiSwCloseDevice(v8);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v5 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
