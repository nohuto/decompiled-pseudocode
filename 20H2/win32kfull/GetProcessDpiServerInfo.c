/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C003331C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx

  v3 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 284);
  if ( (_WORD)v3 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v3);
}
