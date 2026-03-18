/*
 * XREFs of ?DeallocateElements@?$PagedPoolZeroedArray@PEAUSYSMM_PHYSICAL_OBJECT@@$00@@QEAAXXZ @ 0x1C02B9F58
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B9738 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ @ 0x1C02BAB6C (-DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<SYSMM_PHYSICAL_OBJECT *,1>::DeallocateElements(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
}
