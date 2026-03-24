/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F072C
 * Callers:
 *     ?Render@CVisualCapture@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F6C00 (-Render@CVisualCapture@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED26C (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F1C0C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801F1C8C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F21E0 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, struct CDrawingContext *a2, __int64 a3, bool *a4)
{
  int v4; // ebx
  CVisualCapture *v5; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf

  v4 = 0;
  v5 = (CVisualCapture *)((char *)this - 1984);
  if ( *((_BYTE *)this - 212) )
  {
    v8 = COffScreenRenderTarget::Render((CVisualCapture *)((char *)this - 56), a2, a3, a4);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Au, 0LL);
      goto LABEL_10;
    }
    v10 = CVisualCapture::EnqueueSetEvent(v5);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9Bu, 0LL);
      goto LABEL_10;
    }
  }
  v12 = *((_BYTE *)this - 55);
  v13 = v12 == 0;
  if ( !v12 )
  {
    CVisualCapture::CheckForCaptureCompleted(v5);
    v13 = *((_BYTE *)this - 55) == 0;
  }
  *a4 = v13;
LABEL_10:
  *((_BYTE *)this - 212) = 0;
  if ( v4 < 0 )
    CVisualCapture::SendCaptureCompleted(v5);
  return 0LL;
}
