/*
 * XREFs of GetProcessDpiMetrics @ 0x1C002F910
 * Callers:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall GetProcessDpiMetrics(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx

  v3 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 284);
  if ( (_WORD)v3 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiMetrics();
  else
    return GetDPIMETRICSForDpi(v3);
}
