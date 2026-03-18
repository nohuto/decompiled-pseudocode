/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00C60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00861A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3)
{
  VIDMM_LINEAR_POOL::Free(this[19], a2, a3);
}
