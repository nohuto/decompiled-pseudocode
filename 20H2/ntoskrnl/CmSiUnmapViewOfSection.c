/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14032AB78
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1405DA2C4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1405DBCD8 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1405DC148 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406DAD7C (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x140875D44 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403F86B0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
