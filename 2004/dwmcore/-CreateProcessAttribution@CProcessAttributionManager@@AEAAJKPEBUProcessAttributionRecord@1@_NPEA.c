/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180095288
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18006622C (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180097150 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800CBC44 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800CD254 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
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
  __int64 v18; // rcx
  _OWORD *v19; // rbx
  __int64 v20; // r9
  char *v21; // rcx
  _OWORD *v23; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_DWORD *)v10 + 32) = a2;
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
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
          v13 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v14[8 * (v15 >> 1)];
          if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v13, *(_QWORD *)a3) )
          {
            v14 = (char *)(v13 + 1);
            v15 += -1 - (v15 >> 1);
          }
          else
          {
            v15 >>= 1;
          }
        }
        while ( v15 > 0 );
        v16 = *v11;
      }
      if ( v14 == *(char **)(v16 + 24) || **(_QWORD **)v14 != *(_QWORD *)a3 )
      {
        v17 = DefaultHeap::Alloc(0x70uLL);
        v19 = v17;
        if ( v17 )
          memset_0(v17, 0, 0x70uLL);
        else
          v19 = 0LL;
        v23 = v19;
        if ( !v19 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1DFu, 0LL);
          return v9;
        }
        *v19 = *(_OWORD *)a3;
        v19[1] = *((_OWORD *)a3 + 1);
        v19[2] = *((_OWORD *)a3 + 2);
        v19[3] = *((_OWORD *)a3 + 3);
        v19[4] = *((_OWORD *)a3 + 4);
        v19[5] = *((_OWORD *)a3 + 5);
        v19[6] = *((_OWORD *)a3 + 6);
        v20 = *v11;
        v21 = *(char **)(*v11 + 24);
        if ( *(char **)(*v11 + 32) == v21 )
        {
          std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
            v20 + 16,
            v14,
            &v23);
        }
        else if ( v14 == v21 )
        {
          *(_QWORD *)v21 = v19;
          *(_QWORD *)(v20 + 24) += 8LL;
        }
        else
        {
          *(_QWORD *)v21 = *((_QWORD *)v21 - 1);
          *(_QWORD *)(v20 + 24) += 8LL;
          memmove_0(v14 + 8, v14, v21 - v14 - 8);
          *(_QWORD *)v14 = v19;
        }
      }
      ++v11;
    }
  }
  return v9;
}
