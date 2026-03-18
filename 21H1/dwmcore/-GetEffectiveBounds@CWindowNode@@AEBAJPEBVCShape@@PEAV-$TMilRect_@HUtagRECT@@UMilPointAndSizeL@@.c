/*
 * XREFs of ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x1800B81C0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180029AC8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180048A4C (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetEffectiveBounds(_DWORD *a1, CShape *a2, _DWORD *a3, char *a4, char *a5)
{
  unsigned int v5; // ebx
  char v6; // bp
  char v10; // di
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-68h] BYREF
  int v16[4]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0;
  *a3 = 0;
  v6 = 0;
  a3[1] = 0;
  a3[2] = a1[174] - a1[172];
  v10 = 1;
  a3[3] = a1[175] - a1[173];
  if ( a2 )
  {
    v11 = *(_QWORD *)a2;
    v15 = 0LL;
    v12 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v11 + 32))(a2, &v15, 0LL);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3A7u, 0LL);
      return v5;
    }
    PixelAlign(v16, &v15);
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain((__int64)a3, (__int64)v16) )
      TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, v16);
    else
      v6 = 1;
    if ( !CShape::IsAxisAlignedRectangle(a2) )
      v10 = 0;
  }
  if ( a4 )
    *a4 = v10;
  if ( a5 )
    *a5 = v6;
  return v5;
}
