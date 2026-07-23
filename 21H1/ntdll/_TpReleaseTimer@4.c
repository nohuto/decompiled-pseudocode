/*
 * XREFs of _TpReleaseTimer@4 @ 0x4B2B3B90
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlpInitializeWnf@12 @ 0x4B2AE9E0 (_RtlpInitializeWnf@12.c)
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v1; // edi
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+4h]

  v1 = 1;
  if ( TppTimerpValidateTimer(0) && TppCleanupGroupMemberRelease((int)Timer, 1) )
  {
    *((_DWORD *)Timer + 28) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
    ++*((_BYTE *)Timer + 223);
    if ( (unsigned __int8)TppCancelTimer(Timer, *((_DWORD *)Timer + 23) + 64, 0) )
      v1 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v1) == v1 )
      (**((void (__thiscall ***)(_DWORD, PTP_TIMER))Timer + 1))(**((_DWORD **)Timer + 1), Timer);
  }
}
