/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18002B138
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002F710 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029D14 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18002ABA8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035A80 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  const struct _tlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  const GUID *v13; // r9
  const GUID *v14; // r10
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // edx
  int v19; // [rsp+30h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-61h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v23; // [rsp+70h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  const unsigned __int16 *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  const unsigned __int16 *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]
  int *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CreativeFramework::Logging::ShellPlacementLogging::Provider() <= 5u )
    *(_OWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    v19 = a4;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *((_QWORD *)this + 6);
    LODWORD(SRWLock) = CurrentThreadId;
    v21 = 0LL;
    if ( !*(_BYTE *)(v12 + 4)
      || (v13 = (const GUID *)(v12 + 24), !*(_DWORD *)(v12 + 24))
      && !*(_DWORD *)(v12 + 28)
      && !*(_DWORD *)(v12 + 32)
      && !*(_DWORD *)(v12 + 36) )
    {
      v13 = 0LL;
    }
    v34 = 4LL;
    v33 = &v19;
    v14 = (const GUID *)(v12 + 8);
    v15 = -1LL;
    v16 = 2;
    if ( a3 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a3[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      a3 = &Src;
      v18 = 2;
    }
    v30 = a3;
    v31 = v18;
    v32 = 0;
    if ( a2 )
    {
      do
        ++v15;
      while ( a2[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      a2 = &Src;
    }
    v28 = v16;
    p_SRWLock = &SRWLock;
    v27 = a2;
    v23 = &v21;
    v29 = 0;
    v26 = 4LL;
    v24 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_180174E3F, v14, v13, 7u, &v22);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8));
}
