/*
 * XREFs of ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x18022CFE8
 * Callers:
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18022D114 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        __int64 a1,
        struct CComposition *a2)
{
  __int64 result; // rax

  CVisual::CVisual((CVisual *)a1, a2);
  *(_DWORD *)(a1 + 732) = 1015580809;
  *(_DWORD *)(a1 + 772) = 1065353216;
  *(_DWORD *)(a1 + 776) = 1065353216;
  *(_DWORD *)(a1 + 780) = 1065353216;
  *(_QWORD *)(a1 + 784) = 1065353216LL;
  *(_DWORD *)(a1 + 808) = 1148846080;
  *(_DWORD *)(a1 + 812) = 1148846080;
  *(_DWORD *)(a1 + 816) = 1148846080;
  result = a1;
  *(_DWORD *)(a1 + 768) = 10000;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  return result;
}
