/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x1801B4564
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x1801B2D8C (-PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1801B3574 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x1801C0648 (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 */

void __fastcall CDrawingContext::UpdateDeviceTransform(
        CDrawingContext *this,
        const struct CMILMatrix *a2,
        bool *a3,
        __int64 a4)
{
  bool v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  COcclusionContext *v11; // rcx

  v7 = 1;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 96), a2, (__int64)a3, a4);
  *((_BYTE *)this + 8040) = CMILMatrix::IsIdentity<0>((__int64)this + 96, v8, v9, v10);
  if ( *((_BYTE *)this + 7920) )
  {
    v11 = (COcclusionContext *)*((_QWORD *)this + 993);
    if ( v11 )
      v7 = (int)COcclusionContext::UpdateDeviceTransform(v11, a2) >= 0;
  }
  if ( a3 )
    *a3 = v7;
}
