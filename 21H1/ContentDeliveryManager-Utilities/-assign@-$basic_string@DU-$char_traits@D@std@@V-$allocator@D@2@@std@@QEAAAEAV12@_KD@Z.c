/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180038110
 * Callers:
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x1800399B4 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800AAF9C (--$_Getloctxt@DV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YAHAEAV-$istreambuf_i.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800AFAA4 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800B0514 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x1800B2D9C (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x1800B81D4 (--$_Getloctxt@DV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x1800C9B50 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800C9B50.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800176E0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180017A20 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 */

void *__fastcall std::string::assign(void *a1, size_t Size, char a3)
{
  int v3; // esi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  void *v8; // rcx
  _BYTE *v9; // rax

  v3 = a3;
  if ( Size == -1LL )
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < Size )
  {
    std::string::_Copy((const void **)a1, Size, *((_QWORD *)a1 + 2));
    goto LABEL_9;
  }
  if ( !Size )
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v6 = a1;
    else
      v6 = *(_BYTE **)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    *v6 = 0;
LABEL_9:
    if ( !Size )
      return a1;
  }
  if ( Size == 1 )
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v7 = a1;
    else
      v7 = *(_BYTE **)a1;
    *v7 = v3;
  }
  else
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v8 = a1;
    else
      v8 = *(void **)a1;
    memset_0(v8, v3, Size);
  }
  if ( *((_QWORD *)a1 + 3) < 0x10uLL )
    v9 = a1;
  else
    v9 = *(_BYTE **)a1;
  *((_QWORD *)a1 + 2) = Size;
  v9[Size] = 0;
  return a1;
}
