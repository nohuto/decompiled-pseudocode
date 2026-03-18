/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0003AB0
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00039D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C020ABB0 (_RegisterErrorReportingDialog.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C0003AE8 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1)
{
  void *v1; // rax

  v1 = (void *)ReferenceDwmApiPort();
  return (int)DwmAsyncSignalGhost(v1) >= 0;
}
