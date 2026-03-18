/*
 * XREFs of _RestoreSpb@12 @ 0x17E510
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _FindSpb@4 @ 0x17E390 (_FindSpb@4.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _GreSaveScreenBits@16 @ 0x1FD449 (_GreSaveScreenBits@16.c)
 */

int __fastcall RestoreSpb(int *a1, int a2, HDC *a3)
{
  int v3; // edx
  int **Spb; // ebx
  int v5; // esi
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // esi
  HDC v9; // edi
  int *v11; // [esp-8h] [ebp-44h]
  int v14; // [esp+18h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-20h]
  int v16; // [esp+20h] [ebp-1Ch]
  _DWORD v17[4]; // [esp+24h] [ebp-18h] BYREF

  Spb = FindSpb(a1);
  v5 = v3;
  v16 = v3;
  v15 = 0;
  v6 = Spb[7];
  if ( v6 )
  {
    v15 = 1;
    v5 = _ghrgnSPB1;
    v16 = _ghrgnSPB1;
    if ( GreCombineRgn(_ghrgnSPB1, v3, v6, 1) < 2u )
      goto LABEL_10;
  }
  v7 = (unsigned int)Spb[8];
  if ( (v7 & 1) == 0 )
  {
    v9 = *a3;
    if ( !*a3 )
    {
      v9 = *(HDC *)(_gpDispInfo + 28);
      *a3 = v9;
    }
    v14 = GreSelectBitmap(_ghdcMem, Spb[2]);
    if ( v14 )
    {
      GreSelectVisRgn(v9, v5, 2);
      NtGdiBitBltInternal(
        v9,
        (LONG)Spb[3],
        (struct XDCOBJ *)Spb[4],
        (char *)Spb[5] - (char *)Spb[3],
        (char *)Spb[6] - (char *)Spb[4],
        _ghdcMem,
        (struct ECLIPOBJ *)((unsigned int)Spb[3] & 7),
        0,
        13369376,
        0,
        0);
      GreSelectBitmap(_ghdcMem, v14);
      GreCombineRgn(a2, a2, v16, 4);
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((char *)Spb);
    return 1;
  }
  Spb[8] = (int *)(v7 & 0xFFFFFFFE);
  v17[0] = Spb[3];
  v11 = Spb[9];
  v17[1] = Spb[4];
  v17[2] = Spb[5];
  v17[3] = Spb[6];
  if ( !GreSaveScreenBits(v11, v17) )
    goto LABEL_10;
  SetRectRgnIndirect(_ghrgnSPB2, Spb + 3);
  if ( GreCombineRgn(a2, _ghrgnSPB2, v16, 4) != 1 )
  {
    v8 = 2;
    goto LABEL_13;
  }
LABEL_12:
  v8 = v15;
LABEL_13:
  if ( !*(_DWORD *)(a1[5] + 108) || !IsVisible(a1) )
    FreeSpb((char *)Spb);
  return v8;
}
