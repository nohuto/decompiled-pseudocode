/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800C6BE8
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BC7B0 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800C0040 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x1800C2178 (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180017928 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180018238 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x18003A4CC (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memmove_0 @ 0x1800CDD04 (memmove_0.c)
 */

char *__fastcall std::wstring::insert(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // rsi
  bool v10; // cf
  _WORD *v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rdx
  char *v14; // rcx
  unsigned __int64 v15; // r8
  _WORD *v16; // rax
  char *v17; // rax
  char *v18; // rdi
  unsigned __int64 i; // rcx
  _WORD *v20; // rax

  v6 = *((_QWORD *)a1 + 2);
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_37;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 > 0x7FFFFFFFFFFFFFFELL )
LABEL_37:
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < v9 )
  {
    std::wstring::_Copy((const void **)a1, v6 + a3, v6);
    goto LABEL_12;
  }
  if ( !v9 )
  {
    v10 = *((_QWORD *)a1 + 3) < 8uLL;
    *((_QWORD *)a1 + 2) = 0LL;
    if ( v10 )
      v11 = a1;
    else
      v11 = *(_WORD **)a1;
    *v11 = 0;
LABEL_12:
    if ( !v9 )
      return a1;
  }
  v12 = *((_QWORD *)a1 + 3);
  if ( v12 < 8 )
    v13 = a1;
  else
    v13 = *(char **)a1;
  if ( v12 < 8 )
    v14 = a1;
  else
    v14 = *(char **)a1;
  v15 = *((_QWORD *)a1 + 2) - a2;
  if ( v15 )
  {
    memmove_0(&v14[2 * a2 + 2 * a3], &v13[2 * a2], 2 * v15);
    v12 = *((_QWORD *)a1 + 3);
  }
  if ( a3 == 1 )
  {
    if ( v12 < 8 )
      v16 = a1;
    else
      v16 = *(_WORD **)a1;
    v16[a2] = a4;
  }
  else
  {
    if ( v12 < 8 )
      v17 = a1;
    else
      v17 = *(char **)a1;
    v18 = &v17[2 * a2];
    for ( i = a3; i; --i )
    {
      *(_WORD *)v18 = a4;
      v18 += 2;
    }
  }
  v10 = *((_QWORD *)a1 + 3) < 8uLL;
  *((_QWORD *)a1 + 2) = v9;
  if ( v10 )
    v20 = a1;
  else
    v20 = *(_WORD **)a1;
  v20[v9] = 0;
  return a1;
}
