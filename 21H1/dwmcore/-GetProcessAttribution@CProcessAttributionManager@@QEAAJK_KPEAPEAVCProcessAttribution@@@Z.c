/*
 * XREFs of ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180092860
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180091654 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180092744 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ??0Record@CProcessAttributionManager@@QEAA@K_KH@Z @ 0x180029E2C (--0Record@CProcessAttributionManager@@QEAA@K_KH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800905A0 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1800929B8 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800C61F4 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        __int64 a3,
        struct CProcessAttribution **a4)
{
  unsigned int v8; // esi
  char *v9; // rbx
  __int64 v10; // rbp
  volatile signed __int32 *v11; // rax
  CProcessAttributionManager::Record *v13; // rax
  __int64 v14; // rcx
  CProcessAttributionManager::Record *v15; // rbp
  char *v16; // rcx
  int ProcessAttribution; // eax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-48h]
  void *Src; // [rsp+30h] [rbp-38h] BYREF
  CProcessAttributionManager::Record *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v8 = 0;
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &Src,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    &v22);
  v9 = (char *)Src;
  if ( Src == *((void **)this + 1) || (v10 = *(_QWORD *)Src, **(_QWORD **)Src != a3) )
  {
    v13 = (CProcessAttributionManager::Record *)DefaultHeap::Alloc(0xA8uLL);
    if ( v13 )
      v15 = CProcessAttributionManager::Record::Record(
              v13,
              a2,
              a3,
              (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3);
    else
      v15 = 0LL;
    v21 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0xE5u, 0LL);
      return v8;
    }
    v16 = (char *)*((_QWORD *)this + 1);
    if ( *((char **)this + 2) == v16 )
    {
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        this,
        v9,
        &v21);
      v15 = v21;
    }
    else if ( v9 == v16 )
    {
      *(_QWORD *)v16 = v15;
      *((_QWORD *)this + 1) += 8LL;
    }
    else
    {
      *(_QWORD *)v16 = *((_QWORD *)v16 - 1);
      *((_QWORD *)this + 1) += 8LL;
      memmove_0(v9 + 8, v9, v16 - v9 - 8);
      *(_QWORD *)v9 = v15;
    }
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(this, a2, v15, 1, a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v15 + 14) = *a4;
      *((_DWORD *)v15 + 40) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v19 = 236;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, ProcessAttribution, v19, 0LL);
    return v8;
  }
  v11 = *(volatile signed __int32 **)(v10 + 112);
  if ( !v11 )
  {
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           this,
                           a2,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v10,
                           1,
                           a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *(_QWORD *)(v10 + 112) = *a4;
      *(_DWORD *)(v10 + 160) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v19 = 217;
    goto LABEL_22;
  }
  *a4 = (struct CProcessAttribution *)v11;
  _InterlockedIncrement(v11 + 2);
  return v8;
}
