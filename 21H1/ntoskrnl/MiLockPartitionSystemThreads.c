/*
 * XREFs of MiLockPartitionSystemThreads @ 0x1403CBBF4
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x140643794 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
