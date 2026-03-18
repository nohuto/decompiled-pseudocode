/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180243D50
 * Callers:
 *     ?Render@CVisualCapture@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180107D10 (-Render@CVisualCapture@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802436BC (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18024373C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180243E40 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Render(LARGE_INTEGER *this, struct CDrawingContext *a2, char a3, bool *a4)
{
  CVisualCapture *v4; // rdi
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  char v14; // al
  bool v15; // zf

  v4 = (CVisualCapture *)&this[-246];
  if ( !(*(unsigned __int8 (__fastcall **)(LARGE_INTEGER *))(this[-246].QuadPart + 264))(this - 246) )
    goto LABEL_5;
  LOBYTE(v9) = a3;
  v10 = COffScreenRenderTarget::Render(this - 7, a2, v9, a4);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xA1u);
    goto LABEL_11;
  }
  v12 = CVisualCapture::EnqueueSetEvent(v4);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xA2u);
LABEL_11:
    BYTE4(this[-27].QuadPart) = 0;
    CVisualCapture::SendCaptureCompleted(v4);
    return 0LL;
  }
  BYTE4(this[-27].QuadPart) = 0;
LABEL_5:
  v14 = BYTE1(this[-7].LowPart);
  v15 = v14 == 0;
  if ( !v14 )
  {
    CVisualCapture::CheckForCaptureCompleted(v4);
    v15 = BYTE1(this[-7].LowPart) == 0;
  }
  *a4 = v15;
  return 0LL;
}
