/*
 * XREFs of sub_180041058 @ 0x180041058
 * Callers:
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_18006A1FC @ 0x18006A1FC (sub_18006A1FC.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_18007156C @ 0x18007156C (sub_18007156C.c)
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180041058(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 *i; // r8

  v2 = (__int64 *)a1[2];
  if ( !v2 )
    goto LABEL_15;
  v3 = *v2;
  if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = *v2;
  if ( (v3 & 1) == 0 )
  {
LABEL_8:
    a1[2] = v3;
  }
  else
  {
LABEL_15:
    for ( i = (__int64 *)(a1[3] + 8LL);
          (unsigned __int64)i < *(_QWORD *)(a1[1] + 8LL) + 8 * ((unsigned __int64)*(unsigned int *)(a1[1] + 4LL) >> 5);
          ++i )
    {
      v3 = *i;
      if ( (*i & 1) == 0 )
      {
        a1[3] = i;
        goto LABEL_8;
      }
    }
    v3 = 0LL;
  }
  if ( !v3 )
    return 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) <= 1 )
    __fastfail(0xEu);
  return v3;
}
