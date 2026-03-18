/*
 * XREFs of ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180178BB8
 * Callers:
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180047DD4 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180078100 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180079490 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void __fastcall FastRegion::Internal::CWorkBuffer::~CWorkBuffer(void **this)
{
  if ( this + 2 != this[1] )
    operator delete(this[1]);
}
