/*
 * XREFs of ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00A7814 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A856C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00E96B0 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemory(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6,
        bool *a7)
{
  int v11; // edi
  int TemporaryResourcesForAllocation; // eax

  v11 = -1073741823;
  if ( *((_DWORD *)a2 + 14) )
  {
    TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(this[1], a2);
    v11 = TemporaryResourcesForAllocation;
    if ( TemporaryResourcesForAllocation < 0 )
    {
      if ( (*(_BYTE *)(1584LL * *((unsigned int *)this + 95) + *((_QWORD *)this[1] + 5028) + 436) & 4) != 0 )
        WdLogSingleEntry5(0LL, 270LL, 9LL, a2, TemporaryResourcesForAllocation, 0LL);
    }
    else
    {
      v11 = VIDMM_MEMORY_SEGMENT::TransferMemoryFast((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5, a6);
      if ( v11 < 0 )
      {
        VIDMM_MEMORY_SEGMENT::TransferMemorySlow((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5);
        v11 = 0;
        *a6 = 1;
        if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          *a7 = 1;
      }
    }
  }
  return (unsigned int)v11;
}
