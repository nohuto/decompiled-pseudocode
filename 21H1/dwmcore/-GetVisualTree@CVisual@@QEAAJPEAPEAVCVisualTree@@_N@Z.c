/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008F5A8
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x180020D00 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x18008DED4 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1800D0590 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x180166E50 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x180187150 (-SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801916B4 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C8810 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18008DF30 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18008F68C (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  unsigned int v3; // ebx
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v5; // r10
  struct CVisualTree *v6; // rdi
  int v8; // eax
  __int64 v9; // rcx
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
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802DCCB0, 2u, v8, 0xF6Cu, 0LL);
    else
      *a2 = v10;
  }
  return v3;
}
