/*
 * XREFs of _SnapShotDesktopsMonitorsAndWindowsRects@8 @ 0x145C7D
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     _SnapShotMonitorsAndWindowsRects@8 @ 0x145CF1 (_SnapShotMonitorsAndWindowsRects@8.c)
 */

int __fastcall SnapShotDesktopsMonitorsAndWindowsRects(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  while ( v2 )
  {
    v4 = (_DWORD *)Win32AllocPool(24, 1919775573);
    v5 = v4;
    if ( !v4 )
      return -1073741801;
    v4[2] = 0;
    v4[3] = 0;
    v3 = SnapShotMonitorsAndWindowsRects(v2, v4);
    if ( v3 >= 0 )
    {
      v6 = *(_DWORD **)(a2 + 4);
      if ( *v6 != a2 )
        __fastfail(3u);
      *v5 = a2;
      v5[1] = v6;
      *v6 = v5;
      *(_DWORD *)(a2 + 4) = v5;
    }
    else
    {
      Win32FreePool(v5);
    }
    v2 = *(_DWORD *)(v2 + 16);
  }
  return v3;
}
