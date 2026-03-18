/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AFE60
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0095B90 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AE7FC (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroySyncObject @ 0x1C007FB60 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C0086EA8 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 v5; // rdx
  _VIDSCH_SYNC_OBJECT *v6; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1750); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
    if ( *(_BYTE *)(v5 + 55) && *((_QWORD *)this + i + 811) )
      VIDMM_GLOBAL::UnmapGpuVA(
        this,
        *((struct VIDMM_PROCESS **)this + 5048),
        (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + i + 747) + 56LL),
        i,
        1);
    v6 = (_VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + i + 747);
    if ( v6 )
    {
      VidSchDestroySyncObject(v6, v5, a3);
      *((_QWORD *)this + i + 747) = 0LL;
    }
  }
}
