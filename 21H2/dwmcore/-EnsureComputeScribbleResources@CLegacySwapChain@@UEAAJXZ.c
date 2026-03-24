/*
 * XREFs of ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x180249B80
 * Callers:
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F74E0 (-EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ @ 0x1800F7C90 (-EnsureComputeScribbleResources@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x18019F97C (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x1802524A8 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 */

__int64 __fastcall CLegacySwapChain::EnsureComputeScribbleResources(CLegacySwapChain *this)
{
  struct CComputeScribbleRenderer **v1; // rdx
  struct CLegacySwapChain *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  CSwapChainBuffer **v7; // rbx
  CSwapChainBuffer **v8; // rbp
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CComputeScribbleRenderer **)((char *)this - 80);
  v3 = (CLegacySwapChain *)((char *)this - 352);
  if ( *((_QWORD *)this - 10)
    || (*v1 = 0LL, v4 = CComputeScribbleRenderer::Create((CLegacySwapChain *)((char *)this - 352), v1), v5 = v4, v4 >= 0) )
  {
    v7 = (CSwapChainBuffer **)*((_QWORD *)this - 31);
    v8 = (CSwapChainBuffer **)*((_QWORD *)this - 30);
    while ( 1 )
    {
      if ( v7 == v8 )
        return 0LL;
      v9 = CSwapChainBuffer::EnsureComputeScribbleResources(*v7, v3);
      v10 = v9;
      if ( v9 < 0 )
        break;
      ++v7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
