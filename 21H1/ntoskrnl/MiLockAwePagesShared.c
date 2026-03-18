/*
 * XREFs of MiLockAwePagesShared @ 0x1405474BC
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D2390 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D2650 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1403597C0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 56, 0LL);
}
