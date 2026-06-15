/*
 * XREFs of sub_18013D810 @ 0x18013D810
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_18013D280 @ 0x18013D280 (sub_18013D280.c)
 */

__int64 __fastcall sub_18013D810(__int64 a1, int a2, int a3, _WORD *a4)
{
  unsigned int v5; // ebx
  __int64 *v9; // rdi
  int v10; // eax

  v5 = 0;
  v9 = (__int64 *)sub_180055F40(0x18uLL);
  if ( v9 )
  {
    *v9 = (__int64)off_18014B3B0;
    sub_18006481C(v9 + 1, a4);
    *((_DWORD *)v9 + 4) = a3;
    *v9 = (__int64)off_180156350;
    *((_DWORD *)v9 + 5) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = sub_18013D280(a1 - 8, (__int64)v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
