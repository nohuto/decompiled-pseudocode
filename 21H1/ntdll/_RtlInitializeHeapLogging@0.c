/*
 * XREFs of _RtlInitializeHeapLogging@0 @ 0x4B2AE064
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

NTSTATUS __stdcall RtlInitializeHeapLogging()
{
  int v0; // ecx
  NTSTATUS v1; // esi

  v1 = EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A33F0, v0);
  return v1;
}
