/*
 * XREFs of ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8D60
 * Callers:
 *     ?Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFD40 (-Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18006622C (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x18007AE10 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007B624 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6F54 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::Render(
        CLegacyStereoRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  unsigned int v4; // ebx
  CDesktopTree *v8; // rcx
  const struct CDirtyRegion *DirtyRegion; // rbp
  char v10; // r11
  int v11; // eax
  __int64 v12; // rcx
  char v13; // bl
  struct IDeviceTarget *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx

  v4 = 0;
  *a4 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    v8 = (CDesktopTree *)*((_QWORD *)this - 2313);
    if ( v8 )
    {
      if ( a3 || !*((_BYTE *)this - 90) )
      {
        DirtyRegion = CDesktopTree::GetDirtyRegion(v8);
        v11 = CLegacyRenderTarget::Render((CLegacyStereoRenderTarget *)((char *)this - 16), a2, v10, a4);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Eu, 0LL);
        }
        else if ( DirtyRegion && (!*((_BYTE *)this - 56) || *(_DWORD *)(*((_QWORD *)this - 2333) + 284LL)) )
        {
          v13 = *((_BYTE *)this - 7175);
          v14 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this - 8))(
                                          *((_QWORD *)this - 8),
                                          2LL);
          v15 = CDrawingContext::BeginFrame(
                  a2,
                  v14,
                  (CLegacyStereoRenderTarget *)((char *)this + (v13 != 0 ? -18348LL : -18416LL)),
                  (const struct _D3DCOLORVALUE *)((char *)this - 18568),
                  (CLegacyStereoRenderTarget *)((char *)this - 18208));
          v4 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x26u, 0LL);
          }
          else
          {
            v17 = CLegacyRenderTarget::RenderDirtyRegion(
                    (CLegacyStereoRenderTarget *)((char *)this - 18680),
                    a2,
                    DirtyRegion,
                    0LL);
            v4 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Cu, 0LL);
              CDrawingContext::EndFrame((CD3DDevice **)a2);
            }
            else
            {
              v19 = CDrawingContext::EndFrame((CD3DDevice **)a2);
              v4 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2Fu, 0LL);
            }
          }
        }
      }
    }
  }
  return v4;
}
