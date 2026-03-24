/*
 * XREFs of ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007A1E4
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800784A0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A148 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x180012090 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x1800131FC (--$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableRef.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801AAABC (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::SetLightingCollection(
        CDrawListEntryBatch *this,
        struct CHwLightCollectionBuffer *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  struct CStateSettingDrawListEntry *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r8
  CBatchOptimizer *v12; // rcx
  CDrawListEntry *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CDrawListEntry *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((struct CHwLightCollectionBuffer **)this + 5) )
  {
    ++dword_18034727C;
    v6 = *((_QWORD *)this + 3);
    v16 = 0LL;
    v7 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v6 + 64, &v16);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC6u, 0LL);
      v13 = v16;
      if ( !v16 )
        return v2;
      goto LABEL_13;
    }
    v9 = v16;
    v10 = *((_QWORD *)v16 + 4);
    *((_QWORD *)v16 + 4) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *))a2)(a2);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *((_QWORD *)this + 3);
    v12 = *(CBatchOptimizer **)(v11 + 200);
    if ( v12 )
    {
      CBatchOptimizer::AddStateSettingDrawListEntry(v12, v9);
    }
    else
    {
      v14 = CDrawListBatchManager::BatchDrawListEntry(
              (CDrawListBatchManager *)(v11 + 24),
              (struct CBaseDrawListEntry *)(((unsigned __int64)v9 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64)));
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD0u, 0LL);
        goto LABEL_11;
      }
    }
    *((_QWORD *)this + 5) = a2;
LABEL_11:
    if ( !v9 )
      return v2;
    v13 = v9;
LABEL_13:
    CDrawListEntry::Release(v13);
  }
  return v2;
}
