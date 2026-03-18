/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___ @ 0x1C01EDBA4
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EDDC0 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator() @ 0x1C01EDD58 (_lambda_ac1c59748b96fb69b3ab1183eeae36ef_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 44;
  *(_OWORD *)v5 = 0LL;
  *((_OWORD *)v5 + 1) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *(_DWORD *)v5 = 269;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 24);
  lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator()(a3);
  return 1;
}
