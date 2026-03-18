/*
 * XREFs of MiIsPteEvaluated @ 0x1402397A8
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1402394E4 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
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
