/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406EBA90
 * Callers:
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14097ECFC (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x14097EFF0 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
