/*
 * XREFs of ?SetEmitterTime@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z @ 0x1801A2C78
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801A199C (-OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterTime(
        float *a1,
        float a2)
{
  if ( a2 != a1[182] )
  {
    a1[182] = a2;
    CParticleEmitterVisual::OnEmitterTimeChanged((CParticleEmitterVisual *)a1);
  }
  return 0LL;
}
