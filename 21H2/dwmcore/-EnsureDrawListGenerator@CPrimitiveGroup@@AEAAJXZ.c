/*
 * XREFs of ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18000C388
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000B6DC (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000B810 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180232170 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18000C3F8 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C41C (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800DF29C (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801B2C00 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180231ED0 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180232098 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180232324 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  struct CPrimitiveGroupDrawListGenerator **v4; // rdx
  int NewGenerator; // eax
  unsigned int v6; // ecx
  const struct _D3DCOLORVALUE *v8; // rdx
  int NewGeneratorForHeatMap; // eax
  unsigned int v10; // ecx

  v2 = 0;
  if ( CComposition::IsOverdrawHeatMapEnabled(*((CComposition **)this + 2)) )
  {
    v8 = (const struct _D3DCOLORVALUE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v3 + 1112)
                                       + 4);
    if ( !*((_BYTE *)this + 545) || !IsCloseColorF((const struct _D3DCOLORVALUE *)this + 39, v8) )
    {
      *((_BYTE *)this + 545) = 1;
      *((struct _D3DCOLORVALUE *)this + 39) = *(const struct _D3DCOLORVALUE *)&v8->r;
      CPrimitiveGroup::BuildHeatMap(this);
    }
  }
  else if ( *((_BYTE *)this + 545) )
  {
    *((_BYTE *)this + 545) = 0;
    CPrimitiveGroup::ReleaseHeatMap(this);
  }
  v4 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 128);
  if ( !*((_QWORD *)this + 16) )
  {
    if ( *((_BYTE *)this + 545) )
    {
      NewGeneratorForHeatMap = CPrimitiveGroup::CreateNewGeneratorForHeatMap(this, v4);
      v2 = NewGeneratorForHeatMap;
      if ( NewGeneratorForHeatMap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, NewGeneratorForHeatMap, 0x285u, 0LL);
    }
    else
    {
      NewGenerator = CPrimitiveGroup::CreateNewGenerator(this, v4);
      v2 = NewGenerator;
      if ( NewGenerator < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, NewGenerator, 0x289u, 0LL);
    }
  }
  return v2;
}
