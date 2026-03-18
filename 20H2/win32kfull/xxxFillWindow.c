/*
 * XREFs of xxxFillWindow @ 0x1C00378D0
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C0113CA4 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C0145C30 (NtUserFillWindow.c)
 * Callees:
 *     xxxPaintRect @ 0x1C0037958 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C00CF94C (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(struct tagWND *a1, struct tagWND *a2, __int64 a3)
{
  struct tagWND *v3; // rbx
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
