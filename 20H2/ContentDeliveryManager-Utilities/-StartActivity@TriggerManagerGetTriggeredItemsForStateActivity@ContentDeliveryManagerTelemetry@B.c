/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180066E18
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180069310 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180024FDC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800298F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035630 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  _DWORD *v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  GUID *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  const struct _tlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  const GUID *v15; // r9
  const GUID *v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v26; // [rsp+60h] [rbp-29h]
  __int64 v27; // [rsp+68h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp-19h]
  __int64 v29; // [rsp+78h] [rbp-11h]
  const wchar_t *v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h]
  int v32; // [rsp+8Ch] [rbp+3h]
  const wchar_t *v33; // [rsp+90h] [rbp+7h]
  int v34; // [rsp+98h] [rbp+Fh]
  int v35; // [rsp+9Ch] [rbp+13h]
  const char *v36; // [rsp+A0h] [rbp+17h]
  int v37; // [rsp+A8h] [rbp+1Fh]
  int v38; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = (_DWORD *)*((_QWORD *)this + 6);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (GUID *)(v8 + 2);
  if ( *(_DWORD *)v9 <= 5u )
    *v10 = 0LL;
  else
    EventActivityIdControl(3u, v10);
  v11 = SRWLock;
  *v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = *((_QWORD *)this + 6);
    LODWORD(SRWLock) = CurrentThreadId;
    v24 = 0LL;
    if ( !*(_BYTE *)(v14 + 4)
      || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
      && !*(_DWORD *)(v14 + 28)
      && !*(_DWORD *)(v14 + 32)
      && !*(_DWORD *)(v14 + 36) )
    {
      v15 = 0LL;
    }
    v16 = (const GUID *)(v14 + 8);
    v17 = -1LL;
    if ( a4 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a4[v18] );
      v19 = v18 + 1;
    }
    else
    {
      a4 = (const char *)&word_1801029D0;
      v19 = 1;
    }
    v36 = a4;
    v20 = 2;
    v37 = v19;
    v38 = 0;
    if ( a3 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a3[v21] );
      v22 = 2 * v21 + 2;
    }
    else
    {
      a3 = &Src;
      v22 = 2;
    }
    v33 = a3;
    v34 = v22;
    v35 = 0;
    if ( a2 )
    {
      do
        ++v17;
      while ( a2[v17] );
      v20 = 2 * v17 + 2;
    }
    else
    {
      a2 = &Src;
    }
    v31 = v20;
    p_SRWLock = &SRWLock;
    v30 = a2;
    v26 = &v24;
    v32 = 0;
    v29 = 4LL;
    v27 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v12, (unsigned __int8 *)dword_180177367, v16, v15, 7u, &v25);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)((char *)this + 8));
}
