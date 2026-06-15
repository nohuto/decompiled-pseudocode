/*
 * XREFs of sub_1800571F8 @ 0x1800571F8
 * Callers:
 *     sub_180056D5C @ 0x180056D5C (sub_180056D5C.c)
 *     sub_180056F44 @ 0x180056F44 (sub_180056F44.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 */

__int64 *__fastcall sub_1800571F8(__int64 *a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  SIZE_T v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  char *v13; // rbp
  __int64 v14; // rbx

  v3 = a1[3];
  if ( a3 <= v3 )
  {
    v13 = (char *)a1;
    if ( v3 >= 8 )
      v13 = (char *)*a1;
    v14 = 2 * a3;
    a1[2] = a3;
    memmove(v13, Src, 2 * a3);
    *(_WORD *)&v13[v14] = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v7 = v8 + v3;
        if ( (a3 | 7) >= v8 + v3 )
          v7 = a3 | 7;
      }
    }
    v9 = 2 * (v7 + 1);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v9 = -1LL;
    v10 = sub_180008EAC(v9);
    a1[3] = v7;
    a1[2] = a3;
    v11 = v10;
    memcpy(v10, Src, 2 * a3);
    *((_WORD *)v11 + a3) = 0;
    if ( v3 >= 8 )
      sub_1800472E0(*a1, 2 * v3 + 2);
    *a1 = (__int64)v11;
  }
  return a1;
}
