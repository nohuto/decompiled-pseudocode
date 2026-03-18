/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801AF98C
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        __int64 a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  bool v8; // bp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  *a4 = 0LL;
  v8 = !CMILMatrix::IsAffine<1>(a3, 1);
  v9 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, struct ID2D1Geometry **))(*(_QWORD *)a2 + 24LL))(
         a2,
         a3 & -(__int64)v8,
         a4);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x938u);
  }
  else if ( a5 )
  {
    *a5 = v8;
  }
  return v11;
}
