/*
 * XREFs of _TpSetTimerEx@16 @ 0x4B2B4620
 * Callers:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _TpSetTimer@16 @ 0x4B2B4560 (_TpSetTimer@16.c)
 *     _RtlpWnfSetRetryTimer@8 @ 0x4B33C90E (_RtlpWnfSetRetryTimer@8.c)
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 * Callees:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _TpIsTimerSet@4 @ 0x4B2B4520 (_TpIsTimerSet@4.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  PLARGE_INTEGER v4; // ebx
  unsigned __int8 v5; // cl
  _RTL_SRWLOCK *v7; // [esp+10h] [ebp-8h]
  unsigned __int8 v8; // [esp+17h] [ebp-1h]

  v4 = DueTime;
  if ( TppTimerpValidateTimer(DueTime != 0) )
  {
    LOBYTE(v4) = DueTime != 0;
    v7 = (_RTL_SRWLOCK *)(*((_DWORD *)Timer + 23) + 64);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
    v5 = TppCancelTimer(Timer, v7, v4);
    v8 = v5;
    if ( DueTime && *((_BYTE *)Timer + 223) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
      v5 = v8;
      LOBYTE(v4) = 0;
    }
    if ( !v5 )
    {
      if ( !(_BYTE)v4 )
        return v5;
      if ( TpIsTimerSet(Timer) )
        goto LABEL_11;
      _InterlockedIncrement((volatile signed __int32 *)Timer);
      v5 = v8;
    }
    if ( !(_BYTE)v4 )
    {
      if ( !v5 || _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) )
        return v5;
      (**((void (__thiscall ***)(_DWORD, PTP_TIMER))Timer + 1))(**((_DWORD **)Timer + 1), Timer);
      return v8;
    }
    TppSetTimer((int)Timer, v7, DueTime, Period, WindowLength);
LABEL_11:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
    return v8;
  }
  return 0;
}
