/*
 * XREFs of sub_180026480 @ 0x180026480
 * Callers:
 *     sub_18002C714 @ 0x18002C714 (sub_18002C714.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010BC4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     sub_180012B18 @ 0x180012B18 (sub_180012B18.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

const void **__fastcall sub_180026480(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        __int64 a6)
{
  __int64 v6; // rbx
  char *v7; // rbp
  unsigned __int64 v9; // rsi
  char *v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // r15
  size_t v16; // r12
  size_t v17; // r8
  char *v18; // r13
  size_t v19; // rbp
  char *v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  const void **result; // rax
  void *v25; // [rsp+20h] [rbp-48h]

  v6 = 0x7FFFFFFFFFFFFFFELL;
  v7 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v7 < a2 )
    std::vector<void *>::_Xlen();
  v9 = (unsigned __int64)Src[3];
  v10 = &v7[a2];
  v11 = (unsigned __int64)&v7[a2] | 7;
  if ( v11 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL - (v9 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v9 )
        v6 = v12 + v9;
    }
  }
  v13 = v6 + 1;
  if ( v6 == -1 )
    v13 = -1LL;
  v14 = sub_180012B18((__int64)Src, v13);
  Src[2] = v10;
  Src[3] = (const void *)v6;
  v15 = 2 * a4;
  v16 = 2 * a6;
  v17 = 2 * a4;
  v18 = (char *)v14 + 2 * a4;
  v19 = 2LL * (_QWORD)&v7[-a4] + 2;
  v20 = (char *)v14 + 2 * a4 + 2 * a6;
  v25 = v20;
  if ( v9 < 8 )
  {
    memcpy(v14, Src, v17);
    memcpy(v18, a5, v16);
    memcpy(v20, (char *)Src + v15, v19);
  }
  else
  {
    v21 = *Src;
    memcpy(v14, *Src, v17);
    memcpy(v18, a5, v16);
    memcpy(v25, (char *)v21 + v15, v19);
    if ( 2 * v9 + 2 >= 0x1000 )
    {
      v22 = *(v21 - 1);
      if ( (unsigned __int64)v21 - v22 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, 2 * v9 + 41);
        __debugbreak();
      }
      v21 = (_QWORD *)*(v21 - 1);
    }
    j_j__o_free(v21);
  }
  result = Src;
  *Src = v14;
  return result;
}
