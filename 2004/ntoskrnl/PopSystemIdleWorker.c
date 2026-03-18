/*
 * XREFs of PopSystemIdleWorker @ 0x1408EDCF0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1403537B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x14076C124 (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x14077C580 (PopPulseSystemIdleEvent.c)
 *     PopIdleDetection @ 0x1408E0C10 (PopIdleDetection.c)
 *     PopExecuteSystemIdleAction @ 0x1408ED9E4 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408EDAF4 (PopIsSystemIdle.c)
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
  v2 = dword_140C0F194;
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140C0F1A8, dword_140C0F194, &v5, (__int64)&unk_140C0F2A8);
  dword_140C0F288 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopIdleDetection(v2, v5 / (unsigned int)PopIdleScanInterval);
  PopExecuteSystemIdleAction((unsigned int)dword_140C0F288, IsSystemIdle, (__int64)&unk_140C0F290);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C0F288 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
