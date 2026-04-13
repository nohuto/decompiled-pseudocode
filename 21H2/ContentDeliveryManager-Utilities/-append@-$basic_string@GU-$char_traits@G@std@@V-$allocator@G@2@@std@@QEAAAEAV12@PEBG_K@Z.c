/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004FD70
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004F9FC (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180018A54 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180038FE0 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003B238 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800CFDA8 (memcpy_0.c)
 */

void **__fastcall std::wstring::append(void **a1, void **a2, unsigned __int64 a3)
{
  void **v5; // rbx
  void **v6; // rax
  _BYTE *v7; // rax
  unsigned __int64 v9; // rbp
  char *v10; // rcx
  _BYTE *v11; // rax

  v5 = a1;
  if ( !a2 )
    goto LABEL_13;
  v6 = (unsigned __int64)a1[3] < 8 ? a1 : (void **)*a1;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( (void **)((char *)a1 + 2 * (_QWORD)v5[2]) > a2 )
  {
    if ( (unsigned __int64)v5[3] < 8 )
      v7 = v5;
    else
      v7 = *v5;
    return std::wstring::append(v5, v5, ((char *)a2 - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( ~(unsigned __int64)v5[2] <= a3 )
      std::wstring::_Xlen();
    if ( a3 )
    {
      v9 = (unsigned __int64)v5[2] + a3;
      if ( std::wstring::_Grow(v5, v9, 0) )
      {
        if ( (unsigned __int64)v5[3] < 8 )
          v10 = (char *)v5;
        else
          v10 = (char *)*v5;
        memcpy_0(&v10[2 * (_QWORD)v5[2]], a2, 2 * a3);
        if ( (unsigned __int64)v5[3] < 8 )
          v11 = v5;
        else
          v11 = *v5;
        v5[2] = (void *)v9;
        *(_WORD *)&v11[2 * v9] = 0;
      }
    }
    return v5;
  }
}
