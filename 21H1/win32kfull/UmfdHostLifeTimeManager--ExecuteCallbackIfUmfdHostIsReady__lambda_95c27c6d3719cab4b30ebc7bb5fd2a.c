/*
 * XREFs of UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18___ @ 0x874A4
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     _lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator() @ 0x87504 (_lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_--operator().c)
 */

int __stdcall UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18___(
        char a1,
        int a2,
        int a3)
{
  int v3; // esi

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
    v3 = lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator()(&a1);
  else
    v3 = -1073741823;
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v3;
}
