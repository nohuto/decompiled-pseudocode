/*
 * XREFs of PsGetThreadServerSilo @ 0x140297450
 * Callers:
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x1403207E0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A57B0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6148 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403A95A0 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B7BF0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B84E0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C1C04 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140504BDC (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A60FC (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A7EB0 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A8000 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A8590 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A88D0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A8970 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x140896CFC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
