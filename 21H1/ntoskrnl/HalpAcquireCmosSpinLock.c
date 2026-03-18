/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x14020215C
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x14020212C (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetClockBeforeSleep @ 0x140383304 (HalpSetClockBeforeSleep.c)
 *     HalpSetClockAfterSleep @ 0x14038350C (HalpSetClockAfterSleep.c)
 *     HalGetEnvironmentVariable @ 0x1404B6550 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404B66F0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x1404B8460 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x1404B9D00 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1404B9E80 (x86BiosWriteCmosPortByte.c)
 *     HalpGetSetCmosData @ 0x1404C6EAC (HalpGetSetCmosData.c)
 *     HalpReadRtcStdPCAT @ 0x1404D0CF0 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x1404D0D70 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x1404D0DE0 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x1404D0E90 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcquireCmosSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v3 = 0;
  while ( 1 )
  {
    _disable();
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    v4 = v6 & 0x200;
    LOBYTE(a3) = (v6 & 0x200) != 0;
    result = (unsigned int)_InterlockedCompareExchange(&HalpSystemHardwareLock, a1, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (v6 & 0x200) != 0 )
      _enable();
    while ( HalpSystemHardwareLock != -1 )
    {
      if ( HalpRebootNow )
        HalpRebootNow(a1, v4, a3);
      if ( (++v3 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v3, v4, a3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
