/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180040830 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x180050684 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x18007A7D0 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007D084 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18007D1EC (-ProcessBatches@CComposition@@IEAAJXZ.c)
 *     ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x18007D698 (-CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ.c)
 *     ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x18007D7D0 (-ReleasePendingReferences@CManipulationManager@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007D878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18007D900 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?ClearCaches@CComposition@@IEBA_NXZ @ 0x18007D960 (-ClearCaches@CComposition@@IEBA_NXZ.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x1800D6CE4 (-PostExpressionsUpdated@DataProviderManager@@QEAAXXZ.c)
 *     ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x1800D8AD0 (-UpdateAnimateResources@CComposition@@IEAAXXZ.c)
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1800DCC08 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801994B0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1801FD4BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1801FF7DC (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1801FF930 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CComposition::PreRender(CComposition *this)
{
  char *v1; // r13
  int v3; // eax
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rsi
  unsigned int i; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  bool v12; // al
  CSceneResourceManager *v13; // rcx
  bool v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  CSceneResourceManager *v19; // rbx
  struct ISpectreRenderer *SpectreRenderer; // r14
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  CManipulationManager *v24; // rcx
  CResource *v25; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbp
  int v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r15
  _DWORD *v36; // r14
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // r9
  unsigned int j; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rbp
  _QWORD *v45; // rbx
  __int64 v46; // r15
  unsigned int v47; // [rsp+20h] [rbp-68h]
  int v48; // [rsp+90h] [rbp+8h] BYREF
  int ChannelCallbackId; // [rsp+98h] [rbp+10h] BYREF
  int v50; // [rsp+A0h] [rbp+18h] BYREF
  CResource *v51; // [rsp+A8h] [rbp+20h] BYREF

  v1 = (char *)this + 672;
  v51 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 84);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v3 = CComposition::BeginCompositionFrame(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    v47 = 3475;
    goto LABEL_75;
  }
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 32LL))(this);
  v3 = CComposition::ProcessBatches(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    v47 = 3481;
LABEL_75:
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180345830, 3LL, v3, v47);
    goto LABEL_20;
  }
  v6 = *((_QWORD *)this + 53);
  for ( i = 0; i < *(_DWORD *)(v6 + 288); ++i )
  {
    v33 = *(_QWORD *)(v6 + 264);
    if ( *(_BYTE *)(*(_QWORD *)(v33 + 8LL * i) + 320LL) )
      InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v33 + 8LL * i) + 200LL));
  }
  CycleTime = anonymous_namespace_::MeasureCyclesDelta(&CycleTime, &qword_1803D31A0);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0LL);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 40LL))(*((_QWORD *)this + 28));
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xE29u);
    MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_180345830, 3LL, v5, 0xDA9u);
  }
  else
  {
    CycleTime = anonymous_namespace_::MeasureCyclesDelta(&CycleTime, &qword_1803D31A8);
    if ( g_pDebugVisual && (int)CDebugVisualImage::Create(this, g_pDebugVisual, &v51) >= 0 )
      *((_BYTE *)this + 1279) = 1;
    v10 = CRenderTargetManager::CheckOcclusionState(*((CRenderTargetManager **)this + 27));
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180345830, 3LL, v10, 0xDB7u);
    v12 = CComposition::ClearCaches(this);
    v13 = (CSceneResourceManager *)*((_QWORD *)this + 36);
    v14 = v12;
    if ( (__int64)(*((_QWORD *)v13 + 6) - *((_QWORD *)v13 + 5)) >> 3 )
      CSceneResourceManager::EnsureSceneCompositor(v13);
    else
      CSceneResourceManager::ReleaseSceneCompositor(v13);
    v15 = *((_QWORD *)this + 33);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *((_QWORD *)this + 27);
    if ( !*(_BYTE *)(v16 + 581) || *(_BYTE *)(v16 + 582) )
    {
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 82) + 120LL))(
          *((_QWORD *)this + 82),
          2000LL,
          4LL);
      CSuperWetInkManager::DirtyActiveInk(*((CSuperWetInkManager **)this + 32));
      CComposition::UpdateAnimateResources(this);
      CComposition::UpdateExpressions(this, v17, v18);
      CycleTime = anonymous_namespace_::MeasureCyclesDelta(&CycleTime, &qword_1803D31B0);
      DataProviderManager::PostExpressionsUpdated(*((DataProviderManager **)this + 157));
      v19 = (CSceneResourceManager *)*((_QWORD *)this + 36);
      SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(v19);
      if ( SpectreRenderer )
      {
        v43 = *((_QWORD *)v19 + 1);
        v44 = (_QWORD *)*((_QWORD *)v19 + 6);
        v45 = (_QWORD *)*((_QWORD *)v19 + 5);
        v46 = *(_QWORD *)(v43 + 608);
        while ( v45 != v44 )
        {
          (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *, __int64))(*(_QWORD *)*v45 + 16LL))(
            *v45,
            SpectreRenderer,
            v46);
          ++v45;
        }
        (*(void (__fastcall **)(struct ISpectreRenderer *))(*(_QWORD *)SpectreRenderer + 96LL))(SpectreRenderer);
      }
      v21 = CComposition::CleanTrees(this);
      v23 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_180345830, 3LL, v21, 0xDE1u);
      if ( !v5 || v5 >= 0 && v23 < 0 )
        v5 = v23;
    }
    else
    {
      dword_1803D3160 |= 0x200u;
      v28 = *((_QWORD *)this + 53);
      if ( *(_QWORD *)(v28 + 544) )
        CExpressionManager::UpdateExpressions(
          *((CExpressionManager **)this + 53),
          *((_QWORD *)this + 76),
          *((_QWORD *)this + 62));
      v29 = *(_DWORD *)(v28 + 256) - 1;
      if ( v29 >= 0 )
      {
        v35 = 16LL * v29;
        do
        {
          v36 = *(_DWORD **)(*(_QWORD *)(v28 + 232) + v35 + 8);
          if ( !CNotificationResource::ShouldNotify((CNotificationResource *)v36)
            && !CPtrArrayBase::GetCount((CPtrArrayBase *)(v36 + 6)) )
          {
            if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 4LL) )
            {
              v48 = v36[16];
              ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)v36);
              v50 = (*(__int64 (**)(void))(*(_QWORD *)v36 + 144LL))();
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (unsigned int)&dword_1803D0EF0,
                (unsigned int)&unk_180370BB3,
                v37,
                v38,
                (__int64)&v50,
                (__int64)&ChannelCallbackId,
                (__int64)&v48);
            }
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 16LL))(v36);
            v39 = *(unsigned int *)(v28 + 256);
            if ( v29 < (unsigned int)v39 )
            {
              v40 = *(_QWORD *)(v28 + 232);
              for ( j = v29; j < (int)v39 - 1; LODWORD(v39) = *(_DWORD *)(v28 + 256) )
              {
                v42 = 2LL * j;
                v39 = 2LL * ++j;
                *(_OWORD *)(v40 + 8 * v42) = *(_OWORD *)(v40 + 8 * v39);
              }
              *(_DWORD *)(v28 + 256) = v39 - 1;
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, -2147024809, 0x19Cu);
            }
          }
          v35 -= 16LL;
          --v29;
        }
        while ( v29 >= 0 );
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 56LL))(*((_QWORD *)this + 28))
        || *((_DWORD *)this + 186) )
      {
        *((_BYTE *)this + 1279) = 1;
      }
    }
  }
LABEL_20:
  v24 = (CManipulationManager *)*((_QWORD *)this + 30);
  if ( v24 )
    CManipulationManager::ReleasePendingReferences(v24);
  if ( *((_BYTE *)this + 1279) )
  {
    v30 = CComposition::CleanTrees(this);
    v32 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_180345830, 3LL, v30, 0xE00u);
    if ( !v5 || v5 >= 0 && v32 < 0 )
      v5 = v32;
  }
  CComposition::CleanPossibleDirtyInputSinkList(this);
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 40LL))(this);
  v25 = v51;
  if ( v51 )
    CDebugVisualImage::LockAndRead(v51);
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  if ( *((_BYTE *)this + 1272) )
  {
    v27 = *(_QWORD *)(*((_QWORD *)this + 29) + 24LL);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    *((_BYTE *)this + 1272) = 0;
  }
  if ( dword_1803D36A0 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  if ( v25 )
    CResource::InternalRelease(v25);
  return (unsigned int)v5;
}
