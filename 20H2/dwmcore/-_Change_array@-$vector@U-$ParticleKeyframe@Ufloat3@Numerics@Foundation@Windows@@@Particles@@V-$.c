/*
 * XREFs of ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801736F4
 * Callers:
 *     ??$_Insert_range@PEBUParticleBindingData@@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1Uforward_iterator_tag@1@@Z @ 0x1801691C8 (--$_Insert_range@PEBUParticleBindingData@@@-$vector@UParticleBindingData@@V-$allocator@UParticle.c)
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DA428 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 24LL));
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
