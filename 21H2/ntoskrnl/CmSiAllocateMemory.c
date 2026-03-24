/*
 * XREFs of CmSiAllocateMemory @ 0x140362988
 * Callers:
 *     HvpViewMapCreateView @ 0x140723834 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407D0100 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
