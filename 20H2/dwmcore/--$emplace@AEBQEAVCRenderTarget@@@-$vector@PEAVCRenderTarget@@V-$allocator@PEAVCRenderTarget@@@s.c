/*
 * XREFs of ??$emplace@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCRenderTarget@@@std@@@std@@@1@AEBQEAVCRenderTarget@@@Z @ 0x1801635C0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001D804 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

char **__fastcall std::vector<CRenderTarget *>::emplace<CRenderTarget * const &>(
        _QWORD *a1,
        char **a2,
        char *a3,
        __int64 *a4)
{
  char *v4; // r10
  __int64 v7; // rsi

  v4 = (char *)a1[1];
  if ( (char *)a1[2] == v4 )
  {
    *a2 = std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(a1, a3, a4);
  }
  else
  {
    v7 = *a4;
    if ( a3 == v4 )
    {
      *(_QWORD *)v4 = v7;
      a1[1] += 8LL;
    }
    else
    {
      *(_QWORD *)v4 = *((_QWORD *)v4 - 1);
      a1[1] += 8LL;
      memmove_0(a3 + 8, a3, v4 - a3 - 8);
      *(_QWORD *)a3 = v7;
    }
    *a2 = a3;
  }
  return a2;
}
