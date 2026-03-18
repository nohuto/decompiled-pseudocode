/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C009F89C
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C009F7FC (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 1764)
    || *((_QWORD *)this + 895) < (unsigned __int64)qword_1C006E400
    && *((_DWORD *)this + 1792) < (unsigned int)dword_1C006E408 )
  {
    return 1;
  }
  return v1;
}
