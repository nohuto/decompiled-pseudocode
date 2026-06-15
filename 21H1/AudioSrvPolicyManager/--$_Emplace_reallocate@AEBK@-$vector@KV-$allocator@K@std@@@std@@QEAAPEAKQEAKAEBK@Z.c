/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x18001DE80
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x1800197A4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180036F00 (-AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18000F068 (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x1800406E7 (memmove_0.c)
 */

_DWORD *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        _QWORD *a1,
        char *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  _QWORD *v14; // rdi
  _DWORD *v15; // rsi
  char *v16; // r8
  char *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *v20; // rcx
  const struct std::nothrow_t *v21; // rdx
  char *v22; // r8
  char *v23; // rcx

  v6 = (__int64)&a2[-*a1] >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_18;
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 4 * v11;
  v13 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = (_DWORD *)v14 + v6;
  *v15 = *a3;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, (size_t)&a2[-*a1]);
    v18 = v15 + 1;
    v19 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  v20 = (char *)*a1;
  if ( *a1 )
  {
    v21 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v21 < 0x1000 )
    {
LABEL_15:
      operator delete(v20, v21);
      goto LABEL_16;
    }
    v21 = (const struct std::nothrow_t *)((char *)v21 + 39);
    v22 = (char *)*((_QWORD *)v20 - 1);
    v23 = (char *)(v20 - v22);
    if ( (unsigned __int64)(v23 - 8) <= 0x1F )
    {
      v20 = v22;
      goto LABEL_15;
    }
    _o__invalid_parameter_noinfo_noreturn(v23, v21);
    __debugbreak();
LABEL_18:
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>::_Xlength();
  }
LABEL_16:
  *a1 = v14;
  a1[1] = (char *)v14 + 4 * v8;
  a1[2] = (char *)v14 + v12;
  return v15;
}
