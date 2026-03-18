/*
 * XREFs of ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x180193E40
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180080540 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180193E88 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BF96C (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

CZOrderedRect *__fastcall CZOrderedRect::CZOrderedRect(
        CZOrderedRect *this,
        const struct MilRectF *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  *((_DWORD *)this + 4) = a3;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 3);
  CZOrderedRect::UpdateDeviceRect(this, a4);
  return this;
}
