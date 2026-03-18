/*
 * XREFs of _PostGestureMessage@8 @ 0x188A48
 * Callers:
 *     _NtUserInjectGesture@20 @ 0x16561B (_NtUserInjectGesture@20.c)
 * Callees:
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 */

unsigned int __fastcall PostGestureMessage(struct tagPROCESSINFO *a1, unsigned int a2)
{
  int v4; // eax
  int v5; // ecx

  v4 = _HMObjectFromHandle(a2);
  return _PostMessageCheckIL(a1, (struct tagPROCESSINFO *)0x119, *(struct tagWND **)(v4 + 24), a2, v5);
}
