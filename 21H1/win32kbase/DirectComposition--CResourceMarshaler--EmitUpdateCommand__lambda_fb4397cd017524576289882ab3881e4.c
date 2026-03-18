/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4f___ @ 0x1C01F8034
 * Callers:
 *     ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F80D0 (-EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_fb4397cd017524576289882ab3881e4f_::operator() @ 0x1C01F80A4 (_lambda_fb4397cd017524576289882ab3881e4f_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4f___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)v5 = 357;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 24);
  lambda_fb4397cd017524576289882ab3881e4f_::operator()(a3);
  return 1;
}
