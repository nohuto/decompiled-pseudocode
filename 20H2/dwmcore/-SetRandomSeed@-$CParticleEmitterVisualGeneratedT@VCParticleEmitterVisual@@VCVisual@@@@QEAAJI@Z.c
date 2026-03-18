/*
 * XREFs of ?SetRandomSeed@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x180172BF0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x18016F904 (-OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetRandomSeed(
        CParticleEmitterVisual *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 157) )
  {
    *((_DWORD *)a1 + 157) = a2;
    CParticleEmitterVisual::OnRandomSeedChanged(a1);
  }
  return 0LL;
}
