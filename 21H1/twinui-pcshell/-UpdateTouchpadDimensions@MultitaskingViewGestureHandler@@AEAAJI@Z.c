/*
 * XREFs of ?UpdateTouchpadDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180362DE0
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180362CD0 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::UpdateTouchpadDimensions(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  const char *v3; // r9
  __int64 v4; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v7; // [rsp+30h] [rbp-29h]
  __int128 v8; // [rsp+80h] [rbp+27h] BYREF
  __int128 v9; // [rsp+90h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !(unsigned int)GetPointerInfo(a2, v6) )
  {
    v4 = 257LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  v9 = 0LL;
  v8 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v7, &v8, &v9) )
  {
    v4 = 263LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  LODWORD(v9) = DWORD2(v8) - v8;
  DWORD1(v9) = HIDWORD(v8) - DWORD1(v8);
  *((_QWORD *)this + 10) = v9;
  return 0LL;
}
