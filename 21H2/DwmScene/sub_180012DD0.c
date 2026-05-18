/*
 * XREFs of sub_180012DD0 @ 0x180012DD0
 * Callers:
 *     sub_180012B88 @ 0x180012B88 (sub_180012B88.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_18007233C @ 0x18007233C (sub_18007233C.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010BC4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180012DD0(_QWORD *Src, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  void *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  size_t v15; // r8
  _QWORD *v16; // rdi

  v2 = Src[2];
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v2 < a2 )
    std::vector<void *>::_Xlen();
  v5 = Src[3];
  v6 = a2 + v2;
  v7 = (a2 + v2) | 0xF;
  if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = v5 >> 1;
    if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
    {
      v3 = v7;
      if ( v7 < v8 + v5 )
        v3 = v8 + v5;
    }
  }
  v9 = v3 + 1;
  if ( v3 == -1 )
    v9 = -1LL;
  if ( v9 < 0x1000 )
  {
    v14 = 0LL;
    if ( v9 )
      v14 = operator new(v9);
  }
  else
  {
    v10 = v9 + 39;
    if ( v9 + 39 < v9 )
      v10 = -1LL;
    v11 = operator new(v10);
    if ( !v11 )
      goto LABEL_20;
    v14 = (_QWORD *)(((unsigned __int64)v11 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = v11;
  }
  Src[2] = v6;
  v15 = v2 + 1;
  Src[3] = v3;
  if ( v5 < 0x10 )
  {
    memcpy(v14, Src, v15);
    goto LABEL_22;
  }
  v16 = (_QWORD *)*Src;
  memcpy(v14, (const void *)*Src, v15);
  if ( v5 + 1 >= 0x1000 )
  {
    v13 = *(v16 - 1);
    v12 = v5 + 40;
    if ( (unsigned __int64)v16 - v13 - 8 <= 0x1F )
    {
      v16 = (_QWORD *)*(v16 - 1);
      goto LABEL_19;
    }
LABEL_20:
    o__invalid_parameter_noinfo_noreturn(v13, v12);
    __debugbreak();
  }
LABEL_19:
  j_j__o_free(v16);
LABEL_22:
  *Src = v14;
  return Src;
}
