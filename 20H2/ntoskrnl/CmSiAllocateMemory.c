/*
 * XREFs of CmSiAllocateMemory @ 0x1402043B0
 * Callers:
 *     HvpViewMapCreateView @ 0x1405DC148 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407CBE40 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
