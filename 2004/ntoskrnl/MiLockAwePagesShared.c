/*
 * XREFs of MiLockAwePagesShared @ 0x140547B0C
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D39A0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140273B20 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 56, 0LL);
}
