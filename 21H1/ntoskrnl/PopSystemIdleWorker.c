/*
 * XREFs of PopSystemIdleWorker @ 0x1408ECA30
 * Callers:
 *     PopPolicyWorkerThread @ 0x140315930 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x14076D190 (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x14077A170 (PopPulseSystemIdleEvent.c)
 *     PopExecuteSystemIdleAction @ 0x1408EC6D0 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408EC7E0 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  int v1; // ecx
  bool IsSystemIdle; // al
  unsigned __int8 v3; // bl

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
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140C0F1A8, dword_140C0F194, (__int64)&unk_140C0F2A8);
  dword_140C0F288 = PopSystemIdleContext;
  v3 = IsSystemIdle;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopExecuteSystemIdleAction((unsigned int)dword_140C0F288, v3, (__int64)&unk_140C0F290);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140C0F288 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
