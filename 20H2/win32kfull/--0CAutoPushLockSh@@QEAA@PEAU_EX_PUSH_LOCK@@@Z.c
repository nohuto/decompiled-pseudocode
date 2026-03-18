/*
 * XREFs of ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01099A4
 * Callers:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0108C70 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EAA30 (SetProcessTimerDelay.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F52BC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 *     ?IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C02230F4 (-IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockSh *__fastcall CAutoPushLockSh::CAutoPushLockSh(CAutoPushLockSh *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(*(_QWORD *)this, 0LL);
  return this;
}
