/*
 * XREFs of ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18007FC90
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180081720 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001F74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001F74.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000229C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029D8C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035A80 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18007FAFC (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StopActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  const struct _tlgProvider_t *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  const struct _tlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // [rsp+C0h] [rbp-80h] BYREF
  int v15; // [rsp+C4h] [rbp-7Ch] BYREF
  int v16; // [rsp+C8h] [rbp-78h] BYREF
  int v17; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+100h] [rbp-40h] BYREF
  __int64 v25; // [rsp+108h] [rbp-38h] BYREF
  __int64 v26; // [rsp+110h] [rbp-30h] BYREF
  __int64 v27; // [rsp+118h] [rbp-28h] BYREF
  __int64 v28[4]; // [rsp+120h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+150h] [rbp+10h] BYREF
  __int64 v30; // [rsp+158h] [rbp+18h] BYREF
  __int64 v31; // [rsp+160h] [rbp+20h] BYREF
  __int64 v32; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = CDMUtilsUnlockLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = *((_QWORD *)v4 + 5);
      v8 = *((_QWORD *)this + 6);
      LODWORD(v31) = v4[24];
      v9 = *((_QWORD *)v4 + 11);
      v28[0] = 0LL;
      v21 = v9;
      v22 = *((_QWORD *)v4 + 10);
      LODWORD(v32) = v4[18];
      v23 = *((_QWORD *)v4 + 8);
      v14 = v4[6];
      v24 = *((_QWORD *)v4 + 2);
      v15 = *v4;
      v25 = *((_QWORD *)v4 + 15);
      v16 = v4[14];
      v26 = *((_QWORD *)v4 + 6);
      v17 = v4[1];
      v18 = v7;
      LODWORD(SRWLock) = v4[15];
      LODWORD(v30) = v4[2];
      v19 = *((_QWORD *)v4 + 14);
      v20 = *((_QWORD *)v4 + 13);
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v6,
        (unsigned __int8 *)dword_180178944,
        (const GUID *)(v8 + 8),
        (__int64)v6,
        (__int64)v28,
        (__int64)&v27,
        (__int64)&v17,
        (const unsigned __int16 **)&v26,
        (__int64)&v16,
        (const unsigned __int16 **)&v25,
        (__int64)&v15,
        (const WCHAR **)&v24,
        (__int64)&v14,
        (const unsigned __int16 **)&v23,
        (__int64)&v32,
        (const unsigned __int16 **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v31,
        (const unsigned __int16 **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v30,
        (__int64)&SRWLock,
        (const unsigned __int16 **)&v18);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v10 = CDMUtilsUnlockLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 6);
      LODWORD(SRWLock) = CurrentThreadId;
      v13 = *(_DWORD *)(v12 + 76);
      v31 = 0LL;
      LODWORD(v30) = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_180178AEB,
        (const GUID *)(v12 + 8),
        0LL,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&SRWLock);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 8));
}
