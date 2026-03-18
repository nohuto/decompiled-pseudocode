/*
 * XREFs of ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C02A0840
 * Callers:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C029FFD4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C02A03C8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C02A0508 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C02A06BC (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C02A0870 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2028 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016985C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

struct tagRECT *__fastcall DDAMetaData::GetDirtyRectData(AUTOEXPANDALLOCATION **this, int a2)
{
  struct tagRECT *result; // rax

  result = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(this[4], 16 * a2 + 36, 1);
  if ( result )
    result += 2;
  return result;
}
