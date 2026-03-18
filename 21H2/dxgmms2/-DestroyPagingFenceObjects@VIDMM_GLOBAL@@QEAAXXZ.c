/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D61B0
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7E9C (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00D4CC4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroySyncObject @ 0x1C0099880 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C009B850 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  _VIDSCH_SYNC_OBJECT *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1754); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
    if ( *(_BYTE *)(v3 + 55) && *((_QWORD *)this + i + 813) )
      VIDMM_GLOBAL::UnmapGpuVA(
        this,
        *((struct VIDMM_PROCESS **)this + 5048),
        (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + i + 749) + 56LL),
        i,
        1);
    v4 = (_VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + i + 749);
    if ( v4 )
    {
      VidSchDestroySyncObject(v4, v3);
      *((_QWORD *)this + i + 749) = 0LL;
    }
  }
}
