/*
 * XREFs of SetProtocolType @ 0x1C00610C0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     SqmPowerState @ 0x1C00611A0 (SqmPowerState.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00616A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x1C00CC194 (RetrieveCurrentDisplayState.c)
 */

__int64 __fastcall SetProtocolType(unsigned __int16 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  if ( !gProtocolType && gSqmIsOptedIn )
    SqmPowerState();
  result = (unsigned int)(v1 + 1);
  gProtocolType = v1;
  if ( (((_WORD)v1 + 1) & 0xFFFE) == 0 )
    gRemoteTerminalLuid = 0LL;
  if ( !(_WORD)v1 )
  {
    RetrieveCurrentDisplayState();
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9LL);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C024D1AC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
