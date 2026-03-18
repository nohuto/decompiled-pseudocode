/*
 * XREFs of PsGetNextPartition @ 0x140202C94
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140202EE0 (MmSetTrimWhileAgingState.c)
 *     MiFreeExcessSegments @ 0x1402A3B70 (MiFreeExcessSegments.c)
 *     MmFlushAllPagesEx @ 0x14037F5E8 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x1403815A0 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x140536CE4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140536E8C (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A31D8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B1314 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x1405D3C28 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140951420 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x14098C508 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x14098CAFC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140202E28 (PsGetNextPartitionUnsafe.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  __int64 v4; // rdx
  void *v5; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    v5 = (void *)NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe, v4, NextPartitionUnsafe) )
    {
      v2 = v5;
      break;
    }
    a1 = v5;
  }
  if ( v1 )
    PsDereferencePartition(v1, v4, v5);
  return v2;
}
