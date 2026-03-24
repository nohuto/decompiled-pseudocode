/*
 * XREFs of EtwpPsProvCaptureState @ 0x14093EAD8
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x1407BEAD0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x1407D55A0 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140250300 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x1406CE06C (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EB60 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(__int64 *a1, unsigned __int64 a2)
{
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  *(_DWORD *)((char *)&v4 + 9) = a1 == PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((PEPROCESS)PsIdleProcess);
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpPsProvProcessEnumCallback, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
