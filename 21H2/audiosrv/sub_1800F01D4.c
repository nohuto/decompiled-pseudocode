/*
 * XREFs of sub_1800F01D4 @ 0x1800F01D4
 * Callers:
 *     sub_1800F2040 @ 0x1800F2040 (sub_1800F2040.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800F15BC @ 0x1800F15BC (sub_1800F15BC.c)
 */

__int64 __fastcall sub_1800F01D4(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  _QWORD *v16; // rcx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v13[v6] = *a3;
  v14 = a1[1];
  v15 = *a1;
  v16 = v13;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove(v13, v15, a2 - (_BYTE *)*a1);
    v16 = &v13[v6 + 1];
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove(v16, v15, v17);
  sub_1800F15BC(a1, v13, v8, v11);
  return (__int64)*a1 + 8 * v6;
}
