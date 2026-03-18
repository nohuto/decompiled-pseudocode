/*
 * XREFs of PopSystemIdleWorker @ 0x1408F3900
 * Callers:
 *     PopPolicyWorkerThread @ 0x140324320 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x14077D7E0 (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x14078AB80 (PopPulseSystemIdleEvent.c)
 *     PopIdleDetection @ 0x1408E6A50 (PopIdleDetection.c)
 *     PopExecuteSystemIdleAction @ 0x1408F35F4 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408F3704 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  int v1; // ecx
  int v2; // edi
  unsigned __int8 IsSystemIdle; // bl
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x100uLL, 0LL, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v1, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v1));
    if ( v1 == 2 )
      PopPulseSystemIdleEvent(2u);
  }
  PopUpdateLastUserInputTime();
  v2 = dword_140C0F1B4;
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140C0F1C8, dword_140C0F1B4, &v5, (__int64)&unk_140C0F2C8);
  dword_140C0F2A8 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopIdleDetection(v2, v5 / (unsigned int)PopIdleScanInterval);
  PopExecuteSystemIdleAction((unsigned int)dword_140C0F2A8, IsSystemIdle, (__int64)&unk_140C0F2B0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C0F2A8 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
