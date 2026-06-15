/*
 * XREFs of sub_1800579F8 @ 0x1800579F8
 * Callers:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     sub_18013D38C @ 0x18013D38C (sub_18013D38C.c)
 * Callees:
 *     sub_180057A40 @ 0x180057A40 (sub_180057A40.c)
 */

__int64 __fastcall sub_1800579F8(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  if ( a2 > 1 )
  {
    return (unsigned int)-2147024809;
  }
  else if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
      v4 = a1 + 64;
    else
      v4 = a1 + 56;
    sub_180057A40(v4, a3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
