/*
 * XREFs of ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00EA6A0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008D6E0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00EA6B8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdEscHostUnhandledException(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
