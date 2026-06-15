/*
 * XREFs of sub_180021570 @ 0x180021570
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021570(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    PackageClaims = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v9 = &unk_180043D54;
      }
      else if ( (*a4 & 0x10000) != 0 )
      {
        v9 = &unk_180043D50;
      }
      else if ( (*(_BYTE *)a4 & 4) != 0 )
      {
        v9 = &unk_180043D34;
      }
      else if ( (*a4 & 0x400) != 0 )
      {
        v9 = &unk_180043D44;
      }
      else if ( (*a4 & 0x800) != 0 )
      {
        v9 = &unk_180043D48;
      }
      else if ( (*(_BYTE *)a4 & 0x40) != 0 )
      {
        v9 = &unk_180043D40;
      }
      else if ( (*a4 & 0x1000) != 0 )
      {
        v9 = &unk_180043D4C;
      }
      else
      {
        v9 = &unk_180043D3C;
        if ( (*(_BYTE *)a4 & 8) == 0 )
          v9 = &unk_180043D30;
      }
    }
    else
    {
      v9 = &unk_180043D38;
    }
    *a3 = v9[10 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}
