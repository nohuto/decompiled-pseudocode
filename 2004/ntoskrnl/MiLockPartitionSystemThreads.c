/*
 * XREFs of MiLockPartitionSystemThreads @ 0x1403CCA14
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14060E570 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
