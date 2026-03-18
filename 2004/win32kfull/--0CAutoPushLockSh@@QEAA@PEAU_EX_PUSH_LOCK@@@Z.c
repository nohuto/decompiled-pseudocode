/*
 * XREFs of ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0108984
 * Callers:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0107F70 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EB6A0 (SetProcessTimerDelay.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F6124 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 *     ?IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0223F84 (-IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z.c)
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
