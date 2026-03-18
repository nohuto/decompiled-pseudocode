/*
 * XREFs of EtwpClearPartitionContext @ 0x140360480
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    PsDereferencePartition(v2);
    *a1 = 0LL;
  }
  return 0LL;
}
