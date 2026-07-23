/*
 * XREFs of MiIsPteEvaluated @ 0x14025F1EC
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r8

  v2 = a2;
  v3 = MI_READ_PTE_LOCK_FREE(a1);
  return v3 && ((v3 & 1) != 0 || (v3 & 0x400) == 0 || !MiIsPrototypePteVadLookup(v3) || ((v5 >> 5) & 0x1F) != v2);
}
