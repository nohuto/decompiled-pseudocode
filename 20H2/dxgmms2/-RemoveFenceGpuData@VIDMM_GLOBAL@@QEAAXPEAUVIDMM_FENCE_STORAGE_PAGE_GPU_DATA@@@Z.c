/*
 * XREFs of ?RemoveFenceGpuData@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C008643C
 * Callers:
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00863E4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00155D0 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8,
    (VIDMM_GLOBAL *)((char *)this + 3816));
  v4 = (_QWORD *)((char *)a2 + 16);
  v5 = *((_QWORD *)a2 + 2);
  if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)(v5 + 8) != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 3), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( *((_BYTE *)this + 40172) )
    DpiUnmapIommuIdentityRange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 24LL) + 216LL),
      *((_QWORD *)a2 + 7),
      0LL,
      3LL,
      a2);
  if ( v9 )
  {
    v7 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  *v4 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
}
