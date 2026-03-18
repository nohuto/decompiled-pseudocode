/*
 * XREFs of _xxxSetWindowPosAndBand@32 @ 0x33008
 * Callers:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0CFB (-xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 *     _xxxHandleHealthyWindow@4 @ 0x170876 (_xxxHandleHealthyWindow@4.c)
 */

int __fastcall xxxSetWindowPosAndBand(_DWORD *a1, int *a2, int a3, int a4, int *a5, int *a6, int a7, int a8)
{
  int v8; // ebx
  int v9; // esi
  _BYTE *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // [esp+0h] [ebp-18h]
  unsigned int v19; // [esp+4h] [ebp-14h]

  v8 = a7;
  v9 = 0;
  if ( (a7 & 0x80u) != 0 )
  {
    if ( a1[2] == _gptiCurrent && IsWindowGhosted() )
      xxxHandleHealthyWindow(a1);
    v9 = 0;
  }
  if ( (v8 & 0xC0) != 0 )
  {
    v15 = a1[5];
    if ( (*(_BYTE *)(v15 + 13) & 1) == 0 )
    {
      v8 |= 3u;
      if ( (v8 & 0x40) != 0 && (*(_BYTE *)(v15 + 23) & 0x10) != 0 )
        v9 = 1;
    }
  }
  v11 = (_BYTE *)a1[5];
  if ( (v11[13] & 4) == 0
    && *(_DWORD *)*_gpDispInfo > 1u
    && (v8 & 2) == 0
    && (v11[23] & 0x50) == 0
    && (v11[22] & 0xC0) == 0xC0 )
  {
    v16 = a1[16];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 20);
      if ( (*(_BYTE *)(v17 + 23) & 0x10) != 0 && !ERECTL::bWrapped((ERECTL *)(v17 + 52)) )
        FixBogusSWP((struct tagWND *)&a4, a5, a6, v8, v18, v19);
    }
  }
  v12 = (_DWORD *)InternalBeginDeferWindowPos(1);
  if ( !v12 )
    return 0;
  v13 = _DeferWindowPos(v12, a1, a2, a3, a4, (int)a5, (int)a6, v8, a8);
  if ( !v13 || !xxxEndDeferWindowPosEx(v13, v8 & 0x4000) )
    return 0;
  if ( v9 )
    xxxRedrawWindow(0, 1157);
  return 1;
}
