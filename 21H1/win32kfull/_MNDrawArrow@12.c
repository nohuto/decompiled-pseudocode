/*
 * XREFs of _MNDrawArrow@12 @ 0x1A96CC
 * Callers:
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 */

DC *__fastcall MNDrawArrow(HDC a1, int *a2, int a3)
{
  _DWORD *v4; // edx
  int v5; // eax
  DC *result; // eax
  HDC DCEx; // ebx
  int DpiForSystem; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  struct OEMBITMAPSET **OemBitmapInfoForDpi; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // [esp-4h] [ebp-38h]
  int v20[4]; // [esp+10h] [ebp-24h] BYREF
  HDC v21; // [esp+20h] [ebp-14h]
  int *v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+28h] [ebp-Ch]
  int v24; // [esp+2Ch] [ebp-8h]
  int v25; // [esp+3Ch] [ebp+8h]
  int v26; // [esp+3Ch] [ebp+8h]

  v21 = a1;
  v22 = a2;
  v4 = *(_DWORD **)(*(_DWORD *)*a2 + 8);
  v5 = *v22;
  v23 = (int)v4;
  result = *(DC **)(*(_DWORD *)v5 + 20);
  if ( (*((_BYTE *)result + 80) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v4, 0, 66561);
    if ( *(int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a2 + 20) + 20) + 20) < 0 )
    {
      v9 = 7;
    }
    else
    {
      DpiForSystem = GetDpiForSystem();
      v9 = *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) + 3;
    }
    if ( a3 == -3 )
    {
      v10 = 3;
      v11 = 65;
      v23 = 2;
      v19 = 8;
    }
    else
    {
      v12 = *(_DWORD *)(v23 + 20);
      v13 = *(_DWORD *)(v12 + 56);
      v25 = *(_DWORD *)(v12 + 64);
      v14 = v25 - *((_DWORD *)GetDPIMETRICS((_DWORD *)v23) + 6) - v13;
      v23 = 3;
      v11 = 68;
      v10 = v14 - 3;
      v19 = 16;
    }
    v24 = v19;
    v26 = v10;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*v22 + 20) + 80) & 3) == v23 )
    {
      v11 += 2;
      v24 |= 0x100u;
    }
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*v22 + 20) + 20) + 12) )
    {
      v15 = GetDpiForSystem();
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65, v15);
      v20[1] = v26;
      v20[0] = v9;
      v17 = *((__int16 *)OemBitmapInfoForDpi + 2);
      v18 = v26 + *((__int16 *)OemBitmapInfoForDpi + 3);
      v20[2] = v9 + v17;
      v20[3] = v18;
      result = (DC *)DrawFrameControl(DCEx, v20, (HDC)2, v24 | 0x800);
    }
    else
    {
      BitBltSysBmp(DCEx, v9, v10, v11, 1);
      result = BitBltSysBmp(DCEx, v9, v26, v11, 1);
    }
    if ( !v21 )
      return (DC *)_ReleaseDC(DCEx);
  }
  return result;
}
