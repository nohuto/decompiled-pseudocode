/*
 * XREFs of PsGetNextPartition @ 0x140343D04
 * Callers:
 *     MiFreeExcessSegments @ 0x14024AB40 (MiFreeExcessSegments.c)
 *     MmSetTrimWhileAgingState @ 0x140343CC8 (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140381DE0 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x140384408 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x140537334 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1405374DC (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A38C8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B1A34 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x1406EADA0 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409527C0 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x14098D508 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140992EDC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x140343E98 (PsGetNextPartitionUnsafe.c)
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
