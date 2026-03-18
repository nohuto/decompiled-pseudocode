/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___ @ 0x1C01DCE74
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DD160 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_fd9f27ac547b09c22332b2e0da28dd0d_::operator() @ 0x1C01DCEEC (_lambda_fd9f27ac547b09c22332b2e0da28dd0d_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd9f27ac547b09c22332b2e0da28dd0d___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 160;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  lambda_fd9f27ac547b09c22332b2e0da28dd0d_::operator()(a3);
  return 1;
}
