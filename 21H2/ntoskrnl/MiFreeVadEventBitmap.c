/*
 * XREFs of MiFreeVadEventBitmap @ 0x14096D778
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D804C (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, int a3)
{
  unsigned __int64 VadWakeList; // rax
  void *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
