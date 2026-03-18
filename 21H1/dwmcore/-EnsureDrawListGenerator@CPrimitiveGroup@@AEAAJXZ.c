/*
 * XREFs of ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800A8830
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180017D50 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800A6720 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E71F0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18007C948 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800A88A0 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800CA834 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18017BBF8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801E6F7C (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801E7130 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1801E73A4 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  struct CPrimitiveGroupDrawListGenerator **v4; // rdx
  int NewGenerator; // eax
  __int64 v6; // rcx
  const struct _D3DCOLORVALUE *v8; // rdx
  int NewGeneratorForHeatMap; // eax
  __int64 v10; // rcx

  v2 = 0;
  if ( CComposition::IsOverdrawHeatMapEnabled(*((CComposition **)this + 2)) )
  {
    v8 = (const struct _D3DCOLORVALUE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v3 + 960)
                                       + 4);
    if ( !*((_BYTE *)this + 585) || !IsCloseColorF((const struct _D3DCOLORVALUE *)((char *)this + 664), v8) )
    {
      *((_BYTE *)this + 585) = 1;
      *(struct _D3DCOLORVALUE *)((char *)this + 664) = *(const struct _D3DCOLORVALUE *)&v8->r;
      CPrimitiveGroup::BuildHeatMap(this);
    }
  }
  else if ( *((_BYTE *)this + 585) )
  {
    *((_BYTE *)this + 585) = 0;
    CPrimitiveGroup::ReleaseHeatMap(this);
  }
  v4 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    if ( *((_BYTE *)this + 585) )
    {
      NewGeneratorForHeatMap = CPrimitiveGroup::CreateNewGeneratorForHeatMap(this, v4);
      v2 = NewGeneratorForHeatMap;
      if ( NewGeneratorForHeatMap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, NewGeneratorForHeatMap, 0x26Eu, 0LL);
    }
    else
    {
      NewGenerator = CPrimitiveGroup::CreateNewGenerator(this, v4);
      v2 = NewGenerator;
      if ( NewGenerator < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, NewGenerator, 0x272u, 0LL);
    }
  }
  return v2;
}
