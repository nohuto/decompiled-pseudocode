/*
 * XREFs of ?ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4544
 * Callers:
 *     VidMmReportVidMmState @ 0x1C0022C40 (VidMmReportVidMmState.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087998 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmState(VIDMM_GLOBAL *this)
{
  _DWORD v2[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(&v2[1], 0, 0x54uLL);
  v2[0] = 106;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2, 1);
}
