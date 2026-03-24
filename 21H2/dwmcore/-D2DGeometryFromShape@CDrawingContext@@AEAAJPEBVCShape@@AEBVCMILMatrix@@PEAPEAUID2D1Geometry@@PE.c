/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180016438
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18007F560 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180175D14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180082210 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  const struct CShape *v5; // rbx
  bool v6; // di
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx

  *a4 = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v6 = (unsigned __int8)CMILMatrix::Is2DAffine<1>(a3, a2) == 0;
  v9 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, __int64))(*(_QWORD *)v5 + 24LL))(
         v5,
         v7 & -(__int64)v6,
         v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x8E4u, 0LL);
  }
  else if ( a5 )
  {
    *a5 = v6;
  }
  return v11;
}
