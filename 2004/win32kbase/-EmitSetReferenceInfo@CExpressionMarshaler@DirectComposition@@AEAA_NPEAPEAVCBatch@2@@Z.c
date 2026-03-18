/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009EC78
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009EB00 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00A2A94 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  unsigned int v8; // r8d
  _OWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 55) < *((_DWORD *)this + 54); *((_DWORD *)this + 55) += v5 )
  {
    v4 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v13 = v4;
    if ( (unsigned __int64)v4 < 0x2C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v13) )
        return *((_DWORD *)this + 55) == *((_DWORD *)this + 54);
      v4 = v13;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 54) - *((_DWORD *)this + 55));
    v6 = ((unsigned __int64)v4 - 20) / 0x18;
    if ( v5 >= v6 )
      LODWORD(v5) = v6;
    v13 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(24 * v5 + 20), &v13);
    v7 = (char *)v13;
    v8 = 0;
    *(_DWORD *)v13 = 24 * v5 + 20;
    v9 = v7 + 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 149;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = v5;
    for ( *((_DWORD *)v7 + 4) = *((_DWORD *)this + 54);
          v8 < (unsigned int)v5;
          *((_QWORD *)v9 - 1) = *(_QWORD *)(v10 + 8 * v11 + 16) )
    {
      v10 = *((_QWORD *)this + 26);
      v11 = v8 + *((_DWORD *)this + 55);
      ++v8;
      v11 *= 3LL;
      *v9 = *(_OWORD *)(v10 + 8 * v11);
      v9 = (_OWORD *)((char *)v9 + 24);
    }
  }
  return *((_DWORD *)this + 55) == *((_DWORD *)this + 54);
}
