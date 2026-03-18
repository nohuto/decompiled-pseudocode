/*
 * XREFs of ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x18006EB28
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18006EA80 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800BE900 (--$_Destroy_range@V-$allocator@UEffectInput@@@std@@@std@@YAXPEAUEffectInput@@0AEAV-$allocator@UE.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180204BFC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Reallocate_exactly(const struct EffectInput **a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  SIZE_T v5; // rcx
  __int64 v6; // rax
  const struct EffectInput *v7; // r15
  __int64 v8; // r12
  const struct EffectInput *v9; // rdi
  EffectInput *v10; // rbx

  v4 = (a1[1] - *a1) >> 7;
  v5 = a2 << 7;
  if ( a2 > 0x1FFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = a1[1];
  v8 = v6;
  v9 = *a1;
  v10 = (EffectInput *)v6;
  while ( v9 != v7 )
  {
    EffectInput::EffectInput(v10, v9);
    v10 = (EffectInput *)((char *)v10 + 128);
    v9 = (const struct EffectInput *)((char *)v9 + 128);
  }
  std::_Destroy_range<std::allocator<EffectInput>>(v10, v10);
  return std::vector<EffectInput>::_Change_array(a1, v8, v4, a2);
}
