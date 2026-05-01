/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x1802C6C10
 * Callers:
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1802C8DB4 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x1802C7398 (XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___--XamlExplorerH.c)
 */

__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f_(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___(
               v5,
               a2)) != 0 )
  {
    v7 = v6 + 32;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = v7;
  if ( v7 )
  {
    v10 = 0LL;
    *a1 = v7;
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
