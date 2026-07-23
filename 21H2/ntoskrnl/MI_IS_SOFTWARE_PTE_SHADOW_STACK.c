/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C
 * Callers:
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
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
