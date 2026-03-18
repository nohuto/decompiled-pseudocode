/*
 * XREFs of ?Initialize@CComposition@@MEAAJXZ @ 0x18002E2F0
 * Callers:
 *     ?Initialize@CGlobalComposition@@EEAAJXZ @ 0x1800D9850 (-Initialize@CGlobalComposition@@EEAAJXZ.c)
 * Callees:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002DAE8 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002DEC4 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002E0E0 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18002E694 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002E6DC (--0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x18002EA24 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInputManager@@QEAAJXZ @ 0x18002EAF8 (-Initialize@CInputManager@@QEAAJXZ.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x18002EDE4 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x18002F4E8 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002F7F8 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800302BC (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180030420 (-Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180030490 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800306E8 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003BA60 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800DA36C (-Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800DB368 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCSuperWetInkManager@@QEAAPEAXI@Z @ 0x180154EEC (--_GCSuperWetInkManager@@QEAAPEAXI@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1801557C0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180167F40 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComposition::Initialize(struct CRenderTargetManager **this)
{
  int updated; // eax
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  CInputManager *v7; // rax
  CMILCOMBase *v8; // rbx
  int v9; // eax
  CGlobalManipulationManager *v10; // rax
  CMILCOMBase *v11; // rax
  unsigned int v12; // ecx
  CManipulationManager *v13; // rbx
  int v14; // eax
  struct IMessageSession *v15; // r14
  CRenderTargetBitmap *v16; // rcx
  Microsoft::Bamo::BaseBamoConnection *v17; // rcx
  struct CRenderTargetManager ***v18; // rax
  unsigned int v19; // edx
  CSuperWetInkManager *v20; // rcx
  CSceneResourceManager *v21; // rbx
  CColorBrush *v22; // rax
  CColorBrush *v23; // rax
  CColorBrush *v24; // rax
  CColorBrush *v25; // rax
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-40h]
  void *v29; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v30; // [rsp+38h] [rbp-28h] BYREF
  char v31; // [rsp+48h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  *(_QWORD *)&v30.r = 0LL;
  v29 = 0LL;
  updated = CDisplayManager::UpdateDXGIFactory((CDisplayManager *)this);
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, updated, 0x1Cu, 0LL);
  v4 = CThreadContext::InitializeObjectCaches();
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 214;
    goto LABEL_65;
  }
  v4 = CRenderTargetManager::Create((struct CComposition *)this, this + 11);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 217;
    goto LABEL_65;
  }
  v4 = CGlobalSurfaceManager::Create((void **)&v30, &v29, this + 12);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 222;
    goto LABEL_65;
  }
  (*(void (__fastcall **)(struct CRenderTargetManager *, _QWORD, void *))(*(_QWORD *)this[63] + 80LL))(
    this[63],
    *(_QWORD *)&v30.r,
    v29);
  v4 = CExpressionManager::Create(this + 34);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 228;
    goto LABEL_65;
  }
  v7 = (CInputManager *)DefaultHeap::AllocClear(0x128uLL);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CInputManager::CInputManager(v7, (struct CComposition *)this);
  *(_QWORD *)v8 = &CGlobalInputManager::`vftable';
  CMILCOMBase::InternalAddRef(v8);
  v9 = CInputManager::Initialize(v8);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0x20u, 0LL);
    CRenderTargetBitmap::Release(v8);
  }
  else
  {
    this[13] = v8;
  }
  if ( v6 < 0 )
  {
    v28 = 231;
    goto LABEL_53;
  }
  v10 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x1A8uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v11 = CGlobalManipulationManager::CGlobalManipulationManager(v10, (struct CComposition *)this);
  v13 = v11;
  if ( !v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x20u, 0LL);
    v6 = -2147024882;
LABEL_45:
    v28 = 234;
LABEL_53:
    v27 = v6;
LABEL_66:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v27, v28, 0LL);
    return (unsigned int)v6;
  }
  CMILCOMBase::InternalAddRef(v11);
  v14 = CManipulationManager::Initialize(v13);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v14, 0x23u, 0LL);
    CRenderTargetBitmap::Release(v13);
  }
  else
  {
    this[14] = v13;
  }
  if ( v6 < 0 )
    goto LABEL_45;
  *(_QWORD *)&v30.r = 0LL;
  v6 = CHolographicManager::Create((struct CComposition *)this, (struct CHolographicManager **)&v30);
  this[17] = *(struct CRenderTargetManager **)&v30.r;
  if ( v6 < 0 )
  {
    v28 = 238;
    goto LABEL_53;
  }
  v15 = (struct IMessageSession *)(*(__int64 (__fastcall **)(struct CRenderTargetManager *))(*(_QWORD *)this[63] + 88LL))(this[63]);
  v4 = CMessageConversationHost::Create(v15, this + 135);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 242;
    goto LABEL_65;
  }
  v16 = this[137];
  if ( v16 )
  {
    this[137] = 0LL;
    CRenderTargetBitmap::Release(v16);
  }
  v4 = DataProviderManager::Create(v15, this + 137);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 244;
    goto LABEL_65;
  }
  v17 = this[136];
  if ( v17 )
  {
    this[136] = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v17);
  }
  v4 = DiagnosticCallbacksManager::Create(v15, this + 136);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 246;
    goto LABEL_65;
  }
  v4 = CEffectCompilationService::Create(v15, this + 15);
  v6 = v4;
  if ( v4 < 0 )
  {
    v28 = 249;
LABEL_65:
    v27 = v4;
    goto LABEL_66;
  }
  v18 = (struct CRenderTargetManager ***)operator new(0x40uLL);
  if ( v18 )
  {
    *v18 = this;
    v18[1] = 0LL;
    v18[2] = 0LL;
    v18[3] = 0LL;
    v18[4] = 0LL;
    v18[5] = 0LL;
    v18[6] = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v20 = this[16];
  this[16] = (struct CRenderTargetManager *)v18;
  if ( v20 )
    CSuperWetInkManager::`scalar deleting destructor'(v20, v19);
  *(_QWORD *)&v30.b = 0LL;
  *(_QWORD *)&v30.r = this + 19;
  v31 = 1;
  v6 = CSceneResourceManager::Create((struct CComposition *)this, (struct CSceneResourceManager **)&v30.b);
  if ( v31 )
  {
    v21 = **(CSceneResourceManager ***)&v30.r;
    **(_QWORD **)&v30.r = *(_QWORD *)&v30.b;
    if ( v21 )
    {
      CSceneResourceManager::~CSceneResourceManager(v21);
      operator delete(v21);
    }
  }
  if ( v6 < 0 )
  {
    v28 = 255;
    goto LABEL_53;
  }
  v22 = (CColorBrush *)DefaultHeap::AllocClear(0x88uLL);
  if ( v22 )
  {
    *(struct _D3DCOLORVALUE *)&v30.r = (struct _D3DCOLORVALUE)_xmm;
    v23 = CColorBrush::CColorBrush(v22, (struct CComposition *)this, &v30);
  }
  else
  {
    v23 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(this + 21, v23);
  if ( !this[21] )
  {
    v28 = 260;
LABEL_51:
    v6 = -2147024882;
    goto LABEL_53;
  }
  v24 = (CColorBrush *)DefaultHeap::AllocClear(0x88uLL);
  if ( v24 )
  {
    *(struct _D3DCOLORVALUE *)&v30.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
    v25 = CColorBrush::CColorBrush(v24, (struct CComposition *)this, &v30);
  }
  else
  {
    v25 = 0LL;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(this + 22, v25);
  if ( !this[22] )
  {
    v28 = 263;
    goto LABEL_51;
  }
  *((_OWORD *)this + 62) = _xmm;
  *((_OWORD *)this + 63) = _xmm;
  *((_OWORD *)this + 64) = _xmm;
  *((_OWORD *)this + 65) = _xmm;
  return (unsigned int)v6;
}
