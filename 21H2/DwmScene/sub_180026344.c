/*
 * XREFs of sub_180026344 @ 0x180026344
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C61C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010BC4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     sub_180012B18 @ 0x180012B18 (sub_180012B18.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180026344(_QWORD *Src, unsigned __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rsi
  size_t v14; // r8
  __int64 v15; // r14
  char *v16; // r12
  size_t v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *result; // rax

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::vector<void *>::_Xlen();
  v9 = Src[3];
  v10 = a2 + v5;
  v11 = (a2 + v5) | 7;
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
  v13 = sub_180012B18((__int64)Src, v6 + 1);
  Src[2] = v10;
  v14 = 2 * v5;
  v15 = a5 + v5;
  Src[3] = v6;
  v16 = (char *)v13 + v14;
  v17 = 2 * a5;
  if ( v9 < 8 )
  {
    memcpy(v13, Src, v14);
    memcpy(v16, a4, v17);
    *((_WORD *)v13 + v15) = 0;
  }
  else
  {
    v18 = (_QWORD *)*Src;
    memcpy(v13, (const void *)*Src, v14);
    memcpy(v16, a4, v17);
    *((_WORD *)v13 + v15) = 0;
    if ( 2 * v9 + 2 >= 0x1000 )
    {
      v19 = *(v18 - 1);
      if ( (unsigned __int64)v18 - v19 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, 2 * v9 + 41);
        __debugbreak();
      }
      v18 = (_QWORD *)*(v18 - 1);
    }
    j_j__o_free(v18);
  }
  result = Src;
  *Src = v13;
  return result;
}
