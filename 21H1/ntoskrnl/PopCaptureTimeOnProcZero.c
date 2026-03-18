/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x14098CE80
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14076068C (PopDiagTraceHiberStats.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14098CDB0 (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     memset @ 0x140408F80 (memset.c)
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
