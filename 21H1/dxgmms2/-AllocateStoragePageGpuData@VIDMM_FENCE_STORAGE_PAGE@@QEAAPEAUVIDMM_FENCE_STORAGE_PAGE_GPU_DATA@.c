/*
 * XREFs of ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0084670
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083EC0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C0084728 (-RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z.c)
 */

struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *__fastcall VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  VIDMM_FENCE_STORAGE_PAGE **v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x65616956u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedIncrement(&dword_1C00517D8);
    v14 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v14 + 24) = 687LL;
    WdLogEvent5_WdLowResource(v14);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x48uLL);
  v6[6] = a2;
  v6[5] = v6 + 4;
  v6[4] = v6 + 4;
  v7 = *((_QWORD *)this + 15);
  *((_DWORD *)v6 + 16) = 0;
  v6[7] = v7;
  v8 = VIDMM_GLOBAL::RegisterFenceGpuData(a2, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v6);
  v11 = v8;
  if ( v8 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v10, v9);
    *(_QWORD *)(v15 + 24) = v11;
    WdLogEvent5_WdWarning(v15);
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  v12 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)this + 8);
  if ( *v12 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    __fastfail(3u);
  *v6 = (char *)this + 56;
  v6[1] = v12;
  *v12 = (VIDMM_FENCE_STORAGE_PAGE *)v6;
  *((_QWORD *)this + 8) = v6;
  return (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v6;
}
