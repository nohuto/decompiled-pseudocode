/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BFDAC
 * Callers:
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BFCB0 (-SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800BFD38 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x180195AC0 (--0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1800EEC97 (ceilf_0.c)
 *     floorf_0 @ 0x1800EECAF (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  float *v4; // rdx
  float v5; // xmm1_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4

  v4 = (float *)((char *)this + 20);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a2, (__int64)v4, (float *)this);
    v5 = *(float *)this;
    v6 = *((float *)this + 1);
    v7 = *((float *)this + 2);
    v8 = *((float *)this + 3);
  }
  else
  {
    v5 = *v4;
    v6 = *((float *)this + 6);
    v7 = *((float *)this + 7);
    v8 = *((float *)this + 8);
  }
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 8388608.0 )
    v5 = (float)(int)ceilf_0(v5);
  *(float *)this = v5;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 8388608.0 )
    v6 = (float)(int)ceilf_0(v6);
  *((float *)this + 1) = v6;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  *((float *)this + 2) = v7;
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) < 8388608.0 )
    v8 = (float)(int)floorf_0(v8);
  *((float *)this + 3) = v8;
}
