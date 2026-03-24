/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402BA73C
 * Callers:
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x1403697A0 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_SOFTWARE_PTE_SHADOW_STACK(_QWORD *a1)
{
  if ( (*a1 & 0x400LL) != 0 )
    return 0LL;
  else
    return (*a1 >> 26) & 1LL;
}
