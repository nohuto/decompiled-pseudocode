/*
 * XREFs of ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x180080678
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180080BD0 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A4D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800362D0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008010C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  const GUID *v7; // r9
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CDMUtilsUnlockLogging::Provider() <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = CDMUtilsUnlockLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v6 = *((_QWORD *)this + 6);
    v9 = 0LL;
    LODWORD(SRWLock) = CurrentThreadId;
    if ( !*(_BYTE *)(v6 + 4)
      || (v7 = (const GUID *)(v6 + 24), !*(_DWORD *)(v6 + 24))
      && !*(_DWORD *)(v6 + 28)
      && !*(_DWORD *)(v6 + 32)
      && !*(_DWORD *)(v6 + 36) )
    {
      v7 = 0LL;
    }
    v16 = 0;
    v13 = 0;
    p_SRWLock = &SRWLock;
    v15 = 4;
    v11 = &v9;
    v12 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v4,
      (unsigned __int8 *)dword_18017C8D9,
      (const GUID *)(v6 + 8),
      v7,
      4u,
      &v10);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 8));
}
