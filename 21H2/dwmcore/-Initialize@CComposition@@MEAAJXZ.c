/*
 * XREFs of ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800F21F8 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@1@@Z @ 0x1800167B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManage.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800279B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002BCB4 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x18002C6B8 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x18002D868 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x18002E080 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x18002E190 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18002ECD0 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002ED20 (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002EDE8 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002EF3C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F0AC (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F3E4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002FB58 (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800305E4 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x1800308A0 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180030C98 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z @ 0x1800F70F4 (--0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800F7D98 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800F8888 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180177F9C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1CSuperWetInkManager@@QEAA@XZ @ 0x180192A5C (--1CSuperWetInkManager@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180193738 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x1801993B4 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComposition::Initialize(CComposition *this)
{
  wil::details *v2; // rcx
  wil::details *Event; // rbx
  CDisplayManager *v4; // rcx
  int LastErrorFailHr; // eax
  int v6; // edi
  CRenderTargetManager *v7; // rax
  CRenderTargetManager *v8; // rax
  CInputManager *v9; // rax
  CInputManager *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  CGlobalManipulationManager *v13; // rax
  CGlobalManipulationManager *v14; // rax
  unsigned int v15; // ecx
  CManipulationManager *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  CPreComputeContext *v19; // rax
  CPreComputeContext *v20; // rbx
  CPreComputeContext *v21; // rax
  void **v22; // rbx
  struct IMessageSession *v23; // r14
  __int64 v24; // rcx
  Microsoft::Bamo::BaseBamoConnection *v25; // rcx
  _QWORD *v26; // rax
  CSuperWetInkManager *v27; // rbx
  __int64 *v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rdi
  CSceneResourceManager *v32; // rbx
  CColorBrush *v33; // rax
  CColorBrush *v34; // rax
  CColorBrush *v35; // rax
  CColorBrush *v36; // rax
  int v38; // r9d
  unsigned int v39; // [rsp+20h] [rbp-40h]
  void *v40; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+38h] [rbp-28h] BYREF
  char v42; // [rsp+48h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  *(_QWORD *)&v41.r = 0LL;
  v40 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 158,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    v6 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v39 = 252;
LABEL_73:
      v38 = LastErrorFailHr;
      goto LABEL_74;
    }
  }
  CDisplayManager::Initialize(v4);
  LastErrorFailHr = CThreadContext::InitializeObjectCaches();
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 259;
    goto LABEL_73;
  }
  v7 = (CRenderTargetManager *)operator new(0x248uLL);
  if ( v7 )
    v8 = CRenderTargetManager::CRenderTargetManager(v7, this);
  else
    v8 = 0LL;
  *((_QWORD *)this + 27) = v8;
  LastErrorFailHr = CGlobalSurfaceManager::Create((void **)&v41, &v40, (struct CSurfaceManager **)this + 28);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 267;
    goto LABEL_73;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 82) + 104LL))(
    *((_QWORD *)this + 82),
    *(_QWORD *)&v41.r,
    v40);
  LastErrorFailHr = CExpressionManager::Create((struct CExpressionManager **)this + 53);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 273;
    goto LABEL_73;
  }
  v9 = (CInputManager *)DefaultHeap::AllocClear(0x150uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CInputManager::CInputManager(v9, this);
  *((_QWORD *)v10 + 41) = 0LL;
  *(_QWORD *)v10 = &CGlobalInputManager::`vftable';
  CMILRefCountImpl::AddReference((CInputManager *)((char *)v10 + 8));
  v11 = CGlobalInputManager::Initialize((struct CComposition **)v10);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x21u, 0LL);
    CMILRefCountBaseT<IUnknown>::InternalRelease(v10);
    v39 = 276;
    goto LABEL_60;
  }
  *((_QWORD *)this + 29) = v10;
  v13 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x1A8uLL);
  if ( !v13 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v14 = CGlobalManipulationManager::CGlobalManipulationManager(v13, this);
  v16 = v14;
  if ( !v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x20u, 0LL);
    v6 = -2147024882;
LABEL_69:
    v39 = 279;
    goto LABEL_60;
  }
  CMILRefCountImpl::AddReference((CGlobalManipulationManager *)((char *)v14 + 8));
  v17 = CManipulationManager::Initialize(v16);
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x23u, 0LL);
    CMILRefCountBaseT<IUnknown>::InternalRelease(v16);
    goto LABEL_69;
  }
  *((_QWORD *)this + 30) = v16;
  v19 = (CPreComputeContext *)operator new(0x798uLL);
  v20 = v19;
  if ( v19 )
  {
    memset_0(v19, 0, 0x798uLL);
    v21 = CPreComputeContext::CPreComputeContext(v20);
  }
  else
  {
    v21 = 0LL;
  }
  v22 = (void **)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = v21;
  if ( v22 )
  {
    CPreComputeContext::~CPreComputeContext(v22);
    operator delete(v22, 0x798uLL);
  }
  *(_QWORD *)&v41.r = 0LL;
  v6 = CHolographicManager::Create(this, (struct CHolographicManager **)&v41);
  *((_QWORD *)this + 33) = *(_QWORD *)&v41.r;
  if ( v6 < 0 )
  {
    v39 = 285;
    goto LABEL_60;
  }
  v23 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 112LL))(*((_QWORD *)this + 82));
  LastErrorFailHr = CMessageConversationHost::Create(v23, (struct CMessageConversationHost **)this + 155);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 289;
    goto LABEL_73;
  }
  v24 = *((_QWORD *)this + 157);
  if ( v24 )
  {
    *((_QWORD *)this + 157) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v24);
  }
  LastErrorFailHr = DataProviderManager::Create(v23, (struct DataProviderManager **)this + 157);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 291;
    goto LABEL_73;
  }
  v25 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v25 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v25);
  }
  LastErrorFailHr = DiagnosticCallbacksManager::Create(v23, (struct DiagnosticCallbacksManager **)this + 156);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 293;
    goto LABEL_73;
  }
  LastErrorFailHr = CEffectCompilationService::Create(v23, (struct CEffectCompilationService **)this + 31);
  v6 = LastErrorFailHr;
  if ( LastErrorFailHr < 0 )
  {
    v39 = 296;
    goto LABEL_73;
  }
  v26 = operator new(0x60uLL);
  if ( v26 )
  {
    *v26 = this;
    v26[1] = 0LL;
    v26[2] = 0LL;
    v26[3] = 0LL;
    v26[4] = 0LL;
    v26[5] = 0LL;
    v26[6] = 0LL;
    v26[7] = 0LL;
    v26[8] = 0LL;
    v26[9] = 0LL;
    v26[10] = 0LL;
    v26[11] = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  v27 = (CSuperWetInkManager *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = v26;
  if ( v27 )
  {
    CSuperWetInkManager::~CSuperWetInkManager(v27);
    operator delete(v27, 0x60uLL);
  }
  v28 = (__int64 *)operator new(0x10uLL);
  v29 = v28;
  if ( v28 )
  {
    *v28 = 0LL;
    v28[1] = 0LL;
    v30 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    *(_QWORD *)v30 = v30;
    *(_QWORD *)(v30 + 8) = v30;
    *(_QWORD *)(v30 + 16) = v30;
    *(_WORD *)(v30 + 24) = 257;
    *v29 = v30;
  }
  else
  {
    v29 = 0LL;
  }
  v31 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v29;
  if ( v31 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>(
      (__int64)v31,
      (__int64)v31,
      *(__int64 **)(*v31 + 8LL));
    std::_Deallocate<16,0>(*v31, 56LL);
    operator delete(v31, 0x10uLL);
  }
  *(_QWORD *)&v41.b = 0LL;
  *(_QWORD *)&v41.r = (char *)this + 288;
  v42 = 1;
  v6 = CSceneResourceManager::Create(this, (struct CSceneResourceManager **)&v41.b);
  if ( v42 )
  {
    v32 = **(CSceneResourceManager ***)&v41.r;
    **(_QWORD **)&v41.r = *(_QWORD *)&v41.b;
    if ( v32 )
    {
      CSceneResourceManager::~CSceneResourceManager(v32);
      DefaultHeap::Free(v32);
    }
  }
  if ( v6 < 0 )
  {
    v39 = 304;
    goto LABEL_60;
  }
  v33 = (CColorBrush *)DefaultHeap::AllocClear(0x90uLL);
  if ( v33 )
  {
    *(struct _D3DCOLORVALUE *)&v41.r = (struct _D3DCOLORVALUE)_xmm;
    v34 = CColorBrush::CColorBrush(v33, this, &v41);
  }
  else
  {
    v34 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((char *)this + 320, v34);
  if ( !*((_QWORD *)this + 40) )
  {
    v39 = 309;
LABEL_58:
    v6 = -2147024882;
LABEL_60:
    v38 = v6;
LABEL_74:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v38, v39, 0LL);
    return (unsigned int)v6;
  }
  v35 = (CColorBrush *)DefaultHeap::AllocClear(0x90uLL);
  if ( v35 )
  {
    *(struct _D3DCOLORVALUE *)&v41.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    v36 = CColorBrush::CColorBrush(v35, this, &v41);
  }
  else
  {
    v36 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((char *)this + 328, v36);
  if ( !*((_QWORD *)this + 41) )
  {
    v39 = 312;
    goto LABEL_58;
  }
  *(_OWORD *)((char *)this + 1144) = _xmm;
  *(_OWORD *)((char *)this + 1160) = _xmm;
  *(_OWORD *)((char *)this + 1176) = _xmm;
  *(_OWORD *)((char *)this + 1192) = _xmm;
  return (unsigned int)v6;
}
