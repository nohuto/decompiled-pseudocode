/*
 * XREFs of ?SetMaxParticleInstances@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x1801757A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x18017358C (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetMaxParticleInstances(
        CParticleEmitterVisual *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 164) )
  {
    *((_DWORD *)a1 + 164) = a2;
    CParticleEmitterVisual::InitializeParticleLists(a1);
    (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
