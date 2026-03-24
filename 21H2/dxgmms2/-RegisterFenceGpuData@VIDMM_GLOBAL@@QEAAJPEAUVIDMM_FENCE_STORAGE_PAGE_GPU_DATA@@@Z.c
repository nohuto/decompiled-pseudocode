/*
 * XREFs of ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C0085FFC
 * Callers:
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0085F44 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0012D20 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  VIDMM_GLOBAL **v4; // r8
  VIDMM_GLOBAL *v5; // rax
  bool v6; // zf
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v15,
    (VIDMM_GLOBAL *)((char *)this + 3816));
  if ( *((_BYTE *)this + 40172)
    && (v9 = DpiMapIommuIdentityRange(*(_QWORD *)(*((_QWORD *)this + 3) + 216LL), *((_QWORD *)a2 + 7), 0LL, 3LL, a2),
        v12 = v9,
        v9 < 0) )
  {
    v13 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdWarning(v13);
    if ( v16 )
    {
      v14 = v15;
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v12;
  }
  else
  {
    v4 = (VIDMM_GLOBAL **)*((_QWORD *)this + 476);
    v5 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16);
    if ( *v4 != (VIDMM_GLOBAL *)((char *)this + 3800) )
      __fastfail(3u);
    v6 = v16 == 0;
    *(_QWORD *)v5 = (char *)this + 3800;
    *((_QWORD *)a2 + 3) = v4;
    *v4 = v5;
    *((_QWORD *)this + 476) = v5;
    if ( !v6 )
    {
      v7 = v15;
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
}
