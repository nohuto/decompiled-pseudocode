/*
 * XREFs of ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800300B0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180196A9C (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CResampleLayer::RestoreState(CResampleLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v5 = CExternalLayer::RestoreState(this, a2, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xEEu, 0LL);
  }
  else
  {
    v8 = CResampleLayer::RenderLayer(this, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xF0u, 0LL);
  }
  return v7;
}
