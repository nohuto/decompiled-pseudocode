/*
 * XREFs of ?GetAutomationId@CScrollViewerHost@@UEAAJPEAPEAG@Z @ 0x1803A92C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall CScrollViewerHost::GetAutomationId(CScrollViewerHost *this, unsigned __int16 **a2)
{
  __int64 v3; // rdi
  unsigned __int16 *v4; // rsi
  int v5; // ebx
  _WORD *v6; // rax
  _WORD *v7; // rcx
  __int16 v8; // dx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( (*((_BYTE *)this + 392) & 4) == 0 )
    return 2147500033LL;
  v10[0] = 0LL;
  v3 = 20LL;
  v10[1] = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  if ( !is_mul_ok(0x14uLL, 2uLL) )
  {
    v5 = -2147024362;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v5);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
    return (unsigned int)v5;
  }
  v5 = 0;
  v6 = CoTaskMemAlloc(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    v11 = 20LL;
    v4 = v6;
    v10[0] = v6;
    *v6 = 0;
  }
  else
  {
    v5 = -2147024882;
    v7 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_12;
  while ( --v3 )
  {
    v8 = *(_WORD *)((char *)v7 + (char *)L"TaskSwitchingWindow" - (char *)v4);
    if ( !v8 )
      break;
    *v7++ = v8;
  }
  v10[0] = 0LL;
  v11 = 0LL;
  *v7 = 0;
  *a2 = v4;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return 0LL;
}
