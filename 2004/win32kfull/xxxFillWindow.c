/*
 * XREFs of xxxFillWindow @ 0x1C0061DEC
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C005DFA8 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C0143600 (NtUserFillWindow.c)
 * Callees:
 *     xxxPaintRect @ 0x1C0061E74 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C008ECEC (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  RECT v5; // [rsp+30h] [rbp-48h] BYREF

  v3 = a1;
  if ( !a1 )
    v3 = a2;
  v5 = 0LL;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, a3, &v5) )
    return xxxPaintRect(v3, &v5);
  else
    return 1LL;
}
