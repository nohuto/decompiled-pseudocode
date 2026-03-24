/*
 * XREFs of MI_IS_RESET_PTE @ 0x14023DD20
 * Callers:
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x1403697A0 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return HIDWORD(a1) == 1;
}
