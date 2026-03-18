/*
 * XREFs of strcpy_s @ 0x1403D3930
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14076DDE4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140770808 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140911A90 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x1409EC5F8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1409ED384 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
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
