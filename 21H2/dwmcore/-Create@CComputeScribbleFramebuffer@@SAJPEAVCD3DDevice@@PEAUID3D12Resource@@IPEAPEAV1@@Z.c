/*
 * XREFs of ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801EB5C0
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x18028BF70 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1801EB114 (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801EB930 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Create(
        struct CD3DDevice *a1,
        struct ID3D12Resource *a2,
        int a3,
        struct CComputeScribbleFramebuffer **a4)
{
  CComputeScribbleFramebuffer *v8; // rax
  CComputeScribbleFramebuffer *v9; // rax
  CComputeScribbleFramebuffer *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (CComputeScribbleFramebuffer *)DefaultHeap::Alloc(0xF8uLL);
  if ( !v8 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  v9 = CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(v8, a1, a2, a3);
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    v14 = 41LL;
    v13 = 2147942414LL;
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CComputeScribbleFramebuffer *)((char *)v9 + 8));
  v11 = CComputeScribbleFramebuffer::Initialize(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = v10;
    return 0;
  }
  v13 = (unsigned int)v11;
  v14 = 43LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)v13);
  if ( v10 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v10);
  return v12;
}
