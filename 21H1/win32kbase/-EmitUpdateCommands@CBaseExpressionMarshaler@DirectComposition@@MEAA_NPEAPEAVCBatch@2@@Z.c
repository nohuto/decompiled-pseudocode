/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB2D0
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7B60 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BAEB0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01ED070 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F46A0 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F5120 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00B7600 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB3E0 (-EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB468 (-EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB4E4 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  unsigned int v5; // r14d
  char v6; // r15
  __int64 v7; // r13
  char *v9; // rcx
  char *v10; // rcx
  void *v11; // rdx
  unsigned __int64 v12; // r12
  char *v13; // rcx
  unsigned int v14; // edx
  _DWORD *v15; // r8
  __int64 v16; // rax
  void *v17; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x20) != 0 )
  {
    v17 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v17) )
      return 0;
    v9 = (char *)v17;
    *(_DWORD *)v17 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 277;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 || (*((_BYTE *)this + 120) & 0x20) == 0 )
    goto LABEL_4;
  v17 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v17) )
    return 0;
  v10 = (char *)v17;
  *(_DWORD *)v17 = 12;
  *(_QWORD *)(v10 + 4) = 0LL;
  *((_DWORD *)v10 + 1) = 25;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)this + 4) |= 0x400u;
LABEL_4:
  if ( !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTracingCookie(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(this, a2) )
  {
    return 0;
  }
  v5 = *((_DWORD *)this + 29);
  v6 = 1;
  v7 = *((_QWORD *)this + 13);
  while ( *((_DWORD *)this + 28) < v5 )
  {
    v11 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v17 = v11;
    if ( (unsigned __int64)v11 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(
              (struct DirectComposition::CBatch ***)a2,
              (unsigned __int64 *)&v17) )
        break;
      v11 = v17;
    }
    v12 = v5 - *((_DWORD *)this + 28);
    if ( v12 >= ((unsigned __int64)v11 - 16) >> 2 )
      LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 2;
    v17 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 16), &v17);
    v13 = (char *)v17;
    v14 = 0;
    *(_DWORD *)v17 = 4 * v12 + 16;
    v15 = v13 + 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 23;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v13 + 3) = v12; v14 < (unsigned int)v12; ++v15 )
    {
      v16 = v14 + *((_DWORD *)this + 28);
      ++v14;
      *v15 = *(_DWORD *)(*(_QWORD *)(v7 + 8 * v16) + 24LL);
    }
    *((_DWORD *)this + 28) += v12;
  }
  if ( *((_DWORD *)this + 28) != v5 )
    return 0;
  return v6;
}
