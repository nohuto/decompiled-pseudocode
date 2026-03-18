/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x14022D9F0
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x14022D9C0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetClockBeforeSleep @ 0x14039188C (HalpSetClockBeforeSleep.c)
 *     HalpSetClockAfterSleep @ 0x140391A94 (HalpSetClockAfterSleep.c)
 *     HalGetEnvironmentVariable @ 0x140508580 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140508720 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x14050BD94 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x14050BF10 (x86BiosWriteCmosPortByte.c)
 *     HalpGetSetCmosData @ 0x1405183DC (HalpGetSetCmosData.c)
 *     HalpReadRtcStdPCAT @ 0x140523400 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x140523480 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x1405234F0 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x1405235A0 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
      if ( (++v3 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        qword_140C4C480(v3, v4, a3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
