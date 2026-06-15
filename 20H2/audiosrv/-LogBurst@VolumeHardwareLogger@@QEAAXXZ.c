/*
 * XREFs of ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C03C0
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800C0A90 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C1BB0 (-TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005ED84 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$07@@4444444444444@Z @ 0x1800BEC18 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U2@U2@U2.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800C0E8C (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::LogBurst(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  __int64 v4; // rcx
  LPVOID v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *LockSemaphore; // rdx
  int v9; // ecx
  int SpinCount_high; // [rsp+C0h] [rbp-80h] BYREF
  int SpinCount; // [rsp+C4h] [rbp-7Ch] BYREF
  int v12; // [rsp+C8h] [rbp-78h] BYREF
  LONG RecursionCount; // [rsp+CCh] [rbp-74h] BYREF
  LONG v14; // [rsp+D0h] [rbp-70h] BYREF
  int v15; // [rsp+D4h] [rbp-6Ch] BYREF
  int v16; // [rsp+D8h] [rbp-68h] BYREF
  int v17; // [rsp+DCh] [rbp-64h] BYREF
  int OwningThread_high; // [rsp+E0h] [rbp-60h] BYREF
  int v19; // [rsp+E4h] [rbp-5Ch] BYREF
  int v20; // [rsp+E8h] [rbp-58h] BYREF
  int v21; // [rsp+ECh] [rbp-54h] BYREF
  double v22; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  int v24; // [rsp+100h] [rbp-40h]
  LARGE_INTEGER PerformanceCount; // [rsp+108h] [rbp-38h] BYREF
  double v26; // [rsp+110h] [rbp-30h] BYREF
  void *v27; // [rsp+118h] [rbp-28h] BYREF
  void *v28; // [rsp+120h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+150h] [rbp+10h] BYREF
  LONG LockCount; // [rsp+158h] [rbp+18h] BYREF
  int DebugInfo_high; // [rsp+160h] [rbp+20h] BYREF
  int v32; // [rsp+168h] [rbp+28h] BYREF

  EnterCriticalSection(this);
  v29 = this;
  if ( this[1].LockSemaphore && (__int64)this[1].DebugInfo > 0 && SHIDWORD(this[2].OwningThread) > 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = this[3].OwningThread;
    DebugInfo = (double)(int)this[1].DebugInfo;
    if ( LOBYTE(this[1].OwningThread) || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v22 = (double)((int)OwningThread - LODWORD(this[2].LockSemaphore)) / DebugInfo;
      VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v23);
      v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             v4,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x400000000000LL) )
      {
        LockSemaphore = this[1].LockSemaphore;
        v9 = LockSemaphore[20];
        LODWORD(v29) = this[3].RecursionCount;
        LockCount = this[3].LockCount;
        DebugInfo_high = HIDWORD(this[3].DebugInfo);
        v32 = (int)this[3].DebugInfo;
        SpinCount_high = HIDWORD(this[2].SpinCount);
        SpinCount = this[2].SpinCount;
        v12 = (int)this[2].OwningThread;
        RecursionCount = this[2].RecursionCount;
        v14 = this[2].LockCount;
        v15 = v24;
        v16 = HIDWORD(v23);
        v17 = v23;
        OwningThread_high = HIDWORD(this[2].OwningThread);
        v26 = v22;
        v19 = (int)this[2].DebugInfo;
        v20 = HIDWORD(this[1].SpinCount);
        v21 = this[1].SpinCount;
        LODWORD(v22) = v9;
        v27 = (void *)*((_QWORD *)LockSemaphore + 9);
        v28 = (void *)*((_QWORD *)LockSemaphore + 8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          byte_1801663DE,
          v6,
          v7,
          &v28,
          &v27,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v26,
          (__int64)&OwningThread_high,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&RecursionCount,
          (__int64)&v12,
          (__int64)&SpinCount,
          (__int64)&SpinCount_high,
          (__int64)&v32,
          (__int64)&DebugInfo_high,
          (__int64)&LockCount,
          (__int64)&v29);
      }
      HIDWORD(this[2].OwningThread) = 0;
      *(_QWORD *)&this[2].LockCount = v23;
      LODWORD(this[2].OwningThread) = v24;
    }
    else
    {
      VolumeHardwareLogger::ScheduleTimer((VolumeHardwareLogger *)this);
    }
  }
  LeaveCriticalSection(this);
}
