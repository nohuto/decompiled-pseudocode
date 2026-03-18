/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140346A48
 * Callers:
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x140367510 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
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
