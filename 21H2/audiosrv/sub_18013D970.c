/*
 * XREFs of sub_18013D970 @ 0x18013D970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_18013D280 @ 0x18013D280 (sub_18013D280.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013D970(__int64 a1, _WORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  int v8; // eax

  v6 = 0;
  v7 = (__int64 *)sub_180055F40(0x18uLL);
  if ( v7 )
  {
    *v7 = (__int64)off_18014B3B0;
    sub_18006481C(v7 + 1, a2);
    *v7 = (__int64)off_18014B3D0;
    *((_DWORD *)v7 + 4) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = sub_18013D280(a1 - 8, (__int64)v7);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
