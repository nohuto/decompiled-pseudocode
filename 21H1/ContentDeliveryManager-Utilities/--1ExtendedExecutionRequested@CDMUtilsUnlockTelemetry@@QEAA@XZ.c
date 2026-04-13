/*
 * XREFs of ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18007D88C
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18007DF60 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D211B (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800055F4 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002775C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180033420 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ??1?$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007D5A4 (--1-$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007F0C0 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rcx
  void *v5; // rdi
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // r8d
  volatile signed __int32 *v9; // rcx
  void *v10; // rdi
  const struct wil::FailureInfo *v11; // rdx
  _BYTE v12[144]; // [rsp+20h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (void *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v5 + 8);
          operator delete(v5);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      v8 = v6[18];
      if ( (int)v6[21] < 0 )
        v7 = v6[21];
      if ( v8 < 1 )
      {
        memset_0(v12, 0, sizeof(v12));
        wil::details::WilFailFast((wil::details *)v12, v11);
      }
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (void *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CDMUtilsUnlockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 8));
}
