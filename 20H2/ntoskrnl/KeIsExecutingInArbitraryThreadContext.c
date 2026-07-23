/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1403F1894
 * Callers:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x1403207E0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A57B0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6148 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x1403B84E0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C1C04 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140504BDC (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A88D0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A8970 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsExecutingInArbitraryThreadContext()
{
  return KeGetPcr()->Prcb.NestingLevel != 0;
}
