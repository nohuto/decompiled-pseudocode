/*
 * XREFs of ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E
 * Callers:
 *     ?GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748C4 (-GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?_GetCursorFrameInfo@@YGPAUtagCURSOR@@PAU1@HPAKPAH@Z @ 0x751FE (-_GetCursorFrameInfo@@YGPAUtagCURSOR@@PAU1@HPAKPAH@Z.c)
 *     _NtUserDrawIconEx@44 @ 0x90A70 (_NtUserDrawIconEx@44.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _NtUserGetIconSize@16 @ 0xA38AA (_NtUserGetIconSize@16.c)
 * Callees:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(int a1, int a2)
{
  int v2; // edx
  struct tagCURSOR *result; // eax

  if ( (*(_BYTE *)(a1 + 44) & 0x40) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 60) )
      return 0;
    if ( !*(_DWORD *)(a1 + 56) )
      return 0;
    if ( a2 < 0 )
      return 0;
    if ( a2 >= *(_DWORD *)(a1 + 52) )
      return 0;
    _mm_lfence();
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * a2);
    if ( v2 < 0 || v2 >= *(_DWORD *)(a1 + 48) )
      return 0;
    _mm_lfence();
    result = *(struct tagCURSOR **)(*(_DWORD *)(a1 + 56) + 4 * v2);
    if ( (*((_BYTE *)result + 44) & 8) == 0 )
      return result;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  return 0;
}
