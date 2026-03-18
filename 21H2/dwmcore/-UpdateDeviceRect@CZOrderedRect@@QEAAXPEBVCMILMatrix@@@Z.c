/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6998
 * Callers:
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800D6948 (-SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1801E0B94 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(
        CZOrderedRect *this,
        const struct CMILMatrix *a2,
        __int64 a3,
        __int64 a4)
{
  float *v6; // rdx
  float v7; // xmm1_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm6_4

  v6 = (float *)((char *)this + 20);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a2, (__int64)v6, (float *)this, a4);
    v7 = *(float *)this;
    v8 = *((float *)this + 1);
    v9 = *((float *)this + 2);
    v10 = *((float *)this + 3);
  }
  else
  {
    v7 = *v6;
    v8 = *((float *)this + 6);
    v9 = *((float *)this + 7);
    v10 = *((float *)this + 8);
  }
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 8388608.0 )
    v7 = (float)(int)o_ceilf_0(v7);
  *(float *)this = v7;
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) < 8388608.0 )
    v8 = (float)(int)o_ceilf_0(v8);
  *((float *)this + 1) = v8;
  if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
    v9 = (float)(int)floorf(v9);
  *((float *)this + 2) = v9;
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
    v10 = (float)(int)floorf(v10);
  *((float *)this + 3) = v10;
}
