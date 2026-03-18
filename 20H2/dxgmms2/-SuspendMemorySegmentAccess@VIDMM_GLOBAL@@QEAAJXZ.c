/*
 * XREFs of ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B4E74
 * Callers:
 *     VidMmSuspendMemorySegmentAccess @ 0x1C0022830 (VidMmSuspendMemorySegmentAccess.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00878C0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SuspendMemorySegmentAccess(VIDMM_GLOBAL *this)
{
  _DWORD v3[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(&v3[2], 0, 0x50uLL);
  v3[1] = -1;
  v3[0] = 110;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3, 1);
}
