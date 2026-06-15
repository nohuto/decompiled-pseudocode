/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C0238
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800C1280 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x180060958 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1800BF664 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800C1A2C (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  __int64 v2; // rcx
  LARGE_INTEGER v3; // rax
  int v4; // eax
  _DWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // [rsp+70h] [rbp+7h] BYREF
  int v10; // [rsp+74h] [rbp+Bh] BYREF
  int v11; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+17h] BYREF
  void *v13; // [rsp+88h] [rbp+1Fh] BYREF
  void *v14; // [rsp+90h] [rbp+27h] BYREF
  __int64 v15; // [rsp+98h] [rbp+2Fh] BYREF
  int v16; // [rsp+A0h] [rbp+37h]
  VolumeHardwareLogger *v17; // [rsp+D0h] [rbp+67h] BYREF
  int v18; // [rsp+D8h] [rbp+6Fh] BYREF
  int v19; // [rsp+E0h] [rbp+77h] BYREF
  int v20; // [rsp+E8h] [rbp+7Fh] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v17 = this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_12;
  VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v15);
  if ( v16 == *((_DWORD *)this + 21) )
    goto LABEL_12;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v3 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v3;
    *((_QWORD *)this + 14) = v15;
    v4 = v16;
    *((_DWORD *)this + 30) = v16;
  }
  else
  {
    v4 = v16;
    if ( v16 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v15;
      *((_DWORD *)this + 30) = v4;
    }
    if ( v4 <= *((_DWORD *)this + 33) )
      goto LABEL_9;
  }
  *(_QWORD *)((char *)this + 124) = v15;
  *((_DWORD *)this + 33) = v4;
LABEL_9:
  v5 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v2,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = *(_DWORD *)(v7 + 80);
    LODWORD(v17) = v16;
    v18 = HIDWORD(v15);
    v19 = v15;
    v20 = *((_DWORD *)this + 20);
    v9 = *((_DWORD *)this + 19);
    v10 = *((_DWORD *)this + 18);
    v11 = v8;
    v13 = *(void **)(v7 + 72);
    v14 = *(void **)(v7 + 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_180167548,
      (__int64)v5,
      v6,
      &v14,
      &v13,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  *((_DWORD *)this + 21) = v16;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
