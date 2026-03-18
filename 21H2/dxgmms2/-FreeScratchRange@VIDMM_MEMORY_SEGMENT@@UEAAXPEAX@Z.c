/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00E8E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_LINEAR_POOL::Free(this[19], a2, a3, a4);
}
