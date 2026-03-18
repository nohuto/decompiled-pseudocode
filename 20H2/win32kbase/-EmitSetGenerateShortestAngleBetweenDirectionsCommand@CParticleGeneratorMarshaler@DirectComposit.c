/*
 * XREFs of ?EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D1F3C
 * Callers:
 *     ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D5460 (-EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CParticleGeneratorMarshaler::EmitSetGenerateShortestAngleBetweenDirectionsCommand(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 569;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    v3[12] = *((_BYTE *)this + 80);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
