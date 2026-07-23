/*
 * XREFs of PfpEventHandleFullBuffer @ 0x140235FE0
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x14023602C (PfTFullEventListAdd.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140C4FDE0.Alignment);
    if ( LOWORD(stru_140C4FDE0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
