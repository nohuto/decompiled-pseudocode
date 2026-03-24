/*
 * XREFs of ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800D2EF4
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BC70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

CMergedDirtyRect *__fastcall CMergedDirtyRect::CMergedDirtyRect(CMergedDirtyRect *this)
{
  CMergedDirtyRect *result; // rax

  *(_QWORD *)this = &CMergedRectBase<4>::`vftable';
  `vector constructor iterator'(
    (char *)this + 8,
    16LL,
    4LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  memset_0(this, 0, 0x58uLL);
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CMergedDirtyRect::`vftable';
  result = this;
  *((_DWORD *)this + 19) = 1;
  return result;
}
