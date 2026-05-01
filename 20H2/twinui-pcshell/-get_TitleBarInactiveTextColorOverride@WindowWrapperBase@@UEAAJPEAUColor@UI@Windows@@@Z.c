/*
 * XREFs of ?get_TitleBarInactiveTextColorOverride@WindowWrapperBase@@UEAAJPEAUColor@UI@Windows@@@Z @ 0x1802E0C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_TitleBarInactiveTextColorOverride(
        WindowWrapperBase *this,
        struct Windows::UI::Color *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x215,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
