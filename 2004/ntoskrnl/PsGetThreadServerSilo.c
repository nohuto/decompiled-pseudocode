/*
 * XREFs of PsGetThreadServerSilo @ 0x1402BE900
 * Callers:
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x1402DC978 (MiGetNextSession.c)
 *     RtlGetActiveConsoleId @ 0x1402DCC00 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x140350110 (RtlGetNtProductType.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A33F0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A3D78 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403A6AE0 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B4CD0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B5AF0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403BE4B0 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x14050130C (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A265C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A4410 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A4560 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A4AF0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A4E30 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A4ED0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14089120C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
