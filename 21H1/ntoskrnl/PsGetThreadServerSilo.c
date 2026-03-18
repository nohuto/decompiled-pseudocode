/*
 * XREFs of PsGetThreadServerSilo @ 0x14022BC80
 * Callers:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x140312380 (RtlGetNtProductType.c)
 *     MiGetNextSession @ 0x14035D938 (MiGetNextSession.c)
 *     RtlGetActiveConsoleId @ 0x14035DBC0 (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A2C60 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A3618 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403AA7B0 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B43D0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B4CC0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403BD520 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140500CBC (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A1F6C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A3D20 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A3E70 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A4400 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A4740 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A47E0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14088FEEC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
