/*
 * XREFs of sub_180017F6C @ 0x180017F6C
 * Callers:
 *     sub_18001A0C0 @ 0x18001A0C0 (sub_18001A0C0.c)
 *     sub_1800DD43C @ 0x1800DD43C (sub_1800DD43C.c)
 *     sub_180101E70 @ 0x180101E70 (sub_180101E70.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001CCB4 @ 0x18001CCB4 (sub_18001CCB4.c)
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_180017F6C(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_18001D118(a1, v11);
  *(_QWORD *)&v12[8 * v6] = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove(v12, v14, a2 - (_BYTE *)*a1);
    v15 = &v12[8 * v6 + 8];
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove(v15, v14, v16);
  sub_18001CCB4(a1, v12, v8, v11);
  return (__int64)*a1 + 8 * v6;
}
