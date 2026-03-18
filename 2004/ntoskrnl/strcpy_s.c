/*
 * XREFs of strcpy_s @ 0x1403D4770
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407701F4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140772C18 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078FE30 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140912E10 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x1409EC5F8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1409ED384 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A5E140 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = a1 - Src;
    do
    {
      v6 = *Src;
      Src[v5] = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
