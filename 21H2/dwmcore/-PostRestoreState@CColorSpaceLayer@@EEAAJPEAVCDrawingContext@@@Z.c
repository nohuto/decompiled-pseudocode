/*
 * XREFs of ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801B21B8 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CColorSpaceLayer::PostRestoreState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  *((_BYTE *)a2 + 8043) = *((_BYTE *)this + 120);
  v2 = CDrawingContext::FlushD2D(a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x3Cu);
  return v4;
}
