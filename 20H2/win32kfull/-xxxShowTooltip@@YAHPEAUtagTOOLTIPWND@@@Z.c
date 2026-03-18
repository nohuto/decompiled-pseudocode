/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024275C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C004B0D8 (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C0078B8C (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int16 v5; // dx
  struct tagSIZE v7; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v7 = 0LL;
  v8 = 0LL;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 184LL);
    if ( !v3 )
      return 0LL;
    v4 = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(v4 + 23) & 8) == 0 || !*(_DWORD *)(v4 + 184) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v3 + 184), 99);
    word_1C033CD36 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v7, &v8) )
    return 0LL;
  v5 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v5 = 16464;
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v8.x, v8.y, v7.cx, v7.cy, v5);
  return 1LL;
}
