/*
 * XREFs of CmSiUnmapViewOfSection @ 0x140363DD4
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140723598 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140723834 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140724B50 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x140725C18 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x140873628 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1403FA8E0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
