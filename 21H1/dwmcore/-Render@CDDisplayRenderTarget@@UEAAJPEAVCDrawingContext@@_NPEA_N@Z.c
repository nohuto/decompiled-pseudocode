/*
 * XREFs of ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7A44
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECD80 (-Render@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18004EDE4 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x180069E80 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x18006B9BC (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180188B50 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801904C0 (-GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801909C0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x18023A4A0 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Render(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  int v4; // ebx
  char v5; // bp
  bool *v6; // r13
  __int64 v9; // r15
  const struct CDirtyRegion *DirtyRegion; // rax
  CComposeTop *v11; // r15
  const struct CDirtyRegion *v12; // r14
  char v13; // r12
  COverlayContext *v14; // r12
  struct IDeviceTarget *CurrentBackBuffer; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  char v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char v25; // al
  bool v26; // zf
  __int64 v27; // rcx
  struct IDeviceTarget *v28; // rax
  __int64 v29; // rcx

  v4 = 0;
  v5 = 0;
  *a4 = 0;
  v6 = a4;
  if ( !*((_QWORD *)this - 2314) )
    goto LABEL_34;
  v9 = *((_QWORD *)this - 2315);
  if ( !v9 || !a3 && *((_BYTE *)this - 56) )
    goto LABEL_34;
  DirtyRegion = CDesktopTree::GetDirtyRegion(*((CDesktopTree **)this - 2315));
  v11 = *(CComposeTop **)(v9 + 5912);
  v12 = DirtyRegion;
  if ( v11 && CComposeTop::HasNewContent(v11) )
  {
    v13 = 1;
    CDDisplaySwapChain::CopyFrontToBackBuffer((CDDisplaySwapChain *)(*((_QWORD *)this - 2314) + 64LL));
  }
  else
  {
    v13 = 0;
  }
  if ( !v12 && !v13 )
  {
    v14 = (CDDisplayRenderTarget *)((char *)this - 18504);
LABEL_24:
    v25 = COverlayContext::PresentNeeded(v14);
    v26 = *((_BYTE *)this - 60) == 0;
    *((_BYTE *)this - 59) = v25;
    if ( !v26 || v25 || (v5 = 0, *((_BYTE *)this - 58)) )
    {
      *v6 = 1;
      v5 = 0;
    }
    goto LABEL_30;
  }
  CurrentBackBuffer = CDDisplaySwapChain::GetCurrentBackBuffer((CDDisplaySwapChain *)(*((_QWORD *)this - 2314) + 64LL));
  v14 = (CDDisplayRenderTarget *)((char *)this - 18504);
  v16 = CDrawingContext::BeginFrame(
          a2,
          CurrentBackBuffer,
          (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this - 7471) != 0 ? -300LL : -368LL)),
          (const struct _D3DCOLORVALUE *)((char *)this - 18568),
          (CDDisplayRenderTarget *)((char *)this - 18504));
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Au, 0LL);
  }
  else
  {
    v5 = 1;
    if ( v12
      && (v18 = CDDisplayRenderTarget::RenderDirtyRegion((CDDisplayRenderTarget *)((char *)this - 18680), a2, v12, v11),
          v4 = v18,
          v18 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x19Bu, 0LL);
    }
    else if ( v11
           && (!v12 ? (v20 = 0) : (v20 = *((_BYTE *)v12 + 4456)),
               v21 = CDDisplayRenderTarget::RenderComposeTop(
                       (CDDisplayRenderTarget *)((char *)this - 18680),
                       a2,
                       v11,
                       v20),
               v4 = v21,
               v21 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1A5u, 0LL);
    }
    else
    {
      v5 = 0;
      v23 = CDrawingContext::EndFrame((CD3DDevice **)a2);
      v4 = v23;
      if ( v23 >= 0 )
      {
        v6 = a4;
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1A9u, 0LL);
    }
  }
LABEL_30:
  if ( v4 < 0 )
    *((_BYTE *)this - 60) = 0;
  if ( v5 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_34:
  if ( g_LockAndReadTarget )
  {
    v27 = *((_QWORD *)this - 2314);
    if ( v27 )
    {
      v28 = CDDisplaySwapChain::GetCurrentBackBuffer((CDDisplaySwapChain *)(v27 + 64));
      v29 = (__int64)v28 + *(int *)(*((_QWORD *)v28 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 24LL))(
        v29,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return (unsigned int)v4;
}
