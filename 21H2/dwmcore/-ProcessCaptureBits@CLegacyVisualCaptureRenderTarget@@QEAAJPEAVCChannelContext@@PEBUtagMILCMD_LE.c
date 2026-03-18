/*
 * XREFs of ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801C9A44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180027250 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1801B9428 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1801C9A14 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  struct CVisualTree *v3; // rdi
  unsigned int v5; // edx
  CVisual *Resource; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int VisualTree; // eax
  __int64 v11; // rcx
  CaptureBitsResponse *v12; // rax
  __int64 v13; // rcx
  struct CaptureBitsResponse *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  struct WICRect v18; // [rsp+40h] [rbp-18h] BYREF
  struct CVisualTree *v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = this;
  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v19 = 0LL;
  if ( v5 && COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) >= 0.0000011920929 )
  {
    Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 4), v5, 0xC3u);
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x22u);
      return v9;
    }
    VisualTree = CVisual::GetVisualTree(Resource, &v19);
    v9 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, VisualTree, 0x25u);
      v3 = v19;
    }
    else
    {
      v18 = (struct WICRect)*((_OWORD *)a3 + 1);
      v12 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
      v3 = v19;
      if ( v12
        && (v14 = CaptureBitsResponse::CaptureBitsResponse(
                    v12,
                    *((struct CGlobalSurfaceManager **)g_pComposition + 28),
                    a2,
                    v19,
                    1.0 / *((float *)a3 + 3),
                    &v18,
                    (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
                    *((_QWORD *)a3 + 4))) != 0LL )
      {
        v15 = CLegacySurfaceManager::AddCaptureBitsResponse(
                (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 28) + 120LL),
                v14);
        v9 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x38u);
        (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v14 + 40LL))(v14);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x32u);
      }
    }
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0x1Cu);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v3 + 16LL))(v3);
  return v9;
}
