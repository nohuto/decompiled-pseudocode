/*
 * XREFs of ?SysMmCreatePhysicalObjectForExistingPhysicalMemory@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_KQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002A3D8
 * Callers:
 *     ?CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219344 (-CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C001B724 (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SysMmCreatePhysicalObjectForExistingPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        struct SYSMM_PHYSICAL_OBJECT **a6,
        _QWORD *a7)
{
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  return SmmCreatePhysicalObject(a1, 3, a3, (int)&v8, 3, 1, a4, a5, a6, a7);
}
