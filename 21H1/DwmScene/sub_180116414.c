/*
 * XREFs of sub_180116414 @ 0x180116414
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1801167C8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010AE4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     sub_180012A38 @ 0x180012A38 (sub_180012A38.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180116414(_QWORD *Src, unsigned __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  size_t v15; // r8
  _QWORD *v16; // r14
  _WORD *v17; // rdi
  _QWORD *v18; // rbx
  __int64 j; // rcx
  __int64 v20; // rcx
  __int64 i; // rcx

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
  v13 = v6 + 1;
  if ( v6 == -1 )
    v13 = -1LL;
  v14 = sub_180012A38((__int64)Src, v13);
  Src[3] = v6;
  v15 = 2 * v5;
  Src[2] = v10;
  v16 = v14;
  v17 = (_WORD *)v14 + v5;
  if ( v9 < 8 )
  {
    memcpy(v14, Src, v15);
    if ( a4 )
    {
      for ( i = a4; i; --i )
        *v17++ = a5;
    }
    *((_WORD *)v16 + a4 + v5) = 0;
  }
  else
  {
    v18 = (_QWORD *)*Src;
    memcpy(v14, (const void *)*Src, v15);
    if ( a4 )
    {
      for ( j = a4; j; --j )
        *v17++ = a5;
    }
    *((_WORD *)v16 + a4 + v5) = 0;
    if ( 2 * v9 + 2 >= 0x1000 )
    {
      v20 = *(v18 - 1);
      if ( (unsigned __int64)v18 - v20 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v20, 2 * v9 + 41);
        __debugbreak();
      }
      v18 = (_QWORD *)*(v18 - 1);
    }
    j_j__o_free(v18);
  }
  *Src = v16;
  return Src;
}
