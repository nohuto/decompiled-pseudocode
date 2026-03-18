/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C01B49C0
 * Callers:
 *     <none>
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C003F9F0 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0044D30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C004D480 (IOCPDispatcher_Destroy.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, char a2)
{
  struct IRegisterInputDispatcherObjects *v2; // rcx
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  void *result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      25,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  v2 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close(gpIOCPDispatcher, 1);
  v3 = (unsigned int *)&unk_1C0247020;
  v4 = 3LL;
  do
  {
    v5 = *(v3 - 4);
    if ( v5 == 2 )
    {
      CleanupSensorExplicitly(*v3);
    }
    else if ( v5 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    }
    v3 += 12;
    --v4;
  }
  while ( v4 );
  result = IOCPDispatcher_Destroy((__int64)v2, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (void *)WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       26,
                       (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  return result;
}
