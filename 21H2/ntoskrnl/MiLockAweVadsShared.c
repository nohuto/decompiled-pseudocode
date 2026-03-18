/*
 * XREFs of MiLockAweVadsShared @ 0x1405AB9F0
 * Callers:
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14097E270 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x1405AC910 (MiUnlockAweVadsShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

ULONG_PTR __fastcall MiLockAweVadsShared(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1680);
  while ( 1 )
  {
    --*(_WORD *)(a1 + 486);
    result = ExAcquireAutoExpandPushLockShared(v3 + 392, 0LL);
    if ( !*(_QWORD *)(v1 + 1248) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1664, 3221226548LL);
  }
  return result;
}
