/*
 * XREFs of ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006B960 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800846CC (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180085A50 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800865D4 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800B7D2C (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CAB30 (-GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800F5A24 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180191610 (-GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801916A0 (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRoundedRectangleGeometryData::GetBaseRect(__int64 a1, __int64 a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  if ( *(_BYTE *)(a1 + 52) )
  {
    v3 = *(float *)(a1 + 4);
    v4 = *(float *)a1;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    v5 = v4 + *(float *)(a1 + 8);
    *(float *)(a2 + 4) = v3;
    v6 = v3 + *(float *)(a1 + 12);
    *(float *)(a2 + 8) = v5;
    *(float *)(a2 + 12) = v6;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  return a2;
}
