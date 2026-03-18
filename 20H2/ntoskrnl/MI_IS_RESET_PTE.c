/*
 * XREFs of MI_IS_RESET_PTE @ 0x140348D80
 * Callers:
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiCombineCandidate @ 0x1403694F0 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DDC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DDC0;
  }
  return HIDWORD(a1) == 1;
}
