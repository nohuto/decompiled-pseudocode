/*
 * XREFs of CcGetCurrentNumaNode @ 0x14029E3A0
 * Callers:
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14029D344 (CcAdjustWriteBehindThreadPool.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14029E260 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCurrentNumaNode(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    return *(_QWORD *)(*(_QWORD *)(a2 + 592) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 80);
}
