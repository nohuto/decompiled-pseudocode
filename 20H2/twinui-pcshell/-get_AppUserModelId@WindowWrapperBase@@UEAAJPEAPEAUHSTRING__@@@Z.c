/*
 * XREFs of ?get_AppUserModelId@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18007B430
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_AppUserModelId(HSTRING *this, HSTRING *a2)
{
  HRESULT v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsDuplicateString(this[38], a2);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      v4);
    __debugbreak();
    JUMPOUT(0x18012EEA2LL);
  }
  return 0LL;
}
