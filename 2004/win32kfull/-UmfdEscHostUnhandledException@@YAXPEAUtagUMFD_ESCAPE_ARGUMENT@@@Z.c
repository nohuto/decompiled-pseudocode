/*
 * XREFs of ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C010E8B0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00157B0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C010E8C8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdEscHostUnhandledException(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
