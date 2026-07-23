/*
 * XREFs of _TpTimerOutstandingCallbackCount@4 @ 0x4B2A8DD0
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 * Callees:
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

unsigned int __stdcall TpTimerOutstandingCallbackCount(_RTL_SRWLOCK *a1)
{
  unsigned int Value; // esi

  if ( !TppTimerpValidateTimer(0) )
    return 0;
  RtlAcquireSRWLockExclusive(a1 + 36);
  Value = a1[8].Value;
  RtlReleaseSRWLockExclusive(a1 + 36);
  return Value;
}
