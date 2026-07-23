/*
 * XREFs of PfpEventHandleFullBuffer @ 0x140305B20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x140305B6C (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !stru_140CEC090.Header.SignalState )
  {
    result = LOWORD(stru_140C4FCE0.Alignment);
    if ( LOWORD(stru_140C4FCE0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&stru_140CEC090, 0, 0);
  }
  return result;
}
