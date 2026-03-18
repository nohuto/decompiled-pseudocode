/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C0174104
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    *(_OWORD *)(a2 + 268) = 0LL;
    *(_OWORD *)(a2 + 284) = 0LL;
    *(_QWORD *)(a2 + 300) = 0LL;
    *(_DWORD *)(a2 + 308) = 0;
    *(_DWORD *)(a2 + 304) = dword_1C024CA74;
    result = (unsigned int)dword_1C024CA84;
    *(_DWORD *)(a2 + 308) = dword_1C024CA84;
  }
  return result;
}
