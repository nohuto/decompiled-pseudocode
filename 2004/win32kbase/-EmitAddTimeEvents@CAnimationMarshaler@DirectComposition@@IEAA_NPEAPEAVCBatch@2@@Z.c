/*
 * XREFs of ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003E510
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003E410 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00A2A94 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

bool __fastcall DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 63) < *((_DWORD *)this + 62); *((_DWORD *)this + 63) += v6 )
  {
    v5 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v8 = v5;
    if ( (unsigned __int64)v5 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v8) )
        return *((_DWORD *)this + 63) == *((_DWORD *)this + 62);
      v5 = v8;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 62) - *((_DWORD *)this + 63));
    if ( v6 >= ((unsigned __int64)v5 - 12) >> 4 )
      LODWORD(v6) = ((unsigned __int64)v5 - 12) >> 4;
    v8 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v6 + 12), &v8);
    v7 = (char *)v8;
    *(_DWORD *)v8 = 16 * v6 + 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 1;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 10);
    memmove(
      v7 + 12,
      (const void *)(*((_QWORD *)this + 30) + 16LL * *((unsigned int *)this + 63)),
      (unsigned int)(16 * v6));
  }
  return *((_DWORD *)this + 63) == *((_DWORD *)this + 62);
}
