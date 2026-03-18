/*
 * XREFs of MI_IS_RESET_PTE @ 0x1402BB120
 * Callers:
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiCombineCandidate @ 0x140367510 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DD40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DD40;
  }
  return HIDWORD(a1) == 1;
}
