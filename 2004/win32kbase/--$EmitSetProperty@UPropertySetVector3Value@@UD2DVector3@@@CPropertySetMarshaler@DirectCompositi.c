/*
 * XREFs of ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0002B28
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A01C8 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00A2A94 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector3Value,D2DVector3>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  char v6; // bl
  char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  v6 = 1;
  if ( (unsigned __int64)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL)) < 0x28
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v11) )
  {
    return 0;
  }
  v11 = 0LL;
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x28uLL, &v11);
  v7 = (char *)v11;
  *(_DWORD *)v11 = 40;
  *(_OWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 20) = 0LL;
  *((_DWORD *)v7 + 1) = 326;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v7 + 3) = v4;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v4 + 4) & 0x1FFFFFFF;
  *((_DWORD *)v7 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v4);
  v7[24] = (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v4 + 4) & 0xE0000000) == 0x20000000;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v4 + 4) & 0x1FFFFFFF;
  *(_QWORD *)(v7 + 28) = *(_QWORD *)(v9 + v8);
  *((_DWORD *)v7 + 9) = *(_DWORD *)(v9 + v8 + 8);
  *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v4 + 4) &= 0x1FFFFFFFu;
  return v6;
}
