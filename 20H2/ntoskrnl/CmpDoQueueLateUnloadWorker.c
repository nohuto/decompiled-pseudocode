/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14070121C
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14067232C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140682488 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmReleaseLoadKeyContext @ 0x140700F00 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x140700F30 (CmpDoFlushNextHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406DABE8 (CmWorkerEngineQueueWorkItem.c)
 */

char __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v3; // rsi
  char v4; // al

  v1 = (volatile signed __int64 *)(a1 + 1672);
  v3 = a1 + 2952;
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 19;
  if ( **(_QWORD **)(a1 + 2928) == 2LL && !*(_QWORD *)(a1 + 2944) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2944), v3, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 21;
      *(_DWORD *)(v3 + 16) = 1;
      *(_QWORD *)(v3 + 24) = CmpLateUnloadHiveWorker;
      *(_QWORD *)(v3 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem((_QWORD *)v3);
    }
  }
  v4 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
