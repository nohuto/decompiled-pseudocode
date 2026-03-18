/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140239F04
 * Callers:
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
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
