/*
 * XREFs of ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0CFB
 * Callers:
 *     ?xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z @ 0x1A0A7C (-xxxCreateTooltip@@YGHPAUtagTOOLTIPWND@@PAG@Z.c)
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _wcsncpycch@12 @ 0xC9046 (_wcsncpycch@12.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 */

int __thiscall xxxShowTooltip(_DWORD *this)
{
  int v2; // esi
  _WORD *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  struct tagSIZE *v8; // [esp+0h] [ebp-18h]
  struct tagPOINT *v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int *v12; // [esp+10h] [ebp-8h]
  int *v13; // [esp+14h] [ebp-4h]

  v2 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 0;
  v3 = (_WORD *)this[9];
  v11 = 0;
  if ( !v3 )
    return 0;
  if ( v3 == gszCAPTIONTOOLTIP )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 100);
    if ( !v4 )
      return 0;
    v5 = *(_DWORD *)(v4 + 20);
    if ( (*(_BYTE *)(v5 + 15) & 8) == 0 || !*(_DWORD *)(v5 + 116) )
      return 0;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_DWORD *)(v4 + 100), 99);
    word_275E96 = 0;
  }
  if ( !xxxTooltipGetSizeAndPosition((struct tagTOOLTIPWND *)&v10, v8, v9) )
    return 0;
  v6 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 100);
  if ( v6 )
    v2 = *(_DWORD *)(*(_DWORD *)(v6 + 20) + 148);
  xxxSetWindowPosAndBand(
    (_DWORD *)*this,
    0,
    v10,
    v11,
    v12,
    v13,
    ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000800) != -2147481600 ? 16464 : 16472,
    v2);
  return 1;
}
