/*
 * XREFs of sub_1800813DC @ 0x1800813DC
 * Callers:
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800813DC(__int64 a1, _BYTE *a2, int a3, int *a4)
{
  unsigned int v4; // r10d
  char v6; // cl
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx

  v4 = 0;
  v6 = *(_BYTE *)(a1 + 548);
  *a4 = 0;
  if ( v6 == 2 || (v7 = 0, v6 == 3) )
  {
    v8 = 0;
    if ( (*a2 & 8) != 0 && (*(_BYTE *)(a1 + 120) & 2) != 0 )
    {
      *a4 = 2;
      v8 = 2;
    }
    v9 = v8;
    if ( (*a2 & 0x20) != 0 && (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = v8 | 1;
      *a4 = v8 | 1;
    }
    v10 = v9;
    if ( (*a2 & 2) == 0 && (*(_BYTE *)(a1 + 120) & 0x20) != 0 )
    {
      v10 = v9 | 0x20;
      *a4 = v9 | 0x20;
    }
    v11 = v10;
    if ( (*a2 & 0x10) != 0 && (*(_BYTE *)(a1 + 120) & 0x40) != 0 )
    {
      v11 = v10 | 0x40;
      *a4 = v10 | 0x40;
    }
    v7 = v11;
    if ( (*(_DWORD *)(a1 + 112) & 0x8000) != 0 && a3 == 8 )
    {
      v7 = v11 | 0x200;
      *a4 = v11 | 0x200;
    }
  }
  LOBYTE(v4) = v7 != 0;
  return v4;
}
