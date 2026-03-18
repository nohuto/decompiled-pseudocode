/*
 * XREFs of sub_14094A6FC @ 0x14094A6FC
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_14094A6FC(__int64 a1)
{
  signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]
  char v5; // [rsp+78h] [rbp+10h]
  NTSTATUS v6; // [rsp+80h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  KeyHandle = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 37464);
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  if ( *(_QWORD *)(a1 + 37456) )
  {
    v6 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_140981330, 0, 0LL, 0, 0LL);
    if ( v6 >= 0 )
    {
      v5 = 1;
      v6 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140980C18,
             0,
             3u,
             *(PVOID *)(a1 + 37456),
             **(_DWORD **)(a1 + 37456));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
