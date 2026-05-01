/*
 * XREFs of ?GetHostedRect@FrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x180184C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall FrameWrapper::GetHostedRect(HWND *this, struct tagRECT *a2)
{
  const char *v4; // r9
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT Rect; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  SetRectEmpty(a2);
  if ( !GetClientRect(this[4], &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6F,
             (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v4);
  v6 = (*(__int64 (__fastcall **)(HWND, _DWORD *))(*(_QWORD *)this[2] + 120LL))(this[2], v9);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Rect.left += v9[0];
    Rect.top += v9[1];
    Rect.right += v9[2];
    Rect.bottom += v9[3];
    result = 0LL;
    *a2 = Rect;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  return result;
}
