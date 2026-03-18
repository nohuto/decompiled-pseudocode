/*
 * XREFs of AmliWatchdogTimeoutAction @ 0x1C0064394
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C00641E0 (AmliDisableWatchdog.c)
 *     AmliWatchdog @ 0x1C0064280 (AmliWatchdog.c)
 * Callees:
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0047F28 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C0063F38 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogInitiateBugcheck @ 0x1C00642DC (AmliWatchdogInitiateBugcheck.c)
 *     AmliWatchdogInitiateLiveDump @ 0x1C0064328 (AmliWatchdogInitiateLiveDump.c)
 */

void __fastcall AmliWatchdogTimeoutAction(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx

  AcpiDiagTraceAmliWatchdogTimeout();
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        AmliWatchdogInitiateBugcheck((ULONG_PTR *)a1);
      return;
    }
    AmliWatchdogInitiateLiveDump((_QWORD *)a1);
  }
  AcpiQueueRecordBlackboxInformation();
  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    KeCancelTimer((PKTIMER)(a1 + 104));
  }
}
