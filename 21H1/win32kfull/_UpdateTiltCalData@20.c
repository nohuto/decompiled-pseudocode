/*
 * XREFs of _UpdateTiltCalData@20 @ 0x13F052
 * Callers:
 *     __SetCalibrationData@16 @ 0x1448D3 (__SetCalibrationData@16.c)
 * Callees:
 *     <none>
 */

int __fastcall UpdateTiltCalData(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // ecx

  v6 = *(_DWORD **)(a1 + 316);
  if ( v6 || (v6 = (_DWORD *)Win32AllocPoolZInit(48, 2020635477), v7 = 0, (*(_DWORD *)(a1 + 316) = v6) != 0) )
  {
    if ( a4 <= 0 )
      return 1;
    if ( a4 <= 2 )
    {
      if ( *v6 )
      {
        Win32FreePool(*v6);
        v6 = *(_DWORD **)(a1 + 316);
      }
      *v6 = a3;
      *(_DWORD *)(*(_DWORD *)(a1 + 316) + 4) = a2;
      return 1;
    }
    if ( a4 != 3 )
      return 1;
    switch ( *(_DWORD *)(a1 + 212) )
    {
      case 1:
        v8 = v6[2];
        v6[2] = a3;
        v6[3] = a2;
        *a5 = 0;
        break;
      case 2:
        v8 = v6[4];
        v6[4] = a3;
        v6[5] = a2;
        *a5 = 1;
        break;
      case 3:
        v8 = v6[6];
        v6[6] = a3;
        v6[7] = a2;
        *a5 = 2;
        break;
      case 4:
        v8 = v6[8];
        v6[8] = a3;
        v6[9] = a2;
        *a5 = 3;
        break;
      default:
        return 1;
    }
    v6[11] = a3;
    if ( v8 )
      Win32FreePool(v8);
    return 1;
  }
  return v7;
}
