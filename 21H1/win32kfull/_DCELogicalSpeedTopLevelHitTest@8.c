/*
 * XREFs of _DCELogicalSpeedTopLevelHitTest@8 @ 0x150A63
 * Callers:
 *     <none>
 * Callees:
 *     _DCELayerHitTest@12 @ 0x25668 (_DCELayerHitTest@12.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IsWindowUnderActiveLockScreen@4 @ 0x26C7A (_IsWindowUnderActiveLockScreen@4.c)
 */

_DWORD *__stdcall DCELogicalSpeedTopLevelHitTest(int *a1, unsigned int a2)
{
  int v2; // esi
  _DWORD *v4; // esi
  int *v5; // ecx
  _DWORD *v6; // ebx
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  HDEV v10; // edi
  HWND v11; // edx
  int v12; // eax
  int v13; // eax
  HDEV v14; // [esp+10h] [ebp-8h] BYREF
  HWND v15; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
  if ( !v2 )
    return 0;
  v4 = *(_DWORD **)(v2 + 60);
  if ( v4 )
  {
    v5 = a1;
    while ( 1 )
    {
      v14 = (HDEV)*v5;
      v15 = (HWND)v5[1];
      if ( (*(_BYTE *)(v4[5] + 23) & 0x10) != 0 )
        break;
LABEL_27:
      v4 = (_DWORD *)v4[12];
      if ( !v4 )
        return v4;
    }
    if ( !GetWindowCloakState(v4) && !IsWindowUnderActiveLockScreen(v4) )
    {
      v6 = (_DWORD *)v4[5];
      v7 = v6[46];
      if ( (((a2 >> 8) ^ (v7 >> 8)) & 0x1FF) != 0
        || ((a2 & 0xF) != 2 || (a2 & 0x20000000) == 0 ? (v8 = 0) : (v8 = 1),
            (v7 & 0xF) != 2 || (v7 & 0x20000000) == 0 ? (v9 = 0) : (v9 = 1),
            v8 != v9) )
      {
        LogicalToPhysicalDPIPoint(&v14, &v14, a2, 0);
        PhysicalToLogicalDPIPoint(&v14, &v14, *(_DWORD *)(v4[5] + 184), 0);
        v6 = (_DWORD *)v4[5];
      }
      v10 = v14;
      if ( PtInRect(v6 + 13, (int)v14, (int)v15) )
      {
        v12 = v6[27];
        if ( !v12 )
        {
LABEL_23:
          v13 = v4[5];
          if ( (*(_BYTE *)(v13 + 18) & 8) == 0
            || (*(_BYTE *)(v13 + 144) & 0x20) != 0
            || DCELayerHitTest((int)v4, v10, v11) )
          {
            return v4;
          }
          goto LABEL_26;
        }
        if ( GrePtInRegion(v12, v10, v11) )
        {
          v11 = v15;
          v10 = v14;
          goto LABEL_23;
        }
      }
    }
LABEL_26:
    v5 = a1;
    goto LABEL_27;
  }
  return v4;
}
