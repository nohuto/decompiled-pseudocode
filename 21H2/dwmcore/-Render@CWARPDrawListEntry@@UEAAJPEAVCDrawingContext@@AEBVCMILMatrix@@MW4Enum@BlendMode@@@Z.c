/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801E8360
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801E85B0 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??0CRenderingBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1801F131C (--0CRenderingBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180279458 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int updated; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  CBatchCommand *v18; // [rsp+38h] [rbp-28h] BYREF
  char v19; // [rsp+40h] [rbp-20h]
  CBatchCommand *v20; // [rsp+80h] [rbp+20h]

  v20 = 0LL;
  updated = CWARPDrawListEntry::UpdateBitmaps((CWARPDrawListEntry *)(a1 + 16), (struct CDrawingContext *)a2);
  v9 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, updated, 0x87u);
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(a2 + 40);
  v18 = 0LL;
  v19 = 1;
  v9 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v10 + 64, &v18);
  if ( v19 )
  {
    v11 = 0LL;
    v20 = v18;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v9, 0x8Bu);
    goto LABEL_23;
  }
  CRenderingBatchCommand::CRenderingBatchCommand((char *)v20 + 8, a1, a5);
  *(_DWORD *)v20 = 1;
  v12 = a1[12];
  if ( (v12 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 7967) = 1;
    v12 = a1[12];
  }
  if ( (v12 & 0x200) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 300);
    v14 = 0;
    if ( v13 == 1 )
    {
      v14 = 1;
      goto LABEL_18;
    }
    if ( v13 > 1 )
    {
      if ( v13 <= 3 )
      {
        v14 = 2;
        goto LABEL_18;
      }
      switch ( v13 )
      {
        case 4:
          goto LABEL_14;
        case 5:
          v14 = 4;
          break;
        case 6:
LABEL_14:
          v14 = 3;
          break;
      }
    }
LABEL_18:
    a1[46] = v14;
    a1[66] = v14;
  }
  v15 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v10 + 16));
  v9 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xA1u);
LABEL_23:
  if ( v20 )
    CBatchCommand::`scalar deleting destructor'(v20);
  return (unsigned int)v9;
}
