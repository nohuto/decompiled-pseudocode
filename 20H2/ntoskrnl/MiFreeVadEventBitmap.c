/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408CAF98
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406D3850 (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3, a3);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, (__int64)VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
