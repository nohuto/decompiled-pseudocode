/*
 * XREFs of ?UmfdEscHostUnhandledException@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xCFF6C
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl UmfdEscHostUnhandledException()
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
