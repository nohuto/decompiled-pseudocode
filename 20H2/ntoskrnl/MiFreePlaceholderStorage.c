/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406E4134
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1408DACA8 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v4; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128, a3);
  v4 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v4, 0);
  }
}
