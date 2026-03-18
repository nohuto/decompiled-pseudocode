/*
 * XREFs of CmSiAllocateMemory @ 0x1402E0AE4
 * Callers:
 *     HvpViewMapCreateView @ 0x140686B6C (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1407BA440 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
