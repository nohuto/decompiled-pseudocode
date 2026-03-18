/*
 * XREFs of ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x1801E6C44
 * Callers:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801E6CE8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  SIZE_T v5; // rcx
  __int64 v6; // rdi
  void *v7; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = 20 * a2;
  v6 = v3 / 20;
  if ( a2 > 0xCCCCCCCCCCCCCCCLL )
    v5 = -1LL;
  v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
           a1,
           (__int64)v7,
           v6,
           a2);
}
