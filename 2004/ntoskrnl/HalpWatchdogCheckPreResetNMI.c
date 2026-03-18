/*
 * XREFs of HalpWatchdogCheckPreResetNMI @ 0x1404BD980
 * Callers:
 *     HalpPreprocessNmi @ 0x1404CDE10 (HalpPreprocessNmi.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

int HalpWatchdogCheckPreResetNMI()
{
  unsigned __int64 v0; // rax
  int v1; // ecx
  ULONG_PTR v2; // rbx
  ULONG_PTR InterruptTimePrecise; // r8
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter3 = 0LL;
  LODWORD(v0) = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = *(_DWORD *)(HalpWatchdogTimer + 228);
    if ( v1 == 8 )
    {
      LODWORD(v0) = KeGetPcr()->Prcb.Number;
      if ( (_DWORD)v0 )
        return v0;
      v0 = __readmsr(0x40000112u);
      if ( !v0 )
        return v0;
      __writemsr(0x40000112u, 0LL);
    }
    else
    {
      if ( v1 != 13 )
        return v0;
      v0 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset + 100000000;
      if ( v0 <= HalpTimerWatchdogTimeout )
        return v0;
    }
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    InterruptTimePrecise = RtlGetInterruptTimePrecise((LARGE_INTEGER *)&BugCheckParameter3);
    LODWORD(v0) = *(_DWORD *)(HalpWatchdogTimer + 228);
    if ( (_DWORD)v0 == 8 )
      KeBugCheckEx(0x1CAu, v2, InterruptTimePrecise, BugCheckParameter3, (unsigned int)KiClockTimerOwner);
    if ( (_DWORD)v0 == 13 )
      KeBugCheckEx(0x1CFu, v2, InterruptTimePrecise, BugCheckParameter3, (unsigned int)KiClockTimerOwner);
  }
  return v0;
}
