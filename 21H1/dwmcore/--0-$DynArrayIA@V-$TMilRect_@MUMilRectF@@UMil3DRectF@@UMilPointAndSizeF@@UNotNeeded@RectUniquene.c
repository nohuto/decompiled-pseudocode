/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$00$0A@@@QEAA@XZ @ 0x180035B14
 * Callers:
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x180017B2C (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180035ADC (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180178AAC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 * Callees:
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>::DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = (void *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 20) = 1;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v2);
  return a1;
}
