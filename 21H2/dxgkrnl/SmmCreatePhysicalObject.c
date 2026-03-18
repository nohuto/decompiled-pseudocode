/*
 * XREFs of SmmCreatePhysicalObject @ 0x1C001B724
 * Callers:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1C001B61C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     ?SysMmCreatePhysicalObjectForExistingPhysicalMemory@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_KQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002A3D8 (-SysMmCreatePhysicalObjectForExistingPhysicalMemory@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_KQE.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C0054AA0 (DxgkMapMdlToIoMmuCB.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x1C006EA10 (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006EBB0 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 *     ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006EC50 (-SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_O.c)
 *     SysMmTestCreatePhysicalObjectForExistingMdl @ 0x1C00711D0 (SysMmTestCreatePhysicalObjectForExistingMdl.c)
 *     SysMmTestCreatePhysicalObjectForExistingPhysicalMemory @ 0x1C0071230 (SysMmTestCreatePhysicalObjectForExistingPhysicalMemory.c)
 *     ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C0B1C (-SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMO.c)
 *     ?SysMmCreateVirtualMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKKW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C0D00 (-SysMmCreateVirtualMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKKW4_MEMORY_CACHING_TYPE@@QEAXW.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x1C001B474 (SmmDestroyPhysicalObject.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B7D8 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmCreatePhysicalObjectInternal @ 0x1C001B924 (SmmCreatePhysicalObjectInternal.c)
 */

__int64 __fastcall SmmCreatePhysicalObject(
        struct SYSMM_ADAPTER *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        struct SYSMM_PHYSICAL_OBJECT **a9,
        _QWORD *a10)
{
  struct SYSMM_PHYSICAL_OBJECT *PhysicalObjectInternal; // rax
  _DWORD *v12; // rbx
  struct SYSMM_PHYSICAL_OBJECT *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi

  PhysicalObjectInternal = (struct SYSMM_PHYSICAL_OBJECT *)SmmCreatePhysicalObjectInternal(a2, a3, a4, a5, a6, a7, a8);
  v12 = 0LL;
  v13 = PhysicalObjectInternal;
  if ( PhysicalObjectInternal )
  {
    if ( !a1 )
    {
LABEL_5:
      *a10 = v12;
      *a9 = v13;
      return 0LL;
    }
    v14 = SmmOpenPhysicalObject(PhysicalObjectInternal, a1);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v12 = (_DWORD *)((char *)v13 + 64);
      goto LABEL_5;
    }
    WdLogSingleEntry3(3LL, v13, a1, v14);
    SmmDestroyPhysicalObject(v13, 0);
    return v15;
  }
  else
  {
    *a9 = 0LL;
    *a10 = 0LL;
    return 3221225495LL;
  }
}
