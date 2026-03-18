/*
 * XREFs of ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x180055294
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800551CC (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x180055338 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180057FC0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800D73F8 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@QEAU1@AEAV-$allocat.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Reallocate_exactly(const struct EffectInput **a1, __int64 a2)
{
  __int64 v3; // rsi
  SIZE_T size_of; // rax
  __int64 v6; // rax
  const struct EffectInput *v7; // rbp
  __int64 v8; // r12
  const struct EffectInput *v9; // rdi
  EffectInput *v10; // rbx

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<104>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = a1[1];
  v8 = v6;
  v9 = *a1;
  v10 = (EffectInput *)v6;
  while ( v9 != v7 )
  {
    EffectInput::EffectInput(v10, v9);
    v10 = (EffectInput *)((char *)v10 + 104);
    v9 = (const struct EffectInput *)((char *)v9 + 104);
  }
  std::_Destroy_range<std::allocator<EffectInput>>(v10, v10);
  return std::vector<EffectInput>::_Change_array(a1, v8, v3, a2);
}
