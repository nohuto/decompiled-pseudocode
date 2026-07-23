/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408C88B8
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140322D70 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x140610724 (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
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
