/*
 * XREFs of ?GetAccessibleName@CMultitaskingViewFrameElement@@UEAAJPEAPEAG@Z @ 0x1803AACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::GetAccessibleName(HWND *this, unsigned __int16 **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  WCHAR String[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( !GetWindowTextW(this[58], String, 260) )
  {
    v3 = -2147023728;
    v4 = 509LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = SHStrDupW(String, a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 510LL;
    goto LABEL_5;
  }
  return v3;
}
