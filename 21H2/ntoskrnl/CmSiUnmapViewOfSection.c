/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14024A6A8
 * Callers:
 *     HvpViewMapDeleteViewTreeNode @ 0x140619644 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1406FB5C4 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1406FB860 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406FCB88 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140873788 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403FAAC0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
