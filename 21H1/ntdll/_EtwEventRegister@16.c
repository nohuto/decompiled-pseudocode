/*
 * XREFs of _EtwEventRegister@16 @ 0x4B2AE0A0
 * Callers:
 *     _RtlInitializeHeapLogging@0 @ 0x4B2AE064 (_RtlInitializeHeapLogging@0.c)
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454 (_LdrpAppxEtwGenericIntegrityFailure@4.c)
 *     _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5 (_LdrpAppxEtwIntegrityFailure@12.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 * Callees:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 */

int __stdcall EtwEventRegister(void *Buf1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi

  if ( !a2 && a3 )
    return 87;
  v4 = EtwNotificationRegister(Buf1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
