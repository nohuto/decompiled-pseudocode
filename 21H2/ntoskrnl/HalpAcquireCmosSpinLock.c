/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x1402B612C
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x1402B60FC (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetClockBeforeSleep @ 0x140386B74 (HalpSetClockBeforeSleep.c)
 *     HalpSetClockAfterSleep @ 0x140386D7C (HalpSetClockAfterSleep.c)
 *     HalGetEnvironmentVariable @ 0x1404BBB10 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404BBCB0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x1404BDA20 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x1404BE1A0 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x1404BF2D0 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1404BF450 (x86BiosWriteCmosPortByte.c)
 *     HalpGetSetCmosData @ 0x1404CC28C (HalpGetSetCmosData.c)
 *     HalpReadRtcStdPCAT @ 0x1404D6100 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x1404D6180 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x1404D61F0 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x1404D62A0 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
      if ( (++v3 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
