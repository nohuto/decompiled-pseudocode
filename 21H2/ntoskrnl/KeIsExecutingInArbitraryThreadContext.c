/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74
 * Callers:
 *     RtlGetNtProductType @ 0x1402404C0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14026FFF0 (RtlGetActiveConsoleId.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     MiGetNextSession @ 0x1402872F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A61C0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6B58 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x1403B9050 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x1405066DC (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA530 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA5D0 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsExecutingInArbitraryThreadContext()
{
  return KeGetPcr()->Prcb.NestingLevel != 0;
}
