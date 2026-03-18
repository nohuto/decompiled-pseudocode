/*
 * XREFs of ?_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z @ 0x15635E
 * Callers:
 *     _NtUserSetCursorContents@8 @ 0x1691CD (_NtUserSetCursorContents@8.c)
 * Callees:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

char __fastcall _SetCursorContents(int a1, int a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  if ( a1 != a2 )
  {
    if ( (*(_BYTE *)(a1 + 44) & 8) == 0 && (*(_BYTE *)(a2 + 44) & 8) == 0 )
    {
      v4 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
      v5 = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 52) = v4;
      v6 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = v5;
      v7 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 56) = v6;
      v8 = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(a1 + 80) = v7;
      v9 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 80) = v8;
      v10 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 60) = v9;
      LOWORD(v9) = *(_WORD *)(a2 + 48);
      *(_DWORD *)(a2 + 60) = v10;
      *(_WORD *)(a1 + 48) = v9;
      *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 50);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
      *(_WORD *)(a1 + 38) = *(_WORD *)(a2 + 38);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
    }
    _DestroyCursor((_DWORD *)a2, 2);
    if ( gpcurLogCurrent == *(struct tagCURSOR **)(a1 + 24) )
    {
      gpcurLogCurrent = 0;
      gpcurPhysCurrent = 0;
      zzzUpdateCursorImage();
    }
  }
  return 1;
}
