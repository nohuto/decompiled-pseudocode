/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6724f6a5706e547093db9ce485c17012___ @ 0x1C01F1920
 * Callers:
 *     ?EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F19B0 (-EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6724f6a5706e547093db9ce485c17012___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 16;
  *(_QWORD *)(v6 + 1) = 0LL;
  v6[3] = 0;
  v6[1] = 359;
  v6[2] = *(_DWORD *)(a1 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 24);
  v6[3] = v3;
  return 1;
}
