/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406229E8
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140322D70 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D85C8 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128, a3, a4);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
