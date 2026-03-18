/*
 * XREFs of GetProcessDpiMetrics @ 0x1C00602FC
 * Callers:
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0064724 (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall GetProcessDpiMetrics(__int64 a1)
{
  unsigned int v1; // edx

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiMetrics();
  else
    return GetDPIMETRICSForDpi(v1);
}
