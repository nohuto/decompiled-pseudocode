/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x140993688
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14077057C (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x1409935B8 (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     memset @ 0x140411300 (memset.c)
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
