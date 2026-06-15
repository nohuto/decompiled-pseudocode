/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B6F70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800B6E98 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  HANDLE CurrentProcess; // rax
  int v18; // [rsp+40h] [rbp-19h] BYREF
  int v19; // [rsp+44h] [rbp-15h] BYREF
  int v20; // [rsp+48h] [rbp-11h] BYREF
  DWORD CurrentProcessId; // [rsp+50h] [rbp-9h] BYREF
  int v22; // [rsp+54h] [rbp-5h]
  void *v23[2]; // [rsp+58h] [rbp-1h] BYREF
  char v24[32]; // [rsp+68h] [rbp+Fh] BYREF
  int *v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+94h] [rbp+3Bh]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v23[1] = v6;
  v7 = *((_DWORD *)this + 2);
  v8 = v7 + 1;
  if ( (unsigned int)v8 >= v7 )
  {
    *((_DWORD *)this + 2) = v8;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 3) && *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 16) )
    {
      v9 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                   v8,
                                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                     + 1);
      if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000001LL) )
      {
        v19 = *((_DWORD *)this + 3);
        v20 = *((_DWORD *)this + 2);
        v18 = 0;
        v23[0] = (void *)a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v10,
          byte_180165FA4,
          v11,
          v12,
          v23,
          (__int64)&v18,
          (__int64)&v20,
          (__int64)&v19);
      }
      *((_DWORD *)this + 16) = 1;
      CurrentProcessId = GetCurrentProcessId();
      v22 = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
      v13 = ReportCoreHang(&CurrentProcessId, (unsigned int)(v22 != 0) + 1, a2, 33LL);
      v15 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    v14,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v15 > 4u && tlgKeywordOn((__int64)v15, 1LL) )
      {
        v18 = v13;
        v25 = &v18;
        v26 = 4;
        v27 = 0;
        tlgWriteTransfer_EtwEventWriteTransfer(v16, byte_180165F80, 0LL, 0LL, 3, (__int64)v24);
      }
      if ( v13 >= 0 )
        Sleep(0xEA60u);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
