/*
 * XREFs of WppGuidToStr @ 0x1C0059A74
 * Callers:
 *     PortTraceInitGlobalLogger @ 0x1C0059744 (PortTraceInitGlobalLogger.c)
 * Callees:
 *     WppIntToHex @ 0x1C0059B74 (WppIntToHex.c)
 */

__int64 __fastcall WppGuidToStr(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 result; // rax
  __int64 v23; // r11

  WppIntToHex(a1, *a2, 8LL);
  *(_WORD *)(v2 + 16) = 45;
  WppIntToHex(v2 + 18, *(unsigned __int16 *)(v3 + 4), 4LL);
  *(_WORD *)(v4 + 26) = 45;
  WppIntToHex(v4 + 28, *(unsigned __int16 *)(v5 + 6), 4LL);
  *(_WORD *)(v6 + 36) = 45;
  WppIntToHex(v6 + 38, *(unsigned __int8 *)(v7 + 8), 2LL);
  WppIntToHex(v9 + 42, *(unsigned __int8 *)(v8 + 9), 2LL);
  *(_WORD *)(v10 + 46) = 45;
  WppIntToHex(v10 + 48, *(unsigned __int8 *)(v11 + 10), 2LL);
  WppIntToHex(v13 + 52, *(unsigned __int8 *)(v12 + 11), 2LL);
  WppIntToHex(v15 + 56, *(unsigned __int8 *)(v14 + 12), 2LL);
  WppIntToHex(v17 + 60, *(unsigned __int8 *)(v16 + 13), 2LL);
  WppIntToHex(v19 + 64, *(unsigned __int8 *)(v18 + 14), 2LL);
  result = WppIntToHex(v21 + 68, *(unsigned __int8 *)(v20 + 15), 2LL);
  *(_WORD *)(v23 + 72) = 0;
  return result;
}
