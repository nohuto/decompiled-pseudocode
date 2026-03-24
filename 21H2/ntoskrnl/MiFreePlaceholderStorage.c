/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406C3E08
 * Callers:
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9528 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D8468 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
