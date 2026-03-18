/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14031C6A8
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140685294 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1406866FC (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140686B6C (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406E4C8C (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x14086E6FC (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403F2870 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
