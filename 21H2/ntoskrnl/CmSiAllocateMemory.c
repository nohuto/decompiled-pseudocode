/*
 * XREFs of CmSiAllocateMemory @ 0x14020B698
 * Callers:
 *     HvpViewMapCreateView @ 0x14068DA14 (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1408575AC (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmSiAllocateMemory(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
