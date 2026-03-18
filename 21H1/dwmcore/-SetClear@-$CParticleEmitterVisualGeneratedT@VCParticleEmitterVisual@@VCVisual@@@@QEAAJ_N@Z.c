/*
 * XREFs of ?SetClear@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x180174C7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ @ 0x18017274C (-Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetClear(_BYTE *a1, char a2)
{
  __int64 v3; // rax

  if ( a2 != a1[708] )
  {
    if ( a2 )
    {
      CParticleEmitterVisual::ParticleCollection::Clear((CParticleEmitterVisual::ParticleCollection *)(a1 + 784));
      (*(void (__fastcall **)(_BYTE *, _QWORD, _BYTE *))(*(_QWORD *)a1 + 72LL))(a1, 0LL, a1);
    }
    v3 = *(_QWORD *)a1;
    a1[708] = 0;
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
