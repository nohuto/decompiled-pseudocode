/*
 * XREFs of EtwpPsProvCaptureState @ 0x140941308
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x14079B220 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x1407D1120 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14023DB40 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x140659378 (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140941390 (EtwpPsProvProcessEnumCallback.c)
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
