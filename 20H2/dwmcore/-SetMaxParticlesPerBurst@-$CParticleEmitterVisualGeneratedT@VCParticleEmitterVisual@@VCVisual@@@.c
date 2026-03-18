/*
 * XREFs of ?SetMaxParticlesPerBurst@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z @ 0x180170F00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetMaxParticlesPerBurst(
        float *a1,
        float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[163] )
  {
    v2 = *(_QWORD *)a1;
    a1[163] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
