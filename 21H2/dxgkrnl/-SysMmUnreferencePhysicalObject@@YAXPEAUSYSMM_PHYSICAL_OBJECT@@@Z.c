/*
 * XREFs of ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C001B330 (DxgkFreePagesFromMdlCB.c)
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x1C0054A00 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0054C70 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0070B10 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     ?DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ @ 0x1C02BAB6C (-DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02BC600 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02BE84C (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x1C001B474 (SmmDestroyPhysicalObject.c)
 */

void __fastcall SysMmUnreferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 10, 0xFFFFFFFF) == 1 )
    SmmDestroyPhysicalObject((PSIZE_T)a1);
}
