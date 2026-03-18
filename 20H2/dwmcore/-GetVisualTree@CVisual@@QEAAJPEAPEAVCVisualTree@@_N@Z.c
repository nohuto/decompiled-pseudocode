/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004AC18
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x1800203B0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x1800D3200 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1800D7F30 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801624E0 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x180182790 (-SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18018CE04 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C4010 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18004ACFC (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180050D54 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  unsigned int v3; // ebx
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v5; // r10
  struct CVisualTree *v6; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  struct CVisualTree *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(this);
  v10 = VisualTreeNoRef;
  v6 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
    *a2 = v6;
  }
  else
  {
    v8 = CVisualTree::Create(v5[2], (struct CVisual *)v5, &v10);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802D8F10, 2u, v8, 0xF6Cu, 0LL);
    else
      *a2 = v10;
  }
  return v3;
}
