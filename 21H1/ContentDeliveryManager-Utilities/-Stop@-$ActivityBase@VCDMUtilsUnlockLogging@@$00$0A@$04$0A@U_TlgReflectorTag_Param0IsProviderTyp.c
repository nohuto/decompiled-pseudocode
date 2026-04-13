/*
 * XREFs of ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007ED3C
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18007DF60 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000229C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800055F4 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18007D49C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007F0C0 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 */

void __fastcall wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this,
        DWORD a2)
{
  __int64 v3; // rax
  int v4; // esi
  RTL_SRWLOCK *v5; // rcx
  int v6; // esi
  const struct _tlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const struct wil::FailureInfo *v10; // rdx
  _BYTE v11[168]; // [rsp+40h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+F0h] [rbp+8h] BYREF
  DWORD v13; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v14; // [rsp+100h] [rbp+18h] BYREF

  v13 = a2;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v3 = *((_QWORD *)this + 6);
  v4 = *(_DWORD *)(v3 + 72);
  if ( v4 < 1 )
  {
    memset_0(v11, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v11, v10);
  }
  if ( *(int *)(v3 + 76) >= 0 )
    *(_DWORD *)(v3 + 76) = 0;
  v5 = SRWLock;
  v6 = v4 - 1;
  *(_DWORD *)(v3 + 72) = v6;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v6 )
  {
    v7 = CDMUtilsUnlockLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = 0;
      v13 = CurrentThreadId;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        byte_180170B40,
        (const GUID *)(v9 + 8),
        0LL,
        (__int64)&v14,
        (__int64)&SRWLock,
        (__int64)&v13);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 8));
}
