/*
 * XREFs of ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0389720 (DpiFdoHandleRemoveDevice.c)
 *     DpiKsrStopAdapter @ 0x1C03945BC (DpiKsrStopAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C007152C (-SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03BFF78 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0184 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C12CC (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

void __fastcall SysMmDestroyAdapter(struct SYSMM_ADAPTER *a1)
{
  _QWORD *v1; // r9
  struct SYSMM_LOGICAL_ALLOCATOR *v3; // rcx
  void *v4; // rcx
  unsigned int v5; // edi
  struct _IOMMU_DMA_DEVICE **v6; // rsi

  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 != v1 )
  {
    if ( (dword_1C0130B08 & 0x20) != 0 )
      WdLogSingleEntry5(0LL, 484LL, 6LL, a1, v1, 0LL);
    else
      SysMmCreateLiveDump();
  }
  SmmDeinitializeIommu(a1);
  v3 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 44);
  if ( v3 )
    SmmDestroyLogicalAllocator(v3);
  v4 = (void *)*((_QWORD *)a1 + 45);
  if ( v4 )
  {
    v5 = 0;
    if ( *((_DWORD *)a1 + 6) )
    {
      do
      {
        v6 = (struct _IOMMU_DMA_DEVICE **)(*((_QWORD *)a1 + 45) + 16LL * v5);
        if ( *v6 )
        {
          SmmIommuDeleteDevice(*v6);
          *v6 = 0LL;
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)a1 + 6) );
      v4 = (void *)*((_QWORD *)a1 + 45);
    }
    ExFreePoolWithTag(v4, 0);
  }
  operator delete(a1);
}
