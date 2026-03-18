/*
 * XREFs of ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000B6DC
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18000B3D0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18000C388 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GetDrawListGeneratorNoRef(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  v4 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x24Du, 0LL);
  else
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)*((_QWORD *)this + 16);
  return v6;
}
