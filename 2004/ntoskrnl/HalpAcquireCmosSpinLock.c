/*
 * XREFs of HalpAcquireCmosSpinLock @ 0x140341FAC
 * Callers:
 *     HalpAcquireCmosSpinLockAndWait @ 0x140341F7C (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetClockBeforeSleep @ 0x140383C54 (HalpSetClockBeforeSleep.c)
 *     HalpSetClockAfterSleep @ 0x140383E5C (HalpSetClockAfterSleep.c)
 *     HalGetEnvironmentVariable @ 0x1404B6C30 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404B6DD0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x1404B8B40 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 *     x86BiosReadCmosPortByte @ 0x1404BA3E0 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1404BA560 (x86BiosWriteCmosPortByte.c)
 *     HalpGetSetCmosData @ 0x1404C735C (HalpGetSetCmosData.c)
 *     HalpReadRtcStdPCAT @ 0x1404D11A0 (HalpReadRtcStdPCAT.c)
 *     HalpReadStdCmosData @ 0x1404D1220 (HalpReadStdCmosData.c)
 *     HalpWriteRtcStdPCAT @ 0x1404D1290 (HalpWriteRtcStdPCAT.c)
 *     HalpWriteStdCmosData @ 0x1404D1340 (HalpWriteStdCmosData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
      if ( (++v3 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v3);
    }
  }
  HalpSystemHardwareLockInterruptsEnabled = (v6 & 0x200) != 0;
  return result;
}
