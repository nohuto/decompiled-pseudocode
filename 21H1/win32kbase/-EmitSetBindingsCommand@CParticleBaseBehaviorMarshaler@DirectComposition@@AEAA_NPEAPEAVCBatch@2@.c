/*
 * XREFs of ?EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D8E48
 * Callers:
 *     ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD380 (-EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00B7600 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

bool __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetBindingsCommand(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  bool v5; // zf
  unsigned int v6; // eax
  bool v7; // bp
  void *v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int v11; // r14d
  char *v12; // rdx
  int v13; // eax
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x20) != 0 )
  {
    v5 = *((_DWORD *)this + 16) == 0;
    *((_DWORD *)this + 4) = v2 & 0xFFFFFFDF;
    v6 = *((_DWORD *)this + 17);
    v7 = v5;
    while ( v6 < *((_DWORD *)this + 16) || v7 )
    {
      v7 = 0;
      v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v15 = v8;
      if ( (unsigned __int64)v8 < 0x40 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        {
          *((_DWORD *)this + 4) |= 0x20u;
          return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
        }
        v8 = v15;
      }
      v9 = (unsigned int)(*((_DWORD *)this + 16) - *((_DWORD *)this + 17));
      v10 = ((unsigned __int64)v8 - 40) / 0x18;
      if ( v9 >= v10 )
        LODWORD(v9) = v10;
      v15 = 0LL;
      v11 = 24 * v9;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(24 * v9 + 40), &v15);
      v12 = (char *)v15;
      *(_DWORD *)v15 = 24 * v9 + 40;
      v5 = *((_DWORD *)this + 17) == 0;
      *(_OWORD *)(v12 + 4) = 0LL;
      *(_OWORD *)(v12 + 20) = 0LL;
      *((_DWORD *)v12 + 9) = 0;
      v13 = 527;
      if ( !v5 )
        v13 = 528;
      *((_DWORD *)v12 + 1) = v13;
      *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v12 + 3) = v11;
      memmove(v12 + 16, (const void *)(*((_QWORD *)this + 7) + 24LL * *((unsigned int *)this + 17)), v11);
      *((_DWORD *)this + 17) += v9;
      v6 = *((_DWORD *)this + 17);
    }
  }
  return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
}
