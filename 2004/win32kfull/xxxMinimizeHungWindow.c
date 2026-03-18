/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C023FFD0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C023FE44 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // cl
  __int64 RectRgnIndirect; // rbx
  struct tagRECT v5; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v5 = 0LL;
  v3 = *(_BYTE *)(result + 31);
  if ( (v3 & 0x20) == 0 && (v3 & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((unsigned __int64 *)a1, (struct _LARGE_STRING *)&v5);
      if ( !IsRectEmptyInl(&v5) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), &v5);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
    xxxShowOwnedWindows((__int64)a1, 1, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(struct tagQ **)(*((_QWORD *)a1 + 2) + 424LL),
             0xAu,
             a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
