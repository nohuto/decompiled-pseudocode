/*
 * XREFs of sub_1409504BC @ 0x1409504BC
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_1409504BC(__int64 a1)
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
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v6 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1409870D0, 0, 0LL, 0, 0LL);
    if ( v6 >= 0 )
    {
      v5 = 1;
      v6 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_1409869B8,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
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
