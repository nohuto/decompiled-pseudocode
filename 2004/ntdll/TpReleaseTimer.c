/*
 * XREFs of TpReleaseTimer @ 0x18000C500
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x18007C910 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180084920 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer(Timer, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    ++*((_BYTE *)Timer + 355);
    if ( (unsigned __int8)TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, 0LL) )
      v2 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
      (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
  }
}
