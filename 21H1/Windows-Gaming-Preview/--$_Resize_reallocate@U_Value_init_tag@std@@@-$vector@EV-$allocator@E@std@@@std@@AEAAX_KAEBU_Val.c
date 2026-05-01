/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001AA84
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000D9F8 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004495C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 *     memmove_0 @ 0x180045DBF (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  signed __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  const struct std::nothrow_t *v7; // rbx
  size_t v8; // rcx
  void *v9; // rax
  const struct std::nothrow_t *v10; // rdx
  char *v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // r14
  __int64 v14; // rcx
  char *v15; // rcx
  char *v16; // r8
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
LABEL_22:
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = (_BYTE *)a1[2] - (_BYTE *)*a1;
  v6 = v5 >> 1;
  if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = (const struct std::nothrow_t *)(v6 + v5);
    if ( v6 + v5 < a2 )
      v7 = (const struct std::nothrow_t *)a2;
  }
  else
  {
    v7 = (const struct std::nothrow_t *)a2;
  }
  if ( (unsigned __int64)v7 < 0x1000 )
  {
    if ( v7 )
      v12 = operator new((size_t)v7);
    else
      v12 = 0LL;
  }
  else
  {
    v8 = (size_t)v7 + 39;
    if ( (const struct std::nothrow_t *)((char *)v7 + 39) < v7 )
      v8 = -1LL;
    v9 = operator new(v8);
    if ( !v9 )
    {
LABEL_21:
      _o__invalid_parameter_noinfo_noreturn(v11, v10);
      __debugbreak();
      goto LABEL_22;
    }
    v12 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v12 - 1) = v9;
  }
  try
  {
    v13 = (char *)v12 + a2;
    memset_0((char *)v12 + v4, 0, v13 - ((char *)v12 + v4));
    memmove_0(v12, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  }
  catch ( ... )
  {
    std::allocator<unsigned char>::deallocate(v14, v12, v7);
    throw;
  }
  v15 = (char *)*a1;
  if ( *a1 )
  {
    v10 = (const struct std::nothrow_t *)((_BYTE *)a1[2] - v15);
    if ( (unsigned __int64)v10 < 0x1000 )
    {
LABEL_19:
      operator delete(v15, v10);
      goto LABEL_20;
    }
    v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
    v16 = (char *)*((_QWORD *)v15 - 1);
    v11 = (char *)(v15 - v16);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v15 = v16;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
LABEL_20:
  *a1 = v12;
  a1[1] = v13;
  result = (char *)v7 + (_QWORD)v12;
  a1[2] = (char *)v7 + (_QWORD)v12;
  return result;
}
