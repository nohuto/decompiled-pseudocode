/*
 * XREFs of ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NPAU_EPROCESS@@@Z @ 0xA22AC
 * Callers:
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall UmfdHostLifeTimeManager::IsProcessUmfdHost(PVOID this)
{
  bool v2; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v2 = UmfdHostLifeTimeManager::s_UmfdHostProcess == this;
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v2;
}
