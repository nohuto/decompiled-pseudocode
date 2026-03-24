/*
 * XREFs of MiIsPteEvaluated @ 0x14027124C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140270F88 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140555970 (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v5; // r8

  v2 = a2;
  v3 = MI_READ_PTE_LOCK_FREE(a1);
  return v3
      && ((v3 & 1) != 0 || (v3 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v3) || ((v5 >> 5) & 0x1F) != v2);
}
