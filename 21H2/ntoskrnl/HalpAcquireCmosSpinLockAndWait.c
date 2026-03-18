/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x14022D9C0
 * Callers:
 *     HalpReadCmosTime @ 0x14022D82C (HalpReadCmosTime.c)
 *     HalpSetWakeAlarm @ 0x140396AF4 (HalpSetWakeAlarm.c)
 *     HalpWriteCmosTime @ 0x1405184BC (HalpWriteCmosTime.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14022D9F0 (HalpAcquireCmosSpinLock.c)
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
