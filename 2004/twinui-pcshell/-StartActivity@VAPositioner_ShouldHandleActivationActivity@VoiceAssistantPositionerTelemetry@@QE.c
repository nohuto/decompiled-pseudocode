/*
 * XREFs of ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180027DF0
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180027AC0 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180056048 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x18005FE30 (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x180081E8C (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18013C72C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  RTL_SRWLOCK *v6; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v8; // bl
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  DWORD v15; // r14d
  unsigned __int64 v16; // rsi
  __int64 i; // rcx
  _QWORD *v18; // rcx
  const WCHAR *CensoredAumidFromView; // rbx
  const GUID *v20; // r9
  const GUID *v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  void (*v24)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v25)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _QWORD *v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rax
  bool v29; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v32; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v34; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B0h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 ActivationId; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK v41; // [rsp+88h] [rbp-78h]
  void (__stdcall *v42)(PSRWLOCK); // [rsp+90h] [rbp-70h]
  PSRWLOCK v43; // [rsp+98h] [rbp-68h]
  void (__stdcall *v44)(PSRWLOCK); // [rsp+A0h] [rbp-60h]
  RTL_SRWLOCK *v45; // [rsp+A8h] [rbp-58h]
  void (__stdcall *v46)(PSRWLOCK); // [rsp+B0h] [rbp-50h]
  const WCHAR *v47; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v49; // [rsp+160h] [rbp+60h]
  int v50; // [rsp+168h] [rbp+68h]
  int v51; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  DWORD *p_CurrentThreadId; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  const WCHAR *v56; // [rsp+190h] [rbp+90h]
  int v57; // [rsp+198h] [rbp+98h]
  int v58; // [rsp+19Ch] [rbp+9Ch]
  bool *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *p_ActivationId; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]

  CurrentThreadId = 0;
  v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v6 )
  {
    v9 = v6 + 31;
    AcquireSRWLockExclusive(v9);
    p_SRWLock = &v37;
    v8 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v8 = 2;
    v9 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( SRWLock )
    {
      v41 = SRWLock;
      v42 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ( (v8 & 1) != 0 && v37 )
  {
    v43 = v37;
    v44 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v37);
  }
  v10 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805CD228;
    qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
    qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v24);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v10 + 8));
  else
    *(_OWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)v10 = 1;
  if ( v9 )
  {
    v45 = v9;
    v46 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v9);
  }
  v34 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v32, &v34) && v32 )
  {
    v34 = &qword_1805CD228;
    qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
    qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v25);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
  }
  v11 = *((_QWORD *)v34 + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    v29 = a3 != 0LL;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v47 = CensoredAumidFromView;
    CurrentThreadId = GetCurrentThreadId();
    v39 = 50331648LL;
    v20 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v21 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    p_ActivationId = &ActivationId;
    v62 = 8LL;
    v59 = &v29;
    v60 = 1LL;
    if ( CensoredAumidFromView )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( CensoredAumidFromView[v22] );
      v23 = 2 * v22 + 2;
    }
    else
    {
      CensoredAumidFromView = &szAgent;
      v23 = 2;
    }
    v56 = CensoredAumidFromView;
    v57 = v23;
    v58 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v55 = 4LL;
    v52 = &v39;
    v53 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v49 = &unk_180521109;
    v50 = 121;
    v51 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, v21, v20, 7u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (char *)this + 8;
    v13 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_44;
    v15 = GetCurrentThreadId();
    v16 = v15 % 0xAuLL;
    for ( i = *(_QWORD *)(v13 + 8 * v16); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == v15 )
      {
        v18 = (_QWORD *)(i + 16);
        goto LABEL_26;
      }
    }
    v26 = wil::details::ProcessHeapAlloc(0, 0x18uLL, v14);
    v27 = (signed __int64)v26;
    if ( v26 )
    {
      *(_DWORD *)v26 = v15;
      v26[1] = 0LL;
      v18 = v26 + 2;
      v26[2] = 0LL;
      _m_prefetchw((const void *)(v13 + 8 * v16));
      do
      {
        v28 = *(_QWORD *)(v13 + 8 * v16);
        *(_QWORD *)(v27 + 8) = v28;
      }
      while ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v16), v27, v28) );
    }
    else
    {
LABEL_44:
      v18 = 0LL;
    }
LABEL_26:
    *(_QWORD *)v12 = v18;
    if ( v18 )
    {
      *((_QWORD *)v12 + 2) = *v18;
      *v18 = v12;
      *((_DWORD *)v12 + 6) = GetCurrentThreadId();
    }
  }
}
