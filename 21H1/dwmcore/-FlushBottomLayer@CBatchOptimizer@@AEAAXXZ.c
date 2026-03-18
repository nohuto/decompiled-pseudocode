/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18006AB44
 * Callers:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180014E00 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x1800563F0 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18006AA38 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18006EDF0 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x18001AA88 (-RawAddDrawListEntries@CDrawListBatchManager@@QEAAJAEBV-$span@PEAVCBaseDrawListEntry@@$0-0@gsl@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18006D36C (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18006D6E0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x18006D754 (--$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableReferenceA.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  CBatchOptimizer *v3; // rdi
  char *v4; // rbx
  char *v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rbp
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ebx
  _QWORD v27[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((int *)this + 12);
  v2 = 520 * v1;
  v3 = this;
  v4 = (char *)this + 520 * v1 + 120;
  v5 = v4;
  v6 = *((_DWORD *)this + 130 * v1 + 24);
  if ( *((_QWORD *)this + 65 * v1 + 14) )
  {
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v7 + 32);
      *(_DWORD *)(v7 + 48) += *(_DWORD *)((char *)v3 + v2 + 100);
      v5 = v4;
    }
    else
    {
      v8 = *(_DWORD *)((char *)this + v2 + 100);
      if ( v8 > 1 || (v5 = (char *)this + 520 * v1 + 120, *(_DWORD *)((char *)this + v2 + 104)) )
      {
        v5 = (char *)this + 520 * v1 + 120;
        v12 = v6 - v8;
        if ( v6 != v8 )
        {
          v22 = v12;
          v27[0] = v12;
          if ( v12 < 0 || (v27[1] = v4) == 0LL && v12 )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v23 = CDrawListBatchManager::RawAddDrawListEntries(*((_QWORD *)this + 1), (unsigned int *)v27);
          if ( v23 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
          v5 = &v4[8 * v22];
          v6 = v8;
        }
        v13 = *((_QWORD *)v3 + 1) + 80LL;
        v29 = 0LL;
        v14 = CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(v13, &v29);
        if ( v14 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
        v15 = v29;
        *(_DWORD *)(v29 + 40) = *(_DWORD *)((char *)v3 + v2 + 88);
        *(_BYTE *)(v15 + 44) = *((_BYTE *)v3 + v2 + 92);
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v15 + 32);
        *(_DWORD *)(v15 + 48) = *(_DWORD *)((char *)v3 + v2 + 100);
        *((_QWORD *)v3 + 5) = v15;
        ++*(_DWORD *)(v15 + 24);
        v16 = *((_QWORD *)v3 + 5);
        if ( v16 )
          v17 = v16 + 16;
        else
          v17 = 0LL;
        v18 = *((_QWORD *)v3 + 1);
        v30 = v17;
        v19 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet(v18, &v30, 1LL);
        v21 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA3u, 0LL);
          ModuleFailFastForHRESULT(v21, retaddr);
        }
      }
    }
    this = *(CBatchOptimizer **)((char *)v3 + v2 + 112);
    *(_QWORD *)((char *)v3 + v2 + 112) = 0LL;
    if ( this )
      (*(void (__fastcall **)(CBatchOptimizer *))(*(_QWORD *)this + 8LL))(this);
  }
  v9 = *((_QWORD *)v3 + 1);
  if ( !v5 && v6 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v6 + v10;
  if ( v6 + v10 < v10 )
  {
    v26 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v11 <= *(_DWORD *)(v9 + 20) )
    {
      memcpy_0((void *)(*(_QWORD *)v9 + 8LL * v10), v5, 8LL * v6);
      *(_DWORD *)(v9 + 24) = v11;
      goto LABEL_11;
    }
    v24 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)v3 + 1), 8LL, v6, v5);
    v26 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC0u, 0LL);
  }
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v26, 0xA3u, 0LL);
    ModuleFailFastForHRESULT((unsigned int)v26, retaddr);
  }
LABEL_11:
  *(_QWORD *)((char *)v3 + v2 + 96) = 0LL;
  if ( !*(_DWORD *)((char *)v3 + v2 + 104) )
    *((_QWORD *)v3 + 5) = 0LL;
  *(_DWORD *)((char *)v3 + v2 + 104) = 0;
}
