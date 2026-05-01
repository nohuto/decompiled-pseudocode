/*
 * XREFs of ?get_ApplicationDisplayName@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802D2CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewWrapperBase::get_ApplicationDisplayName(ViewWrapperBase *this, HSTRING *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x674,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
