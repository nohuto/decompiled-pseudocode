/*
 * XREFs of ??$insert@PEBUParticleBindingData@@X@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1@Z @ 0x18016B46C
 * Callers:
 *     ?SetOrAppendBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801734BC (-SetOrAppendBindings@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeR.c)
 * Callees:
 *     ??$_Insert_range@PEBUParticleBindingData@@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1Uforward_iterator_tag@1@@Z @ 0x18016AFA4 (--$_Insert_range@PEBUParticleBindingData@@@-$vector@UParticleBindingData@@V-$allocator@UParticle.c)
 */

_QWORD *__fastcall std::vector<ParticleBindingData>::insert<ParticleBindingData const *,void>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v7; // rbx
  _QWORD *result; // rax

  v7 = (__int64)&a3[-*a1] / 24;
  std::vector<ParticleBindingData>::_Insert_range<ParticleBindingData const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 24 * v7;
  return result;
}
