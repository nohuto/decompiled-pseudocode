/*
 * XREFs of sub_18002C714 @ 0x18002C714
 * Callers:
 *     sub_1800237BC @ 0x1800237BC (sub_1800237BC.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 * Callees:
 *     sub_180026480 @ 0x180026480 (sub_180026480.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x18002C608 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

const void **__fastcall sub_18002C714(_QWORD *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  _QWORD *v7; // r14
  bool v8; // cf
  char *v9; // r12
  __int64 v10; // rdi

  v6 = a1[2];
  v7 = a1;
  if ( v6 < a2 )
    std::vector<void *>::_Xlen();
  if ( a4 > a1[3] - v6 )
  {
    LOBYTE(v6) = 0;
    return sub_180026480((const void **)a1, a4, v6, a2, a3, a4);
  }
  else
  {
    v8 = a1[3] < 8uLL;
    a1[2] = v6 + a4;
    if ( !v8 )
      a1 = (_QWORD *)*a1;
    v9 = (char *)a1 + 2 * a2;
    if ( &a3[2 * a4] <= v9 || a3 > (char *)a1 + 2 * v6 )
    {
      v10 = a4;
    }
    else if ( v9 > a3 )
    {
      v10 = (v9 - a3) >> 1;
    }
    else
    {
      v10 = 0LL;
    }
    memmove(&v9[2 * a4], v9, 2 * (v6 - a2) + 2);
    memcpy(v9, a3, 2 * v10);
    memcpy(&v9[2 * v10], &a3[2 * v10 + 2 * a4], 2 * (a4 - v10));
    return (const void **)v7;
  }
}
