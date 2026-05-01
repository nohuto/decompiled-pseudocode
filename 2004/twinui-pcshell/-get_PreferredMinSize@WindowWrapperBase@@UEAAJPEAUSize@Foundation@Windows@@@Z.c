/*
 * XREFs of ?get_PreferredMinSize@WindowWrapperBase@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1802E10A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_PreferredMinSize(
        WindowWrapperBase *this,
        struct Windows::Foundation::Size *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
