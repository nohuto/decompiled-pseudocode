/*
 * XREFs of ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801A393C
 * Callers:
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x18024A8E8 (-EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801A3AF0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Create(struct CLegacySwapChain *a1, struct CComputeScribbleRenderer **a2)
{
  CMILCOMBase *v4; // rax
  CMILCOMBase *v5; // rdi
  CRenderTargetBitmap *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CMILCOMBase *)DefaultHeap::Alloc(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 12) = 0;
    *((_WORD *)v4 + 26) = 0;
    *(_QWORD *)v4 = &CComputeScribbleRenderer::`vftable';
    *((_QWORD *)v4 + 2) = a1;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CComputeScribbleRenderer::Initialize(v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v6 = 0LL;
      *a2 = v5;
      v8 = 0;
      goto LABEL_10;
    }
    v9 = (unsigned int)v7;
    v10 = 109LL;
  }
  else
  {
    v8 = -2147024882;
    v10 = 107LL;
    v9 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
    (const char *)v9);
LABEL_10:
  if ( v6 )
    CRenderTargetBitmap::Release(v6);
  return v8;
}
