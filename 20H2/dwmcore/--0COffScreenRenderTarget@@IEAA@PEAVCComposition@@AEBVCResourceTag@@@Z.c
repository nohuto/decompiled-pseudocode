/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180184B3C
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180169CF4 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18016A734 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18018A73C (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1801F0C70 (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800330FC (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18004B4A0 (--0COcclusionContext@@QEAA@XZ.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  COffScreenRenderTarget *result; // rax
  __int128 v10; // xmm0

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v5 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v5 + 4) + 72) = &COffScreenRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &COffScreenRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v6 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v6 + 68) = v6 - 1816;
  v7 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v7 + 68) = v7 - 1832;
  v8 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v8 + 68) = v8 - 1856;
  *((_DWORD *)this + 38) = 0;
  COcclusionContext::COcclusionContext((COffScreenRenderTarget *)((char *)this + 184));
  *((_DWORD *)this + 442) = 1;
  *((_DWORD *)this + 450) = 0;
  *((_QWORD *)this + 222) = (char *)this + 1808;
  *((_QWORD *)this + 223) = (char *)this + 1808;
  *((_DWORD *)this + 448) = 6;
  *((_DWORD *)this + 449) = 6;
  result = this;
  v10 = *(_OWORD *)a3;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *(_OWORD *)((char *)this + 1864) = v10;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 1065353216;
  *((_BYTE *)this + 128) = 1;
  return result;
}
