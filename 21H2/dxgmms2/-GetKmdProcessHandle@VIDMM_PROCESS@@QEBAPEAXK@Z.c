/*
 * XREFs of ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00A6E68
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0018B90 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 */

void *__fastcall VIDMM_PROCESS::GetKmdProcessHandle(DXGPROCESS **this, unsigned int a2)
{
  return DXGPROCESS::GetKmdProcessHandle(this[4], a2);
}
