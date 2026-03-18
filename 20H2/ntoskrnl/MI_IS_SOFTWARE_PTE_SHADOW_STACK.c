/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140317FF8
 * Callers:
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x1403694F0 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
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
