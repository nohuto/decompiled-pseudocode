/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408C3E08
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14027AC60 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406DD89C (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *VadWakeList; // rax
  __int64 *v6; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3, a3, a4);
  v6 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, (__int64)VadWakeList);
    ExFreePoolWithTag(v6, 0);
  }
}
