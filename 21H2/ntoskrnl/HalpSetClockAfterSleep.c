/*
 * XREFs of HalpSetClockAfterSleep @ 0x140391A94
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140A622EC (HalpDpPostReplace.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14022D9F0 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpSetClockAfterSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  unsigned __int8 v4; // cl
  __int64 result; // rax

  HalpAcquireCmosSpinLock(a1, a2, a3);
  v3 = HalpRtcRegA;
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, v3);
  v4 = HalpRtcRegB & 0xDD | 2;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v4);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
