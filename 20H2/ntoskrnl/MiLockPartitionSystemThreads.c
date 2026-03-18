/*
 * XREFs of MiLockPartitionSystemThreads @ 0x1403CF6A4
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14070A580 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
