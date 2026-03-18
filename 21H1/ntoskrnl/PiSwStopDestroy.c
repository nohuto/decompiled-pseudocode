/*
 * XREFs of PiSwStopDestroy @ 0x1407344C4
 * Callers:
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     PnpConcatPWSTR @ 0x140680BB8 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiSwFindChildren @ 0x14072C6EC (PiSwFindChildren.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rsi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v10; // rbx
  _DWORD *v11; // r14
  const wchar_t *v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *Str2; // [rsp+60h] [rbp+18h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v5 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v5 >= 0 )
    {
      v10 = *Children;
      while ( v10 != Children )
      {
        v11 = v10 - 12;
        v12 = (const wchar_t *)*(v10 - 11);
        v10 = (_QWORD *)*v10;
        if ( !wcsicmp(v12, Str2) && (v11[1] & 1) == 0 )
          PiSwCloseDevice(v11);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return (unsigned int)v5;
}
