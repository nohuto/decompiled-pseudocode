/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1402B7E00
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1402B7E4C (PfTFullEventListAdd.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(struct _SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140C4FDA0.Alignment);
    if ( LOWORD(stru_140C4FDA0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
