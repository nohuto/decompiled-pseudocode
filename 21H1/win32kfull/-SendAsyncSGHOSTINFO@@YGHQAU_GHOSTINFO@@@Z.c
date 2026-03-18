/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z @ 0xC205C
 * Callers:
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     __RegisterErrorReportingDialog@8 @ 0x1704ED (__RegisterErrorReportingDialog@8.c)
 * Callees:
 *     _DwmAsyncSignalGhost@8 @ 0xC207C (_DwmAsyncSignalGhost@8.c)
 */

BOOL __cdecl SendAsyncSGHOSTINFO()
{
  void *v0; // eax

  v0 = (void *)ReferenceDwmApiPort();
  return DwmAsyncSignalGhost(v0) >= 0;
}
