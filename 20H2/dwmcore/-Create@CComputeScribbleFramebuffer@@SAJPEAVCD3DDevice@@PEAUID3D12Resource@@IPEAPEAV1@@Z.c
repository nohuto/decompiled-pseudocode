/*
 * XREFs of ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801A5914
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x18024F7F8 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1801A555C (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801A5B40 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Create(
        struct CD3DDevice *a1,
        struct ID3D12Resource *a2,
        int a3,
        struct CComputeScribbleFramebuffer **a4)
{
  CComputeScribbleFramebuffer *v8; // rax
  volatile signed __int32 *v9; // rdi
  CDrawListEntry *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CComputeScribbleFramebuffer *)DefaultHeap::Alloc(0xF0uLL);
  if ( v8 )
    v9 = (volatile signed __int32 *)CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(v8, a1, a2, a3);
  else
    v9 = 0LL;
  v10 = (CDrawListEntry *)v9;
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 2);
    v11 = CComputeScribbleFramebuffer::Initialize((CComputeScribbleFramebuffer *)v9);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v10 = 0LL;
      *a4 = (struct CComputeScribbleFramebuffer *)v9;
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v11);
      v10 = (CDrawListEntry *)v9;
    }
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v10 )
    CDrawListEntry::Release(v10);
  return v12;
}
