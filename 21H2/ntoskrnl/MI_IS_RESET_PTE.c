/*
 * XREFs of MI_IS_RESET_PTE @ 0x1402E2570
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DF80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF80;
  }
  return HIDWORD(a1) == 1;
}
