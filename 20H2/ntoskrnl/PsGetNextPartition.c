/*
 * XREFs of PsGetNextPartition @ 0x14033B800
 * Callers:
 *     MiFreeExcessSegments @ 0x14029C0C0 (MiFreeExcessSegments.c)
 *     MmSetTrimWhileAgingState @ 0x14033B7C4 (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140383AC0 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x140386538 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x14053AD04 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053AEAC (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A7368 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B5594 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x1406F1674 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140958580 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409934F8 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140998F4C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x14033B998 (PsGetNextPartitionUnsafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  void *v4; // r8

  v1 = (__int64)a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( PsReferencePartitionSafe(NextPartitionUnsafe) )
    {
      v2 = v4;
      break;
    }
    a1 = v4;
  }
  if ( v1 )
    PsDereferencePartition(v1);
  return v2;
}
