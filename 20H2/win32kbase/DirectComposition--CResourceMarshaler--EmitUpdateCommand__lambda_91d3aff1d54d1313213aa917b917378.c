/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91d3aff1d54d1313213aa917b9173782___ @ 0x1C00B318C
 * Callers:
 *     ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2FA0 (-EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91d3aff1d54d1313213aa917b9173782___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 52;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *(_OWORD *)(v5 + 36) = 0LL;
  *((_DWORD *)v5 + 1) = 242;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 64LL);
  *(_QWORD *)(v5 + 28) = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  *((_DWORD *)v5 + 9) = *(_DWORD *)(*(_QWORD *)a3 + 80LL);
  *((_DWORD *)v5 + 10) = *(_DWORD *)(*(_QWORD *)a3 + 84LL);
  result = 1;
  *((_DWORD *)v5 + 11) = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  return result;
}
