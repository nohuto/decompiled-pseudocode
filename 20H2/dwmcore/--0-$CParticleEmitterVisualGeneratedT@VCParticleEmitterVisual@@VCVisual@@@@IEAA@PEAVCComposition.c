/*
 * XREFs of ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x1801DD4F0
 * Callers:
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801DD620 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800ABA84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        __int64 a1,
        struct CComposition *a2)
{
  __int64 result; // rax

  CVisual::CVisual((CVisual *)a1, a2);
  *(_DWORD *)(a1 + 620) = 1015580809;
  *(_DWORD *)(a1 + 660) = 1065353216;
  *(_DWORD *)(a1 + 664) = 1065353216;
  *(_DWORD *)(a1 + 668) = 1065353216;
  *(_QWORD *)(a1 + 672) = 1065353216LL;
  *(_DWORD *)(a1 + 696) = 1148846080;
  *(_DWORD *)(a1 + 700) = 1148846080;
  *(_DWORD *)(a1 + 704) = 1148846080;
  result = a1;
  *(_DWORD *)(a1 + 656) = 10000;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_DWORD *)(a1 + 688) = 0;
  *(_BYTE *)(a1 + 708) = 0;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_QWORD *)(a1 + 776) = 0LL;
  return result;
}
