/*
 * XREFs of GreWaitForTextReady @ 0x1C012DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CB60 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

NTSTATUS GreWaitForTextReady()
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}
