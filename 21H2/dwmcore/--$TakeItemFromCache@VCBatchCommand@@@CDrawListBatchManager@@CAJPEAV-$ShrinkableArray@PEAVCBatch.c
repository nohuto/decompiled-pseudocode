/*
 * XREFs of ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007E784 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x1800B27A0 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801E8360 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v6; // rdx
  unsigned int v7; // eax
  CBatchCommand *v9; // rax
  __int64 v10; // rcx
  CBatchCommand *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  CBatchCommand *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( !v4 )
  {
    v9 = (CBatchCommand *)DefaultHeap::Alloc(0x68uLL);
    v11 = v9;
    if ( !v9 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024882, 0x16Du);
      return v3;
    }
    *(_DWORD *)v9 = 0;
    v14 = v9;
    v12 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v14, 1LL);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x16Fu);
      CBatchCommand::`scalar deleting destructor'(v11);
      return v3;
    }
    v4 = *(_DWORD *)(a1 + 24);
  }
  v6 = (unsigned int)(v4 - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  if ( v7 >= (unsigned int)v6 )
    v7 = v6;
  *(_DWORD *)(a1 + 32) = v7;
  return v3;
}
