/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406EDC98
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D3B18 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
