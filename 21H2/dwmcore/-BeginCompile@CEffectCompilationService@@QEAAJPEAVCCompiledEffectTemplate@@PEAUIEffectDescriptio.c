/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800DA3D8
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800DA2A8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1800D9F9C (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x1800DA6B0 (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z @ 0x1800DA784 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@PEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800DA8A0 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x1800DA9D4 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180198EEC (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180198F8C (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  char v8; // r12
  char *v9; // rdi
  __int64 v10; // rdx
  PVOID v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edi
  __int64 *v16; // r15
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r8
  PVOID *v20; // rcx
  struct CEffectCompilationTask *v21; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // esi
  CEffectCompilationTask *v30; // rax
  CEffectCompilationTask *v31; // rax
  __int64 v32; // rcx
  PTP_WORK ThreadpoolWork; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // esi
  signed int LastError; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  const char *v41; // r15
  int (__fastcall *v42)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  char v43; // di
  int v44; // eax
  __int64 v45; // rcx
  int v46; // r9d
  __int64 v47; // rcx
  char *v48; // [rsp+40h] [rbp-30h]
  unsigned int v49; // [rsp+48h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v50; // [rsp+50h] [rbp-20h]
  _BYTE v51[24]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  PVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v54; // [rsp+C0h] [rbp+50h] BYREF
  struct CEffectCompilationTask **v55; // [rsp+C8h] [rbp+58h]

  v55 = a4;
  v4 = *(_QWORD *)a3;
  pv = 0LL;
  v50 = a3;
  v8 = 1;
  v9 = (char *)this + 112;
  v49 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  v48 = v9;
  v10 = *(_QWORD *)(std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
                      v9,
                      v51,
                      &v49,
                      v49)
                  + 8);
  if ( !v10 )
    v10 = *((_QWORD *)this + 15);
  if ( v10 == *((_QWORD *)this + 15) )
  {
    v30 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
    if ( !v30 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v31 = CEffectCompilationTask::CEffectCompilationTask(v30, this, a3);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, v31);
    v11 = pv;
    if ( !pv )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, -2147024882, 0x89u);
      return v15;
    }
    if ( CCommonRegistryData::EnableEffectCaching )
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        (__int64)this + 112,
        (__int64)v51,
        &v49,
        &pv);
    ThreadpoolWork = CreateThreadpoolWork(lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_, v11, 0LL);
    *((_QWORD *)v11 + 7) = ThreadpoolWork;
    if ( !ThreadpoolWork )
    {
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      if ( (v15 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v15, 0x90u);
LABEL_52:
        if ( !v11 )
          return v15;
        std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
          v48,
          &v49);
        goto LABEL_15;
      }
    }
    v8 = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(&pv, *(_QWORD *)(v10 + 32));
    v11 = pv;
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)pv);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v40 = *(_QWORD *)a3;
    pv = 0LL;
    v41 = "null";
    v42 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v40 + 88);
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(&pv);
    if ( v42(a3, &pv) >= 0 )
      v41 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v43 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
      v44 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
      v45 = *((_QWORD *)a2 + 6);
      if ( v45 )
        v46 = *(_DWORD *)(v45 + 76);
      else
        v46 = 0;
      McTemplateU0pdsddt_EventWriteTransfer(v45, v44, (_DWORD)v11, v46, (__int64)v41, v44, v43, v8);
    }
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(&pv);
  }
  v13 = *((_DWORD *)v11 + 10);
  pv = a2;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v15 = -2147024362;
    v29 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_39;
  }
  if ( v14 <= *((_DWORD *)v11 + 9) )
  {
    v15 = 0;
    *(_QWORD *)(*((_QWORD *)v11 + 2) + 8LL * v13) = a2;
    *((_DWORD *)v11 + 10) = v14;
    goto LABEL_9;
  }
  v27 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)v11 + 16, 8u, 1, &pv);
  v29 = v27;
  v15 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xC0u);
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v29, 0x7Eu);
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v29, 0xADu);
    goto LABEL_52;
  }
LABEL_9:
  pv = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = (__int64 *)((char *)this + 80);
  v17 = 0;
  v18 = *((unsigned int *)this + 26);
  v19 = *((_QWORD *)this + 10);
  if ( (_DWORD)v18 )
  {
    v20 = (PVOID *)*((_QWORD *)this + 10);
    while ( v11 != *v20 )
    {
      ++v17;
      ++v20;
      if ( v17 >= (unsigned int)v18 )
        goto LABEL_19;
    }
    goto LABEL_12;
  }
LABEL_19:
  v23 = (unsigned int)(v18 + 1);
  v54 = v11;
  if ( (unsigned int)v23 < (unsigned int)v18 )
  {
    v15 = -2147024362;
    v36 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_51;
  }
  if ( (unsigned int)v23 <= *((_DWORD *)this + 25) )
  {
    *(_QWORD *)(v19 + 8 * v18) = v11;
    v15 = 0;
    *((_DWORD *)this + 26) = v23;
    goto LABEL_22;
  }
  v34 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 80, 8u, 1, &v54);
  v36 = v34;
  v15 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0xC0u);
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v36, 0xB5u);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
    goto LABEL_52;
  }
LABEL_22:
  if ( *((_BYTE *)v11 + 92) )
  {
    v24 = *v16;
    v25 = *((unsigned int *)this + 19);
    v26 = *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1));
    *(_QWORD *)(v24 + 8LL * (unsigned int)(*((_DWORD *)this + 26) - 1)) = *(_QWORD *)(*v16 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v26;
    ++*((_DWORD *)this + 19);
    SetEvent(*((HANDLE *)this + 3));
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&pv);
  if ( !v8 )
    SubmitThreadpoolWork(*((PTP_WORK *)v11 + 7));
  v21 = (struct CEffectCompilationTask *)v11;
  v11 = 0LL;
  *v55 = v21;
LABEL_15:
  if ( v11 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
  return v15;
}
