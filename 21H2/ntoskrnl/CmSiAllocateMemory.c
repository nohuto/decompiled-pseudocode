/*
 * XREFs of CmSiAllocateMemory @ 0x1402F7B78
 * Callers:
 *     HvpViewMapCreateView @ 0x1406FB860 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407D0270 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
