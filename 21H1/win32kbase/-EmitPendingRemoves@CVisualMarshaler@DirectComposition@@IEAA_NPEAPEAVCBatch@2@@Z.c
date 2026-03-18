/*
 * XREFs of ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BD5C8
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BC690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C00BD7B8 (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 */

bool __fastcall DirectComposition::CVisualMarshaler::EmitPendingRemoves(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CBatch *v2; // rax
  struct DirectComposition::CApplicationChannel *v5; // rsi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v7 = 0LL;
  v5 = (struct DirectComposition::CApplicationChannel *)*((_QWORD *)v2 + 1);
  while ( *((_QWORD *)this + 25) )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      break;
    DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(this, v5, v7);
  }
  return *((_QWORD *)this + 25) == 0LL;
}
