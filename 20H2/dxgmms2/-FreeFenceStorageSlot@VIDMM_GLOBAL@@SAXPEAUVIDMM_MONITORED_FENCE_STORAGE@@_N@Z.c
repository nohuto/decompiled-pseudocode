/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00157A8
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B7B8 (VidSchiReleaseSyncObjectReference.c)
 *     ?VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0015790 (-VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00157E4 (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0017038 (-FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@.c)
 */

void __fastcall VIDMM_GLOBAL::FreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, char a2)
{
  __int64 v4; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rcx

  v4 = *(_QWORD *)a1;
  if ( v4 )
  {
    v5 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v4 + 160);
    if ( a2 || *((_BYTE *)v5 + 64) )
      VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(v5, a1);
    else
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(v5, a1);
  }
}
