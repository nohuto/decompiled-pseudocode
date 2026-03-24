/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408C8758
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9528 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1406B1774 (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
