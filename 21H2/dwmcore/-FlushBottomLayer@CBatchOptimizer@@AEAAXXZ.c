/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18007E784
 * Callers:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180011500 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18007E65C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18007E950 (-RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBatchCommand@@$0-0@gsl@@@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800E28B4 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rax
  __int64 v2; // r14
  char *v4; // rbx
  char *v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rdi
  char *v9; // r12
  char *v10; // r12
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  CBatchCommand *v16; // rcx
  CBatchCommand *v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  CBatchCommand **v22; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v23[2]; // [rsp+28h] [rbp-18h] BYREF
  char v24; // [rsp+30h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+28h]
  CBatchCommand *v26; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((int *)this + 12);
  v2 = 520 * v1;
  v4 = (char *)this + 520 * v1 + 120;
  v5 = v4;
  v6 = *((_DWORD *)this + 130 * v1 + 24);
  v7 = *((_QWORD *)this + 65 * v1 + 14);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(*((_QWORD *)this + 5), v7);
      v9 = (char *)this + 112;
      *(_DWORD *)(v8 + 16) += *(_DWORD *)((char *)this + v2 + 100);
    }
    else
    {
      v12 = *(_DWORD *)((char *)this + v2 + 100);
      if ( v12 > 1 || *(_DWORD *)((char *)this + v2 + 104) )
      {
        v5 = (char *)this + 520 * v1 + 120;
        v13 = v6 - v12;
        if ( v6 != v12 )
        {
          v20 = (int)v13;
          v22 = (CBatchCommand **)(int)v13;
          if ( v13 == -1LL || (*(_QWORD *)v23 = v4) == 0LL )
          {
            gsl::details::terminate(this);
            __debugbreak();
          }
          v21 = CDrawListBatchManager::RawAddBatchCommands(*((_QWORD *)this + 1), &v22);
          if ( v21 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
          v5 = &v4[8 * v20];
          v6 = v12;
        }
        v14 = *((_QWORD *)this + 1);
        v22 = &v26;
        v26 = 0LL;
        *(_QWORD *)v23 = 0LL;
        v24 = 1;
        v15 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v14 + 40, v23);
        if ( v24 )
        {
          v16 = *v22;
          *v22 = *(CBatchCommand **)v23;
          if ( v16 )
            CBatchCommand::`scalar deleting destructor'(v16);
        }
        if ( v15 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
        v17 = v26;
        *((_QWORD *)v26 + 1) = 0LL;
        *((_DWORD *)v17 + 4) = *(_DWORD *)((char *)this + v2 + 88);
        v10 = (char *)this + v2 + 112;
        *((_BYTE *)v17 + 20) = *((_BYTE *)this + v2 + 92);
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((char *)v17 + 8, *(_QWORD *)v10);
        *((_DWORD *)v17 + 6) = *(_DWORD *)((char *)this + v2 + 100);
        *(_DWORD *)v17 = 3;
        v18 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 5) = (char *)v26 + 8;
        v19 = CDrawListBatchManager::AddBatchCommand(v18, &v26);
        if ( v19 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v19, retaddr);
        if ( v26 )
          CBatchCommand::`scalar deleting destructor'(v26);
        goto LABEL_5;
      }
      v9 = (char *)this + 112;
    }
    v10 = &v9[v2];
LABEL_5:
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(v10);
  }
  v22 = (CBatchCommand **)v6;
  *(_QWORD *)v23 = v5;
  if ( !v5 && v6 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  v11 = CDrawListBatchManager::RawAddBatchCommands(*((_QWORD *)this + 1), &v22);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  *(_DWORD *)((char *)this + v2 + 96) = 0;
  *(_DWORD *)((char *)this + v2 + 100) = 0;
  if ( !*(_DWORD *)((char *)this + v2 + 104) )
    *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)((char *)this + v2 + 104) = 0;
}
