/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0060CE0
 * Callers:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C005FFF4 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060090 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B710 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 1762)
    || *((_QWORD *)this + 894) < (unsigned __int64)qword_1C0051390
    && *((_DWORD *)this + 1790) < (unsigned int)dword_1C0051398 )
  {
    return 1;
  }
  return v1;
}
