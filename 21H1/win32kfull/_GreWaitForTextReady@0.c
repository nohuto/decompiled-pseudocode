/*
 * XREFs of _GreWaitForTextReady@0 @ 0xECA72
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall GreWaitForTextReady()
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}
