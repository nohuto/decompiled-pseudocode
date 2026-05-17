/*
 * XREFs of _LdrpLogError@16 @ 0x4B2EC95F
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpLogError(int a1, char a2, char a3, int a4)
{
  int result; // eax

  if ( RtlGetCurrentServiceSessionId() )
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
        return LdrpLogEtwEvent(a2, a3, a4, 0);
    }
  }
  return result;
}
