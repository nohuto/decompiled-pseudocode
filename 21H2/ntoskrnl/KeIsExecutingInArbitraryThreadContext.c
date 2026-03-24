/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24
 * Callers:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     RtlGetActiveConsoleId @ 0x140281DB0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1402C2020 (RtlGetNtProductType.c)
 *     MiGetNextSession @ 0x1402D5FA8 (MiGetNextSession.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A6070 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6A08 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x1403B8EE0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C2454 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x14050675C (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA300 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA3A0 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsExecutingInArbitraryThreadContext()
{
  return KeGetPcr()->Prcb.NestingLevel != 0;
}
