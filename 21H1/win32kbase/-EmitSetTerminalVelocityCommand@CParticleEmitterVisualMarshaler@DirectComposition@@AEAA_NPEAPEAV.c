/*
 * XREFs of ?EmitSetTerminalVelocityCommand@CParticleEmitterVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DC8BC
 * Callers:
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD4B0 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitSetTerminalVelocityCommand(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 136) & 0x200000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 24;
    *(_OWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 1) = 561;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 60);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 122);
    *((_DWORD *)this + 136) &= ~0x200000u;
    return 1;
  }
  return 0;
}
