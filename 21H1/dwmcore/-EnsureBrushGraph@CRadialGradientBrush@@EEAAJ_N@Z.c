/*
 * XREFs of ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1801EB690
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18009C9F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1350 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::EnsureBrushGraph(CRadialGradientBrush *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( !a2 || *((_QWORD *)this + 15) != *((_QWORD *)this + 16) )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
    v4 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 8);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x15Du, 0LL);
  }
  return v2;
}
