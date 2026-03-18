/*
 * XREFs of ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18007FB64 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180011544 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18007E950 (-RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBatchCommand@@$0-0@gsl@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008044C (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::Flush(CBatchOptimizer *this)
{
  int i; // eax
  __int64 v3; // rcx
  char *v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r12d
  char *v7; // r15
  __int64 v8; // r14
  unsigned int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  CBatchCommand *v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned int v20; // r14d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // r15
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rcx
  _QWORD v32[2]; // [rsp+30h] [rbp-68h] BYREF
  CBatchCommand **v33; // [rsp+40h] [rbp-58h]
  unsigned int v34[2]; // [rsp+48h] [rbp-50h] BYREF
  char v35; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+10h] BYREF

  while ( *((_BYTE *)this + 4240) )
  {
    if ( *((_DWORD *)this + 8) <= 1u )
      break;
    CBatchOptimizer::TryMergeOneLayer(this);
  }
  for ( i = *((_DWORD *)this + 8); i; i = *((_DWORD *)this + 8) )
  {
    v3 = *((int *)this + i + 11);
    if ( *((_DWORD *)this + 130 * v3 + 25) )
    {
      while ( 1 )
      {
        v4 = (char *)this + 520 * *((int *)this + 12);
        v5 = *((_QWORD *)v4 + 14);
        v6 = *((_DWORD *)v4 + 24);
        v7 = v4 + 120;
        if ( v5 )
        {
          v8 = *((_QWORD *)this + 5);
          if ( v8 )
          {
            wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(*((_QWORD *)this + 5), v5);
            *(_DWORD *)(v8 + 16) += *((_DWORD *)v4 + 25);
          }
          else
          {
            v9 = *((_DWORD *)v4 + 25);
            if ( v9 > 1 || *((_DWORD *)v4 + 26) )
            {
              v7 = v4 + 120;
              v10 = v6 - v9;
              if ( v6 != v9 )
              {
                v26 = (int)v10;
                v32[0] = (int)v10;
                if ( v10 == -1LL || (v32[1] = v4 + 120, v4 == (char *)-120LL) )
                {
                  ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                  __debugbreak();
                }
                v27 = CDrawListBatchManager::RawAddBatchCommands(*((_QWORD *)this + 1), (unsigned int *)v32);
                if ( v27 < 0 )
                  ModuleFailFastForHRESULT((unsigned int)v27, retaddr);
                v7 = &v4[8 * v26 + 120];
                v6 = v9;
              }
              v11 = *((_QWORD *)this + 1) + 40LL;
              v37 = 0LL;
              v33 = (CBatchCommand **)&v37;
              *(_QWORD *)v34 = 0LL;
              v35 = 1;
              v12 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v11, v34);
              if ( v35 )
              {
                v13 = *v33;
                *v33 = *(CBatchCommand **)v34;
                if ( v13 )
                  CBatchCommand::`scalar deleting destructor'(v13);
              }
              if ( v12 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
              v14 = v37;
              *(_QWORD *)(v37 + 8) = 0LL;
              *(_DWORD *)(v14 + 16) = *((_DWORD *)v4 + 22);
              *(_BYTE *)(v14 + 20) = v4[92];
              wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v14 + 8, *((_QWORD *)v4 + 14));
              *(_DWORD *)(v14 + 24) = *((_DWORD *)v4 + 25);
              *(_DWORD *)v14 = 3;
              v38 = v37;
              *((_QWORD *)this + 5) = v37 + 8;
              v15 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(*((_QWORD *)this + 1), &v38, 1LL);
              v17 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x91u);
                ModuleFailFastForHRESULT(v17, retaddr);
              }
              v37 = 0LL;
            }
          }
          v3 = *((_QWORD *)v4 + 14);
          *((_QWORD *)v4 + 14) = 0LL;
          if ( v3 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        }
        v18 = *((_QWORD *)this + 1);
        if ( !v7 && v6 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v19 = *(_DWORD *)(v18 + 24);
        v20 = v19 + v6;
        if ( v19 + v6 < v19 )
          break;
        if ( v20 > *(_DWORD *)(v18 + 20) )
        {
          v28 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)this + 1), 8LL, v6, v7);
          v30 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0xC0u);
            goto LABEL_49;
          }
        }
        else
        {
          memcpy_0((void *)(*(_QWORD *)v18 + 8LL * v19), v7, 8LL * v6);
          *(_DWORD *)(v18 + 24) = v20;
        }
        *((_QWORD *)v4 + 12) = 0LL;
        if ( !*((_DWORD *)v4 + 26) )
          *((_QWORD *)this + 5) = 0LL;
        *((_DWORD *)v4 + 26) = 0;
        v21 = 0LL;
        v22 = *((_DWORD *)this + 8);
        v3 = (unsigned int)(v22 - 1);
        if ( v22 != 1 )
        {
          v24 = *((_DWORD *)this + 12);
          v25 = (int)v3;
          v3 = (__int64)this + 48;
          do
          {
            ++v21;
            *(_DWORD *)v3 = *(_DWORD *)(v3 + 4);
            v3 += 4LL;
          }
          while ( v21 != v25 );
          *((_DWORD *)this + v25 + 12) = v24;
          v22 = *((_DWORD *)this + 8);
        }
        v23 = v22 - 1;
        *((_DWORD *)this + 8) = v23;
        if ( !v23 )
          goto LABEL_24;
      }
      v30 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0xA2u);
      ModuleFailFastForHRESULT(v30, retaddr);
    }
    CBatchOptimizer::DiscardEmptyLayers(this, i - 1, 1u);
  }
LABEL_24:
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  *((_BYTE *)this + 4240) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 1;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 15) = 3;
  *((_DWORD *)this + 16) = 4;
  *((_DWORD *)this + 17) = 5;
  *((_DWORD *)this + 18) = 6;
  *((_DWORD *)this + 19) = 7;
}
