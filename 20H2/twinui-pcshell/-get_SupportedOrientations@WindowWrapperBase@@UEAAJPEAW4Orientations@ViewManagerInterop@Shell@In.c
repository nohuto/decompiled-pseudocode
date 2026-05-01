/*
 * XREFs of ?get_SupportedOrientations@WindowWrapperBase@@UEAAJPEAW4Orientations@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E0990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_SupportedOrientations(
        WindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::Orientations *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a2 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B9,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
