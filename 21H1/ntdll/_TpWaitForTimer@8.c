/*
 * XREFs of _TpWaitForTimer@8 @ 0x4B2B3C20
 * Callers:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 * Callees:
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v2; // bl
  char v3; // [esp+Bh] [ebp-1h]

  v2 = 0;
  if ( TppTimerpValidateTimer(0) )
  {
    v3 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
      ++*((_BYTE *)Timer + 223);
      v2 = TppCancelTimer(Timer, *((_DWORD *)Timer + 23) + 64, 1);
      if ( *((_DWORD *)Timer + 8) )
        v3 = 1;
      else
        --*((_BYTE *)Timer + 223);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
    }
    TppWorkWait(Timer, CancelPendingCallbacks);
    if ( v3 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
      --*((_BYTE *)Timer + 223);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 36);
    }
    if ( v2 )
    {
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) )
        (**((void (__thiscall ***)(_DWORD, PTP_TIMER))Timer + 1))(**((_DWORD **)Timer + 1), Timer);
    }
  }
}
