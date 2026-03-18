/*
 * XREFs of ?DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ @ 0x1C02BAB6C
 * Callers:
 *     ?CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219344 (-CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B538 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAUSYSMM_PHYSICAL_OBJECT@@$00@@QEAAXXZ @ 0x1C02B9F58 (-DeallocateElements@-$PagedPoolZeroedArray@PEAUSYSMM_PHYSICAL_OBJECT@@$00@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalObjectsForHardwareReservedRanges(DXGADAPTER *this, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 i; // rdi
  struct SYSMM_ADAPTER ***v6; // rcx
  struct SYSMM_ADAPTER **v7; // rsi

  v3 = *((_DWORD *)this + 1130);
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    v6 = (struct SYSMM_ADAPTER ***)*((_QWORD *)this + 563);
    if ( (unsigned int)i < *((_DWORD *)this + 1130) )
      v6 += i;
    v7 = *v6;
    if ( !*v6 )
      break;
    SysMmClosePhysicalObjectByAdapter(*v6, *((struct SYSMM_ADAPTER **)this + 28), a3);
    SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v7);
  }
  PagedPoolZeroedArray<SYSMM_PHYSICAL_OBJECT *,1>::DeallocateElements((__int64)this + 4504);
}
