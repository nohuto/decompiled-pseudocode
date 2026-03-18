/*
 * XREFs of ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0012D28
 * Callers:
 *     VidMmTerminateDevice @ 0x1C0012D60 (VidMmTerminateDevice.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0083EF4 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BDA54 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0080CBC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::`scalar deleting destructor'(VIDMM_DEVICE *P)
{
  VIDMM_DEVICE::~VIDMM_DEVICE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
