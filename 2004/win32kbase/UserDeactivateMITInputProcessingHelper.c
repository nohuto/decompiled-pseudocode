/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C01AEC60
 * Callers:
 *     <none>
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C004C440 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00528A0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C005AEF0 (IOCPDispatcher_Destroy.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct IRegisterInputDispatcherObjects *v4; // rcx
  unsigned int *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  void *result; // rax
  int v9; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      25,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  v4 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close(gpIOCPDispatcher, 1);
  v5 = (unsigned int *)&unk_1C0241020;
  v6 = 3LL;
  do
  {
    v7 = *(v5 - 4);
    if ( v7 == 2 )
    {
      CleanupSensorExplicitly(*v5, a2, a3, a4);
    }
    else if ( v7 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3, a4);
    }
    v5 += 12;
    --v6;
  }
  while ( v6 );
  result = IOCPDispatcher_Destroy((__int64)v4, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      return (void *)WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       v9,
                       2,
                       26,
                       (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
    }
  }
  return result;
}
