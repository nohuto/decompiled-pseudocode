/*
 * XREFs of ?VidMmUnmapAllocCpuVa@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00DC24C
 * Callers:
 *     ?VidMmMapAllocCpuVa@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAPEAX@Z @ 0x1C002CE40 (-VidMmMapAllocCpuVa@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAPEAX@Z.c)
 * Callees:
 *     ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C00027F0 (-Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUnmapAllocCpuVa(
        VIDMM_GLOBAL *this,
        struct DXGPROCESS *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  Feature_GuestAllocMapping__private_IsEnabledPreCheck();
  return 0LL;
}
