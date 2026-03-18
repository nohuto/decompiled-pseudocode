/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C016B8A8
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    *(_OWORD *)(a2 + 268) = 0LL;
    *(_OWORD *)(a2 + 284) = 0LL;
    *(_QWORD *)(a2 + 300) = 0LL;
    *(_DWORD *)(a2 + 308) = 0;
    *(_DWORD *)(a2 + 304) = dword_1C02439F4;
    result = (unsigned int)dword_1C0243A04;
    *(_DWORD *)(a2 + 308) = dword_1C0243A04;
  }
  return result;
}
