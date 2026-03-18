/*
 * XREFs of ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18018CE04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004AC18 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800507E0 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1801788D4 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x18018CDD4 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  struct CVisualTree *v3; // rsi
  unsigned int v5; // edx
  struct CaptureBitsResponse *v6; // rdi
  CVisual *Resource; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int VisualTree; // eax
  __int64 v12; // rcx
  CaptureBitsResponse *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct WICRect v18; // [rsp+40h] [rbp-28h] BYREF
  struct CVisualTree *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = this;
  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  v19 = 0LL;
  if ( !v5 || COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) < 0.0000011920929 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x1Cu, 0LL);
    goto LABEL_14;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 3), v5, 0xC3u);
  if ( !Resource )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x22u, 0LL);
    return v10;
  }
  VisualTree = CVisual::GetVisualTree(Resource, &v19);
  v10 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v18 = (struct WICRect)*((_OWORD *)a3 + 1);
    v13 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
    v3 = v19;
    if ( v13 )
      v6 = CaptureBitsResponse::CaptureBitsResponse(
             v13,
             *((struct CGlobalSurfaceManager **)g_pComposition + 12),
             a2,
             v19,
             1.0 / *((float *)a3 + 3),
             &v18,
             (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
             *((_QWORD *)a3 + 4));
    if ( !v6 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x32u, 0LL);
      goto LABEL_16;
    }
    v15 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 12) + 96LL),
            v6);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x38u, 0LL);
LABEL_14:
    if ( v6 )
      (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v6 + 32LL))(v6);
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, VisualTree, 0x25u, 0LL);
  v3 = v19;
LABEL_16:
  if ( v3 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v3 + 16LL))(v3);
  return v10;
}
