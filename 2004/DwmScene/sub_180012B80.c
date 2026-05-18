/*
 * XREFs of sub_180012B80 @ 0x180012B80
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010AE4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180012B80(_QWORD *Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  void *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  char *v19; // r15
  _QWORD *v20; // rbx

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::vector<void *>::_Xlen();
  v9 = Src[3];
  v10 = a2 + v5;
  v11 = (a2 + v5) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v9 )
        v6 = v12 + v9;
    }
  }
  v13 = v6 + 1;
  if ( v6 == -1 )
    v13 = -1LL;
  if ( v13 < 0x1000 )
  {
    if ( v13 )
      v18 = operator new(v13);
    else
      v18 = 0LL;
  }
  else
  {
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
      v14 = -1LL;
    v15 = operator new(v14);
    if ( !v15 )
      goto LABEL_21;
    v18 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v18 - 1) = v15;
  }
  Src[2] = v10;
  v19 = (char *)v18 + v5;
  Src[3] = v6;
  if ( v9 < 0x10 )
  {
    memcpy(v18, Src, v5);
    memcpy((char *)v18 + v5, a4, Size);
    v19[Size] = 0;
    goto LABEL_23;
  }
  v20 = (_QWORD *)*Src;
  memcpy(v18, (const void *)*Src, v5);
  memcpy((char *)v18 + v5, a4, Size);
  v19[Size] = 0;
  if ( v9 + 1 >= 0x1000 )
  {
    v17 = *(v20 - 1);
    v16 = v9 + 40;
    if ( (unsigned __int64)v20 - v17 - 8 <= 0x1F )
    {
      v20 = (_QWORD *)*(v20 - 1);
      goto LABEL_20;
    }
LABEL_21:
    o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_20:
  j_j__o_free(v20);
LABEL_23:
  *Src = v18;
  return Src;
}
