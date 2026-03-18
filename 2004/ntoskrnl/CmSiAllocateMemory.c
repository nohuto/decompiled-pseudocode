/*
 * XREFs of CmSiAllocateMemory @ 0x14027145C
 * Callers:
 *     HvpViewMapCreateView @ 0x140638FF0 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407BD5B0 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
