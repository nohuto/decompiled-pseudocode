/*
 * XREFs of ?SetMaxParticleInstances@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x1801A32D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801A0BF8 (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetMaxParticleInstances(
        CParticleEmitterVisual *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 192) )
  {
    *((_DWORD *)a1 + 192) = a2;
    CParticleEmitterVisual::InitializeParticleLists(a1);
    (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
