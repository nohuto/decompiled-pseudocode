/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180064BA8
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180061EA8 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x180080C30 (-GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800E6120 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800E79AC (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // ebp
  char *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // r13
  const struct CProcessAttributionManager::ProcessAttributionRecord **v13; // r12
  char *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  _OWORD *v17; // rax
  unsigned int v18; // ecx
  _OWORD *v19; // rbx
  __int128 v20; // xmm0
  __int64 v21; // r9
  char *v22; // rcx
  _OWORD *v24; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v10 + 32) = a2;
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 8));
  if ( a4 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 3);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    while ( v11 != v12 )
    {
      v16 = *v11;
      v14 = *(char **)(*v11 + 16);
      v15 = (__int64)(*(_QWORD *)(*v11 + 24) - (_QWORD)v14) >> 3;
      if ( v15 > 0 )
      {
        do
        {
          v13 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v14[8
                                                                                         * ((unsigned __int64)v15 >> 1)];
          if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v13, *(_QWORD *)a3) )
          {
            v14 = (char *)(v13 + 1);
            v15 += -1LL - ((unsigned __int64)v15 >> 1);
          }
          else
          {
            v15 = (unsigned __int64)v15 >> 1;
          }
        }
        while ( v15 > 0 );
        v16 = *v11;
      }
      if ( v14 == *(char **)(v16 + 24) || **(_QWORD **)v14 != *(_QWORD *)a3 )
      {
        v17 = DefaultHeap::Alloc(0x70uLL);
        v19 = v17;
        if ( !v17 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1DFu, 0LL);
          return v9;
        }
        memset_0(v17, 0, 0x70uLL);
        v20 = *(_OWORD *)a3;
        v24 = v19;
        *v19 = v20;
        v19[1] = *((_OWORD *)a3 + 1);
        v19[2] = *((_OWORD *)a3 + 2);
        v19[3] = *((_OWORD *)a3 + 3);
        v19[4] = *((_OWORD *)a3 + 4);
        v19[5] = *((_OWORD *)a3 + 5);
        v19[6] = *((_OWORD *)a3 + 6);
        v21 = *v11;
        v22 = *(char **)(*v11 + 24);
        if ( v22 == *(char **)(*v11 + 32) )
        {
          std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
            v21 + 16,
            v14,
            &v24);
        }
        else if ( v14 == v22 )
        {
          *(_QWORD *)v22 = v19;
          *(_QWORD *)(v21 + 24) += 8LL;
        }
        else
        {
          *(_QWORD *)v22 = *((_QWORD *)v22 - 1);
          *(_QWORD *)(v21 + 24) += 8LL;
          memmove_0(v14 + 8, v14, v22 - v14 - 8);
          *(_QWORD *)v14 = v19;
        }
      }
      ++v11;
    }
  }
  return v9;
}
