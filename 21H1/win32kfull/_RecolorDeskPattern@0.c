/*
 * XREFs of _RecolorDeskPattern@0 @ 0xAEE98
 * Callers:
 *     _SetDesktopPattern@8 @ 0xE9318 (_SetDesktopPattern@8.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GreMarkDeletableBrush@4 @ 0xE9408 (_GreMarkDeletableBrush@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall RecolorDeskPattern()
{
  int v0; // esi
  int CompatibleBitmapInternal; // eax
  int v3; // ebx
  HBRUSH v4; // ecx
  int v5; // [esp+10h] [ebp-40h]
  int PatternBrush; // [esp+10h] [ebp-40h]
  int v7; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD v9[3]; // [esp+1Ch] [ebp-34h] BYREF
  __int16 v10; // [esp+28h] [ebp-28h]
  __int16 v11; // [esp+2Ah] [ebp-26h]
  int v12; // [esp+2Ch] [ebp-24h]
  int v13; // [esp+30h] [ebp-20h]
  int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h]
  char v18; // [esp+44h] [ebp-Ch]
  char v19; // [esp+45h] [ebp-Bh]
  char v20; // [esp+46h] [ebp-Ah]
  char v21; // [esp+48h] [ebp-8h]
  char v22; // [esp+49h] [ebp-7h]
  char v23; // [esp+4Ah] [ebp-6h]

  v0 = 0;
  if ( _g_hbmDesktopPattern )
  {
    v8 = GreSelectBitmap(_ghdcMem, _g_hbmDesktopPattern);
    if ( *(_DWORD *)(_gpsi + 1820) )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(_gpDispInfo + 32), 8, 8, 0, 0, 0);
    }
    else
    {
      v10 = 1;
      v11 = 1;
      v16 = 2;
      v17 = 2;
      v9[0] = 40;
      v9[1] = 8;
      v9[2] = 8;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v18 = *(_BYTE *)(_gpsi + 4174);
      v19 = BYTE1(*(_DWORD *)(_gpsi + 4172));
      v20 = *(_BYTE *)(_gpsi + 4172);
      v21 = *(_BYTE *)(_gpsi + 4202);
      v22 = BYTE1(*(_DWORD *)(_gpsi + 4200));
      v23 = *(_BYTE *)(_gpsi + 4200);
      CompatibleBitmapInternal = GreCreateDIBitmapReal(
                                   *(HDC *)(_gpDispInfo + 32),
                                   0,
                                   (int)v9,
                                   0,
                                   0x30u,
                                   0,
                                   0,
                                   0,
                                   0,
                                   0,
                                   0,
                                   0);
    }
    v5 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      v7 = GreSelectBitmap(_ghdcMem2, CompatibleBitmapInternal);
      GreSetTextColor(_ghdcMem2, *(_DWORD *)(_gpsi + 4172));
      GreSetBkColor(_ghdcMem2, *(_DWORD *)(_gpsi + 4200));
      NtGdiBitBltInternal(_ghdcMem2, 0, 0, 8, 8, _ghdcMem, 0, 0, 13369376, 0, 0);
      v3 = v5;
      PatternBrush = GreCreatePatternBrush(v5);
      if ( PatternBrush )
      {
        v4 = *(HBRUSH *)(_gpsi + 4296);
        if ( v4 )
        {
          GreMarkDeletableBrush(v4);
          GreDeleteObject(*(_DWORD *)(_gpsi + 4296));
        }
        GreMarkUndeletableBrush(PatternBrush);
        GreSetBrushOwner(PatternBrush, 0);
        *(_DWORD *)(_gpsi + 4296) = PatternBrush;
        v0 = 1;
      }
      GreSelectBitmap(_ghdcMem2, v7);
      GreDeleteObject(v3);
    }
    GreSelectBitmap(_ghdcMem, v8);
  }
  return v0;
}
