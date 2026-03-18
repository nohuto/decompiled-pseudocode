/*
 * XREFs of _xxxComputeProposedPerMonRect@12 @ 0x15354
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     ?_ShouldMaximizeWindow@@YGHPAUtagWND@@@Z @ 0x15DE6 (-_ShouldMaximizeWindow@@YGHPAUtagWND@@@Z.c)
 */

int __fastcall xxxComputeProposedPerMonRect(int a1, struct tagRECT *a2, _DWORD *a3)
{
  _DWORD *v4; // esi
  struct tagRECT *OldMonitor; // eax
  int v6; // esi
  int ShouldMaximizeWindow; // eax
  struct tagWND *v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+0h] [ebp-14h]
  int v11; // [esp+4h] [ebp-10h]
  struct tagRECT *v12; // [esp+Ch] [ebp-8h]

  v4 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 52);
  *a3 = *v4++;
  a3[1] = *v4++;
  a3[2] = *v4;
  a3[3] = v4[1];
  OldMonitor = (struct tagRECT *)FindOldMonitor(0);
  v12 = OldMonitor;
  if ( OldMonitor == (struct tagRECT *)-1 )
    return 0;
  v6 = *(_DWORD *)(a1 + 20);
  if ( *(_WORD *)(v6 + 180) != *((_WORD *)&a2[2].top + 20 * (_DWORD)OldMonitor) )
  {
    ShouldMaximizeWindow = _ShouldMaximizeWindow(v9);
    xxxNormalizeRect(
      (struct tagWND *)(v6 + 52),
      a2,
      v12,
      (struct tagMONITORRECTS *)(ShouldMaximizeWindow != 0),
      1,
      v10,
      v11);
  }
  return 1;
}
