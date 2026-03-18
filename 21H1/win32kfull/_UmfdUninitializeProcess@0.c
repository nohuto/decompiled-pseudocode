/*
 * XREFs of _UmfdUninitializeProcess@0 @ 0xCFB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall UmfdUninitializeProcess()
{
  UmfdHostLifeTimeManager::UninitializeProcess();
}
