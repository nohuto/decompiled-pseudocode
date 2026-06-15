/*
 * XREFs of sub_18010933C @ 0x18010933C
 * Callers:
 *     sub_1801094B0 @ 0x1801094B0 (sub_1801094B0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memmove @ 0x18007444B (memmove.c)
 */

__int64 __fastcall sub_18010933C(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  SIZE_T v6; // rcx
  _QWORD *v7; // r14
  __int64 v8; // r15
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  size_t v12; // r8
  char *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 != v3 && v2 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v5 = a1[3];
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  v7 = sub_180008EAC(v6);
  v8 = 8 * v5;
  v9 = 8LL * a1[2] - 8 * v5;
  memmove(&v7[v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = (char *)&v7[v5] + v9;
  if ( v5 > v4 )
  {
    memmove(v11, v10, 8 * v4);
    memmove(v7, (const void *)(8 * v4 + a1[1]), v8 - 8 * v4);
    v13 = (char *)v7 + v8 - 8 * v4;
    v12 = 8 * v4;
  }
  else
  {
    memmove(v11, v10, 8 * v5);
    memset(&v11[v8], 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = (char *)v7;
  }
  result = (__int64)memset(v13, 0, v12);
  v15 = a1[1];
  if ( v15 )
    result = sub_1800472E0(v15, 8LL * a1[2]);
  a1[2] += v4;
  a1[1] = v7;
  return result;
}
