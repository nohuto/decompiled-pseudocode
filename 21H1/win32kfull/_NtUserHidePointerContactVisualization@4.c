/*
 * XREFs of _NtUserHidePointerContactVisualization@4 @ 0x165044
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserHidePointerContactVisualization(unsigned int a1)
{
  int v1; // esi

  v1 = 0;
  EnterCrit(0, 1);
  if ( a1 < 2 || a1 > 0xFFFF )
    UserSetLastError((struct _NT_TIB *)0x57);
  else
    v1 = CTouchProcessor::SetPointerVisualization(_gpTouchProcessor, a1, 0, 0, 1);
  UserSessionSwitchLeaveCrit();
  return v1;
}
