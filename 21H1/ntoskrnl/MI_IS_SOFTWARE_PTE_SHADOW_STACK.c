/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140308C48
 * Callers:
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
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
