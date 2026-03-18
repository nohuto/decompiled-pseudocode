/*
 * XREFs of ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x1801DB9B0
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DA5DC (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 *     ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180204BB4 (--$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@-$vector@UAreaTriangle@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 28 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 28LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 28 * a3;
  result = a2 + 28 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
