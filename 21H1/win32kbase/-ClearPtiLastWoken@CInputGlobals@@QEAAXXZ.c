/*
 * XREFs of ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00055C0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::ClearPtiLastWoken(CInputGlobals *this)
{
  RIMLockExclusive();
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
