/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408C5158
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140221C10 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407005BC (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
