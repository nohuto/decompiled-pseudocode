/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7e105be8d1e73d23541893f392b01252___ @ 0x1C00452F4
 * Callers:
 *     ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0045230 (-EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7e105be8d1e73d23541893f392b01252___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 60;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *(_OWORD *)(v5 + 36) = 0LL;
  *(_QWORD *)(v5 + 52) = 0LL;
  *((_DWORD *)v5 + 1) = 245;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  *(_OWORD *)(v5 + 20) = *(_OWORD *)(*(_QWORD *)a3 + 88LL);
  *(_OWORD *)(v5 + 36) = *(_OWORD *)(*(_QWORD *)a3 + 104LL);
  result = 1;
  *((_DWORD *)v5 + 13) = *(_DWORD *)(*(_QWORD *)a3 + 120LL);
  return result;
}
