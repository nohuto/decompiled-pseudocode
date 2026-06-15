/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140002E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140003090 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140003160 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x140004720 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140017EBC (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140044638 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x140048BE8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // r15d
  _QWORD *v6; // rsi
  CPipeInstance *v7; // rcx
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+58h] [rbp-60h] BYREF
  int v19; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v23; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+20h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 46)
      || (v4 = 0LL, (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0) )
    {
      v3 = *((_QWORD *)this + 46);
      v4 = v3;
      if ( v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 46));
    }
    if ( *((_QWORD *)this + 47) && v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
      *((_QWORD *)this + 47) = 0LL;
    }
    v5 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v6 = (_QWORD *)*((_QWORD *)this + 21);
    while ( v6 )
    {
      v7 = (CPipeInstance *)v6[2];
      v6 = (_QWORD *)*v6;
      v8 = CPipeInstance::Stop(v7);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x350,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v8,
          v16);
        v5 = v9;
      }
    }
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    v11 = -2005139433;
    if ( v10 < 0 )
    {
      v5 = v10;
      if ( v10 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x360,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v10,
          v16);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    if ( v5 != -2005139433 )
    {
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v5,
          v16);
        v11 = v5;
      }
      else
      {
        CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, &v19);
        v12 = *((_QWORD *)this + 19);
        v24 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v24);
        v14 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                            v13,
                            _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v14 > 4u
          && (*(_QWORD *)(v14 + 16) & 0x400000000001LL) != 0
          && (*(_QWORD *)(v14 + 24) & 0x400000000001LL) == *(_QWORD *)(v14 + 24) )
        {
          v25 = v24;
          v26 = v21;
          v17 = v20;
          v23 = v19;
          v18 = *((_QWORD *)this + 49);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v14,
            (unsigned int)&unk_14007C3AA,
            (_DWORD)this + 352,
            v14,
            (__int64)&v18,
            (__int64)&v23,
            (__int64)&v17,
            (__int64)&v26,
            (__int64)&v25);
        }
        v11 = 0;
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    v11 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v16);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v11;
}
