/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x140341F7C
 * Callers:
 *     HalpReadCmosTime @ 0x140341DE8 (HalpReadCmosTime.c)
 *     HalpSetWakeAlarm @ 0x1404BCE14 (HalpSetWakeAlarm.c)
 *     HalpWriteCmosTime @ 0x1404C743C (HalpWriteCmosTime.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x140341FAC (HalpAcquireCmosSpinLock.c)
 */

char HalpAcquireCmosSpinLockAndWait()
{
  int v0; // ebx
  char result; // al

  HalpAcquireCmosSpinLock();
  v0 = 0;
  __outbyte(0x70u, 0xAu);
  while ( 1 )
  {
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      _InterlockedExchange(&HalpSystemHardwareLock, -1);
      v0 = 0;
      if ( HalpSystemHardwareLockInterruptsEnabled )
        _enable();
      HalpAcquireCmosSpinLock();
    }
    __outbyte(0x70u, 0xAu);
  }
  return result;
}
