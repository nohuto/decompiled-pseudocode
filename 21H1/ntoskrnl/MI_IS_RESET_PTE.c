/*
 * XREFs of MI_IS_RESET_PTE @ 0x1402284A0
 * Callers:
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DE80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DE80;
  }
  return HIDWORD(a1) == 1;
}
