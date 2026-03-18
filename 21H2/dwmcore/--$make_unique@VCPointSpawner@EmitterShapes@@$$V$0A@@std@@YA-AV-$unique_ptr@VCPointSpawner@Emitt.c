/*
 * XREFs of ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x18022CEB0
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<EmitterShapes::CPointSpawner,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &EmitterShapes::CPointSpawner::`vftable';
  *a1 = v2;
  return a1;
}
