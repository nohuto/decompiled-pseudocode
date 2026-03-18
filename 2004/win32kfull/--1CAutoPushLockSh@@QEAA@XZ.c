/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8BC4
 * Callers:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0107F70 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EB6A0 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
