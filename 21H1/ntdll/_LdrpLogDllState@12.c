/*
 * XREFs of _LdrpLogDllState@12 @ 0x4B2CDF06
 * Callers:
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrpCorProcessImports@4 @ 0x4B2A6D1F (_LdrpCorProcessImports@4.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _LdrpAllocatePlaceHolder@28 @ 0x4B2D0889 (_LdrpAllocatePlaceHolder@28.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _ApiSetQueryApiSetPresence@8 @ 0x4B2E6C90 (_ApiSetQueryApiSetPresence@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpLogDllState(int a1, int a2, int a3)
{
  _DWORD *SharedData; // eax
  int result; // eax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    result = (int)NtCurrentPeb()->SharedData + 554;
  else
    result = 2147353476;
  if ( *(_BYTE *)result )
  {
    result = (int)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 576) & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        result = (int)NtCurrentPeb()->SharedData + 555;
      else
        result = 2147353477;
      if ( (*(_BYTE *)result & 0x20) != 0 )
        return LdrpLogEtwEvent(0, 0, a2, 0);
    }
  }
  return result;
}
