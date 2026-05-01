/*
 * XREFs of ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x180329714
 * Callers:
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x18032A278 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall wil::make_unique_hlocal_nothrow<tagPOINTER_DEVICE_INFO [0]>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rsi
  char *v6; // rax
  char *v7; // rbx
  char *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0x3CAE759203CAE7LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3818LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
    __debugbreak();
  }
  v5 = 1080 * a2;
  v6 = (char *)LocalAlloc(0, 1080 * a2);
  *a1 = v6;
  v7 = v6;
  if ( v6 )
  {
    v8 = &v6[v5];
    if ( v6 != v8 )
    {
      do
      {
        memset_0(v7, 0, 0x438uLL);
        v7 += 1080;
      }
      while ( v7 != v8 );
    }
  }
  return a1;
}
