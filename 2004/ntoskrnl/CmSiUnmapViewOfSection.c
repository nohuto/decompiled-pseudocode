/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14035A278
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1406376C4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140638B80 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140638FF0 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1407088EC (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x1408701EC (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403F3B00 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
