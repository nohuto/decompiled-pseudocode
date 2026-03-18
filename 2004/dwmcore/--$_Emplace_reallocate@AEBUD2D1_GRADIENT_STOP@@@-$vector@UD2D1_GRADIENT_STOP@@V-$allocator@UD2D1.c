/*
 * XREFs of ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x1801E782C
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1801E7CB0 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801DD7B0 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbp
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 20;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 20;
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 20 * v11;
  if ( v11 > 0xCCCCCCCCCCCCCCCLL )
    v12 = -1LL;
  v13 = (_DWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 5 * v6;
  v15 = (__int64)v13;
  *(_OWORD *)&v13[v14] = *(_OWORD *)a3;
  v13[v14 + 4] = *(_DWORD *)(a3 + 16);
  v16 = v13;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, a2 - (_BYTE *)*a1);
    v19 = (_BYTE *)a1[1] - a2;
    v18 = a2;
    v16 = (void *)(v15 + 4 * v14 + 20);
  }
  memmove_0(v16, v18, v19);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
    (__int64)a1,
    v15,
    v8,
    v11);
  return (__int64)*a1 + 4 * v14;
}
