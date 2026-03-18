/*
 * XREFs of MiIsPteEvaluated @ 0x140344E10
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140344B4C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v5; // r8

  v2 = a2;
  v3 = MI_READ_PTE_LOCK_FREE(a1);
  return v3
      && ((v3 & 1) != 0 || (v3 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v3) || ((v5 >> 5) & 0x1F) != v2);
}
