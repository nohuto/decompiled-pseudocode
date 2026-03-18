/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D7F04
 * Callers:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0108C70 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EAA30 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
