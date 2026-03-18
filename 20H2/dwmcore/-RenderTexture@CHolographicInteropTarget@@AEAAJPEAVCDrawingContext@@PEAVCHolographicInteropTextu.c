/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180255464
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECB10 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18004E618 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180085038 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180099D5C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18009A544 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ @ 0x1800D6A4C (-GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801553E4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x1801E35D8 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180252794 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802551F4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x180255F08 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x180256158 (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802561EC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(
        struct CD3DDevice **this,
        struct CDrawingContext *a2,
        struct CHolographicInteropTexture *a3,
        int a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v5; // rbx
  bool v9; // r15
  const struct CDirtyRegion *v10; // r13
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // r12d
  struct IRenderTargetBitmap *v16; // rax
  struct IRenderTargetBitmap *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct CD3DDevice **v20; // rdi
  struct IStereoscopicContentManager *StereoscopicContentManager; // rax
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  struct CMILMatrix *v26; // rax
  struct IDeviceTarget *v27; // rax
  int v28; // eax
  CHolographicInteropTarget *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  struct CVisualTree *v34; // [rsp+48h] [rbp-C0h]
  _OWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]
  _BYTE v39[128]; // [rsp+F8h] [rbp-10h] BYREF
  struct CMILMatrix *v41; // [rsp+188h] [rbp+80h]
  struct IRenderTargetBitmap *v42; // [rsp+198h] [rbp+90h] BYREF
  int v43; // [rsp+1A0h] [rbp+98h]

  v43 = a4;
  v5 = (RTL_SRWLOCK *)((char *)a3 + 392);
  v42 = 0LL;
  LOBYTE(v43) = 0;
  v9 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)a3 + 49);
  v10 = (const struct CDirtyRegion *)*((_QWORD *)a3 + 12);
  ReleaseSRWLockExclusive(v5);
  v11 = CHolographicInteropTexture::EnsureRenderBuffers(a3, this[21], (enum DXGI_FORMAT)*((_DWORD *)this + 45));
  v14 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x159u, 0LL);
  }
  else
  {
    v34 = (struct CVisualTree *)*((_QWORD *)a3 + 11);
    if ( (*((_BYTE *)a3 + 220) & 1) == 0 )
    {
      if ( *((_QWORD *)a3 + 11) )
      {
        if ( v10 )
        {
          v15 = a5;
          v16 = CHolographicInteropTexture::BeginFrame(a3, v12, a5);
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((__int64 *)&v42, (__int64)v16);
          v17 = v42;
          if ( v42 )
          {
            if ( !CDirtyRegion::IsEmpty(v10) )
            {
              v20 = this;
              v38 = 0;
              StereoscopicContentManager = CComposition::GetStereoscopicContentManager(this[2], v18, v19);
              if ( StereoscopicContentManager )
              {
                v22 = CStereoscopicContentManager::CalculateViewTransformForVisualTree(
                        (__int64)StereoscopicContentManager,
                        (__int64)v39,
                        (__int64)v34,
                        v15,
                        *((_DWORD *)a3 + 52));
                v23 = *(_OWORD *)(v22 + 16);
                v35[0] = *(_OWORD *)v22;
                v24 = *(_OWORD *)(v22 + 32);
                v35[1] = v23;
                v25 = *(_OWORD *)(v22 + 48);
                LODWORD(v22) = *(_DWORD *)(v22 + 64);
                v35[2] = v24;
                v35[3] = v25;
                v36 = v22;
                CMILMatrix::Multiply(
                  (const struct CMILMatrix *)v35,
                  (struct CHolographicInteropTexture *)((char *)a3 + 252),
                  (struct CMILMatrix *)v37);
                v26 = (struct CMILMatrix *)v37;
              }
              else
              {
                v26 = (struct CHolographicInteropTexture *)((char *)a3 + 252);
              }
              v41 = v26;
              v27 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 64LL))(v17);
              v28 = CDrawingContext::BeginFrame(a2, v27, v41, (const struct _D3DCOLORVALUE *)(v20 + 23), 0LL);
              v14 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0, v28, 0x186u, 0LL);
              }
              else
              {
                LOBYTE(v43) = 1;
                v30 = CHolographicInteropTarget::RenderDirtyRegion(v29, a3, v34, v10, v33, v15, v17, a2);
                v14 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x19Au, 0LL);
                }
                else if ( *((_BYTE *)a2 + 5948) || CDrawingContext::GetFrameContainsMonitorSpecificContent(a2) )
                {
                  v9 = 1;
                }
              }
            }
            CHolographicInteropTexture::EndFrame(a3, v18, v15, v9);
            if ( (_BYTE)v43 )
              CDrawingContext::EndFrame((CD3DDevice **)a2);
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v42);
  return v14;
}
