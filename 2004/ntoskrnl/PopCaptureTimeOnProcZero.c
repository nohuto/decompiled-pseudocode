/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x14098D698
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140761F6C (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14098D5C8 (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 PopCaptureTimeOnProcZero()
{
  struct _KEVENT Event; // [rsp+30h] [rbp-9h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp+17h] BYREF
  __int64 SystemArgument1; // [rsp+A0h] [rbp+67h] BYREF

  SystemArgument1 = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(&Dpc, 0, sizeof(Dpc));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopTimestampTargetProcessor, 0LL);
  Dpc.Importance = 2;
  if ( !Dpc.DpcData )
    Dpc.Number = 1280;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
