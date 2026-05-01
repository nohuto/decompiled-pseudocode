/*
 * XREFs of sub_180035ABC @ 0x180035ABC
 * Callers:
 *     sub_180028E04 @ 0x180028E04 (sub_180028E04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035ABC(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // edx
  int v8; // ecx
  int v9; // eax

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
    v8 = 0x10000;
    if ( (*(_BYTE *)a5 & 1) == 0 )
      goto LABEL_13;
    if ( (*(_BYTE *)a5 & 8) != 0 )
      goto LABEL_13;
    v9 = *a4;
    if ( (*a4 & 0x10000) != 0 || (v9 & 4) != 0 || (v9 & 0x400) != 0 )
      goto LABEL_13;
    if ( (v9 & 0x800) == 0 )
    {
      if ( (v9 & 0x40) != 0 )
      {
LABEL_13:
        *a3 = v8;
        return (unsigned int)PackageClaims;
      }
      if ( (v9 & 0x1000) == 0 )
      {
        v8 = ((unsigned __int8)~*(_BYTE *)a4 >> 3) & 1 | 0x10000;
        goto LABEL_13;
      }
    }
    v8 = 65537;
    goto LABEL_13;
  }
  return (unsigned int)PackageClaims;
}
