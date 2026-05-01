/*
 * XREFs of ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802E97B0 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindow(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        const struct _GUID *a4,
        void **a5)
{
  int v5; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  __int64 result; // rax
  struct tagRECT v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = *a3;
  try
  {
    v5 = XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand(this, a2, &v9, 1u, a4, a5);
    v7 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v5);
    result = v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9E,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v6);
  }
  return result;
}
