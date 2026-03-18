/*
 * XREFs of ?PreRender@CLegacySwapChain@@UEAAJXZ @ 0x1800C0D30
 * Callers:
 *     ?PreRender@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F1BB0 (-PreRender@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?PreRender@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJXZ @ 0x1800F2050 (-PreRender@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJXZ.c)
 *     ?PreRender@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ @ 0x1800F2460 (-PreRender@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801A10F0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 */

__int64 __fastcall CLegacySwapChain::PreRender(CLegacySwapChain *this)
{
  CComputeScribbleRenderer *v1; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CComputeScribbleRenderer *)*((_QWORD *)this - 10);
  if ( !v1 )
    return 0LL;
  v3 = CComputeScribbleRenderer::PreRender(v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36A,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
    (const char *)(unsigned int)v3,
    v5);
  return v4;
}
