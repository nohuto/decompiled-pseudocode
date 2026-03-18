/*
 * XREFs of ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5E8C
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180016134 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180080D20 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800A34F8 (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Re.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800CFE40 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8C94 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9140 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18025A84C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18025AA18 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5EE8 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CRegionShape::BuildFromRects(__int64 a1, __int64 a2, int a3)
{
  FastRegion::CRegion *v3; // rdi
  _DWORD *result; // rax
  __int64 v6; // r8

  v3 = (FastRegion::CRegion *)(a1 + 16);
  result = *(_DWORD **)(a1 + 16);
  *result = 0;
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v6 )
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a3 )
    return (_DWORD *)CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(v3);
  return result;
}
