/*
 * XREFs of VidMmSuspendMemorySegmentAccess @ 0x1C0022830
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B4E74 (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmSuspendMemorySegmentAccess(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::SuspendMemorySegmentAccess(a1);
}
