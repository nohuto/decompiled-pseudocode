/*
 * XREFs of ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801E431C
 * Callers:
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x18028B348 (-EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801E4460 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Create(struct CLegacySwapChain *a1, struct CComputeScribbleRenderer **a2)
{
  char *v4; // rax
  CComputeScribbleRenderer *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)DefaultHeap::Alloc(0x38uLL);
  v5 = (CComputeScribbleRenderer *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_WORD *)v4 + 24) = 0;
    *(_QWORD *)v4 = &CComputeScribbleRenderer::`vftable';
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 2) = a1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
    v6 = CComputeScribbleRenderer::Initialize(v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0;
    }
    v8 = (unsigned int)v6;
    v9 = 63LL;
  }
  else
  {
    v5 = 0LL;
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)v8);
  if ( v5 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v5);
  return v7;
}
