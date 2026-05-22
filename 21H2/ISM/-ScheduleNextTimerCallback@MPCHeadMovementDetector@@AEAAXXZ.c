/*
 * XREFs of ?ScheduleNextTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CCD4
 * Callers:
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x18008C0D0 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CA44 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadMovementDetector::ScheduleNextTimerCallback(MPCHeadMovementDetector *this)
{
  SetThreadpoolTimer(
    *((PTP_TIMER *)this + 1),
    (PFILETIME)((char *)this + (-(__int64)(*((_BYTE *)this + 64) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 32),
    0,
    *((_DWORD *)this + 5));
}
