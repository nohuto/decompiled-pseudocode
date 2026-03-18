/*
 * XREFs of ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C00904A4
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008FFDC (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 VIDMM_DMA_POOL::InitGlobals(void)
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r9
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  NTSTATUS v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax

  qword_1C0051820 = (__int64)&VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_DmaPoolsListHead.Flink = &VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_MaxNbDmaBuffers = dword_1C0051308;
  VIDMM_DMA_POOL::_MaxNbCddDmaBuffers = dword_1C005130C;
  VIDMM_DMA_POOL::_MaxDmaBufferBytes = (unsigned int)dword_1C0051310;
  VIDMM_DMA_POOL::_MaxAllocationListBytes = (unsigned int)dword_1C0051314;
  VIDMM_DMA_POOL::_MaxPatchLocationListBytes = (unsigned int)dword_1C0051314;
  v0 = (unsigned int)dword_1C0051310 / 0x64uLL;
  VIDMM_DMA_POOL::_CriticalDmaBufferBytes = 95 * v0;
  VIDMM_DMA_POOL::_HighDmaBufferBytes = 85 * v0;
  VIDMM_DMA_POOL::_LowDmaBufferBytes = 75 * v0;
  v1 = (unsigned int)dword_1C0051314 / 0x64uLL;
  VIDMM_DMA_POOL::_CriticalAllocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_CriticalPatchLocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighAllocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_HighPatchLocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowAllocationListBytes = 75 * v1;
  VIDMM_DMA_POOL::_LowPatchLocationListBytes = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x39326956u, (POOL_TYPE)512);
  VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = v2;
  if ( v2 )
  {
    v6 = ExInitializeResourceLite(v2);
    if ( v6 < 0 )
    {
      operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
      VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
      v12 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 273LL;
      WdLogEvent5_WdAssertion(v12);
      return (unsigned int)v6;
    }
    else
    {
      VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark = dword_1C0051318;
      return 0LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5);
    *(_QWORD *)(v8 + 24) = 264LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225495LL;
  }
}
