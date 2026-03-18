/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180299F98 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801932D8 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x180201384 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180297470 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18029A220 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x18029B0F8 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x18029B35C (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x18029B3F0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
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
  __int64 v20; // r9
  struct CD3DDevice **v21; // rdi
  struct IStereoscopicContentManager *StereoscopicContentManager; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  struct CMILMatrix *v27; // rax
  struct IDeviceTarget *v28; // rax
  int v29; // eax
  CHolographicInteropTarget *v30; // rcx
  int v31; // eax
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
  v5 = (RTL_SRWLOCK *)((char *)a3 + 408);
  v42 = 0LL;
  LOBYTE(v43) = 0;
  v9 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)a3 + 51);
  v10 = (const struct CDirtyRegion *)*((_QWORD *)a3 + 14);
  ReleaseSRWLockExclusive(v5);
  v11 = CHolographicInteropTexture::EnsureRenderBuffers(a3, this[22], (enum DXGI_FORMAT)*((_DWORD *)this + 50));
  v14 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v11, 0x166u);
  }
  else
  {
    v34 = (struct CVisualTree *)*((_QWORD *)a3 + 12);
    if ( (*((_BYTE *)a3 + 236) & 1) == 0 )
    {
      if ( *((_QWORD *)a3 + 12) )
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
              v21 = this;
              v38 = 0;
              StereoscopicContentManager = CComposition::GetStereoscopicContentManager(this[2], v18, v19, v20);
              if ( StereoscopicContentManager )
              {
                v23 = CStereoscopicContentManager::CalculateViewTransformForVisualTree(
                        (__int64)StereoscopicContentManager,
                        (__int64)v39,
                        (__int64)v34,
                        v15,
                        *((_DWORD *)a3 + 56));
                v24 = *(_OWORD *)(v23 + 16);
                v35[0] = *(_OWORD *)v23;
                v25 = *(_OWORD *)(v23 + 32);
                v35[1] = v24;
                v26 = *(_OWORD *)(v23 + 48);
                LODWORD(v23) = *(_DWORD *)(v23 + 64);
                v35[2] = v25;
                v35[3] = v26;
                v36 = v23;
                CMILMatrix::Multiply(
                  (const struct CMILMatrix *)v35,
                  (struct CHolographicInteropTexture *)((char *)a3 + 268),
                  (struct CMILMatrix *)v37);
                v27 = (struct CMILMatrix *)v37;
              }
              else
              {
                v27 = (struct CHolographicInteropTexture *)((char *)a3 + 268);
              }
              v41 = v27;
              v28 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 64LL))(v17);
              v29 = CDrawingContext::BeginFrame(a2, v28, v41, (const struct _D3DCOLORVALUE *)((char *)v21 + 204), 0LL);
              v14 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0LL, v29, 0x193u);
              }
              else
              {
                LOBYTE(v43) = 1;
                v31 = CHolographicInteropTarget::RenderDirtyRegion(v30, a3, v34, v10, v33, v15, v17, a2);
                v14 = v31;
                if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v31, 0x1A7u);
                }
                else if ( *((_BYTE *)a2 + 7964) || *((_BYTE *)a2 + 7965) && *((_DWORD *)g_pComposition + 108) )
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
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)&v42);
  return v14;
}
