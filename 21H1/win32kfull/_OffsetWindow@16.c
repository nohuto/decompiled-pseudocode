/*
 * XREFs of _OffsetWindow@16 @ 0x2AF60
 * Callers:
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526 (_UpdateWindowPositionsForDpiBoundaryChange@4.c)
 * Callees:
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _FindSpb@4 @ 0x17E390 (_FindSpb@4.c)
 */

int __fastcall OffsetWindow(int a1, int a2, int a3, int a4)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  _DWORD *Spb; // eax
  int result; // eax
  int v12; // ecx
  _DWORD v13[2]; // [esp+10h] [ebp-8h] BYREF

  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 52) += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 60) += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 56) += a3;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 64) += a3;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 68) += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 76) += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 72) += a3;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 80) += a3;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = v6;
  v8 = *(_DWORD *)(v6 + 92);
  if ( v8 > 1 && (*(_BYTE *)(v6 + 13) & 8) == 0 )
  {
    GreOffsetRgn(v8, a2, a3);
    v7 = *(_DWORD *)(a1 + 20);
  }
  v9 = *(_DWORD *)(v7 + 108);
  if ( v9 )
  {
    GreOffsetRgn(v9, a2, a3);
    v7 = *(_DWORD *)(a1 + 20);
  }
  if ( *(char *)(v7 + 8) < 0 )
  {
    Spb = (_DWORD *)FindSpb(a1);
    Spb[3] += a2;
    Spb[5] += a2;
    Spb[6] += a3;
    Spb[4] += a3;
  }
  result = IsWindowDesktopComposed(a1);
  if ( result )
    result = DwmChildRectChange(a1);
  v12 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v12 + 18) & 8) != 0 )
  {
    v13[0] = *(_DWORD *)(v12 + 52);
    v13[1] = *(_DWORD *)(v12 + 56);
    return UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), a1, 0, 0, v13, 0, 0, 0, 0, 0, 0, 0);
  }
  return result;
}
