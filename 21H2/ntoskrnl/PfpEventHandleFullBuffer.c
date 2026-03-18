/*
 * XREFs of PfpEventHandleFullBuffer @ 0x140240250
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x14024029C (PfTFullEventListAdd.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(struct _SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140C4EB40.Alignment);
    if ( LOWORD(stru_140C4EB40.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
