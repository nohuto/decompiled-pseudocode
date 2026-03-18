/*
 * XREFs of strcpy_s @ 0x1403D7400
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14077E7F4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140781218 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14079C7E8 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140918950 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x1409F25F8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1409F3384 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
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
