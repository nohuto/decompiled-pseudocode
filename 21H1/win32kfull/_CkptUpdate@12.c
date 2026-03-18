/*
 * XREFs of _CkptUpdate@12 @ 0xB48F4
 * Callers:
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 * Callees:
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 */

char __fastcall CkptUpdate(_DWORD *a1, int *a2, int *a3)
{
  char v4; // al
  int v5; // eax
  int v6; // edx
  int *v7; // edi
  _DWORD *v8; // edi
  int *v9; // esi
  int v10; // edi
  int DesktopWindow; // eax
  int v12; // ecx
  int v13; // eax
  int *MonitorMaxArea; // esi
  int v15; // eax
  const struct tagWND *v17; // [esp+0h] [ebp-3Ch]
  int v18[5]; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+24h] [ebp-18h]
  int v20; // [esp+28h] [ebp-14h]
  int v21; // [esp+2Ch] [ebp-10h]
  int v22; // [esp+30h] [ebp-Ch]
  _DWORD *v23; // [esp+34h] [ebp-8h]

  v23 = a1;
  v4 = *(_BYTE *)(a1[5] + 23);
  if ( (v4 & 0x20) != 0 )
  {
    a3[12] |= 0x20u;
    a3[8] = *a2;
    v5 = a2[1];
    a3[9] = v5;
    return v5;
  }
  if ( (v4 & 1) == 0 )
  {
    LOBYTE(v5) = IsVerticallyMaximized(v17);
    if ( (_BYTE)v5 || (LOBYTE(v5) = *(_BYTE *)(v6 + 145), (v5 & 1) != 0) )
    {
      v7 = a3;
    }
    else
    {
      v7 = a3;
      if ( (v5 & 2) == 0 )
      {
LABEL_7:
        *v7 = *a2;
        v8 = v7 + 1;
        *v8++ = a2[1];
        *v8 = a2[2];
        v8[1] = a2[3];
        return v5;
      }
    }
    v7 += 4;
    goto LABEL_7;
  }
  v9 = a3;
  v10 = a3[12] | 0x40;
  a3[12] = v10;
  DesktopWindow = _GetDesktopWindow(a1);
  if ( *(_DWORD *)(v12 + 56) == DesktopWindow )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v12 + 20) + 11) & 0x40) != 0 )
    {
      v5 = -1;
      a3[12] = v10 & 0xFFFFFFBF;
      a3[10] = -1;
    }
    else
    {
      v13 = _MonitorFromRect(a2, 1, 0);
      MonitorMaxArea = GetMonitorMaxArea(v23, v13, v18);
      v15 = *a2;
      v19 = *MonitorMaxArea++;
      v20 = *MonitorMaxArea++;
      v21 = *MonitorMaxArea;
      v22 = MonitorMaxArea[1];
      v9 = a3;
      a3[10] = v15 - v19;
      v5 = a2[1] - v20;
    }
  }
  else
  {
    a3[10] = *a2;
    v5 = a2[1];
  }
  v9[11] = v5;
  return v5;
}
