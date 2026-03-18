/*
 * XREFs of ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B467C
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028A24 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006D560 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C006DBB0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00B1CDC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00B1E08 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00B4A1C (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C6190 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7F8C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CA20C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v12; // rcx

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, a1, a3);
  if ( (int)result >= 0 )
  {
    v12 = *(_QWORD *)(a10 + 128);
    if ( !v12 )
      v12 = *(_QWORD *)(a10 + 216);
    if ( a4 <= 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 496));
    else
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 496));
  }
  return result;
}
