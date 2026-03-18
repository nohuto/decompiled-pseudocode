/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x1800208D0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x180034B20 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x180035904 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180037108 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801642F0 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x1801843E0 (-SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18018EA84 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C5EE0 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180035960 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180036814 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802D9D30, 2u, v8, 0xF6Cu, 0LL);
    else
      *a2 = v10;
  }
  return v3;
}
