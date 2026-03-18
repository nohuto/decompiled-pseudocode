/*
 * XREFs of ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801B8B3C
 * Callers:
 *     ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801B94F0 (-GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 *     ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C1400 (-GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent.c)
 *     ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801D7810 (-GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x1801B9A3C (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 */

char *__fastcall std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(
        char **a1,
        const void *a2,
        __int64 a3)
{
  char *v3; // rdi
  size_t v4; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  char *result; // rax

  v3 = *a1;
  v4 = a3 - (_QWORD)a2;
  v7 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v8 = (v7 >> 63) + v7;
  if ( v8 > (a1[2] - *a1) / 40 )
  {
    std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a1, v8);
    v3 = *a1;
  }
  memmove_0(v3, a2, v4);
  result = &v3[v4];
  a1[1] = &v3[v4];
  return result;
}
