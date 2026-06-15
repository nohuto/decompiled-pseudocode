/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x18000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18000E480 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB1E0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  char *v8; // rbx
  _WORD *v9; // r13
  void *v10; // rdi
  __int64 v11; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  DynamicAudioEndpointManager *v14; // rdi
  unsigned int v15; // eax
  int DefaultAudioEndpoint; // esi
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  _WORD *v24; // rax
  unsigned __int64 v25; // rdx
  __int16 v26; // cx
  _DWORD *v27; // rcx
  HANDLE ProcessHeap; // rax
  unsigned int v30; // [rsp+20h] [rbp-61h]
  LPVOID v31; // [rsp+30h] [rbp-51h] BYREF
  unsigned int Pid; // [rsp+38h] [rbp-49h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-31h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-21h] BYREF
  _QWORD pv[2]; // [rsp+68h] [rbp-19h] BYREF
  DWORD v39; // [rsp+78h] [rbp-9h]
  const wchar_t *v40; // [rsp+80h] [rbp-1h]
  void *v41; // [rsp+88h] [rbp+7h]
  char v42; // [rsp+90h] [rbp+Fh]
  __int64 v43; // [rsp+94h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v45; // [rsp+F0h] [rbp+6Fh] BYREF
  _QWORD *v46; // [rsp+F8h] [rbp+77h]

  v46 = a4;
  LOBYTE(v45) = 0;
  Context = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019F828;
    qword_18019F828 = &wil::details::FeatureLogging::`vftable';
    qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019F828,
      qword_18019F840,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v41 = v10;
  v39 = CurrentThreadId;
  v40 = L"s_rtgGetDefaultAudioEndpoint";
  v42 = 0;
  v43 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( a3 >= 9 )
  {
    DefaultAudioEndpoint = -2147024809;
    goto LABEL_37;
  }
  if ( !v46 || !a5 )
  {
    DefaultAudioEndpoint = -2147467261;
    goto LABEL_37;
  }
  v14 = g_DynamicAudioEndpointManager;
  *a5 = 0;
  v36 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  Pid = 0;
  v15 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( v15 )
  {
    DefaultAudioEndpoint = wil::details::in1diag3::Return_Win32(
                             retaddr,
                             (void *)0xE6,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
                             (const char *)v15,
                             v30);
    goto LABEL_36;
  }
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v14, Pid, a2, (unsigned int)a3);
  if ( DefaultAudioEndpoint < 0 )
    goto LABEL_36;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v17 = v36;
  v18 = (**v36)(v36, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v33);
  DefaultAudioEndpoint = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v18,
      (int)&v45);
    goto LABEL_36;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v33 + 56LL))(v33, &v31);
  DefaultAudioEndpoint = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v19,
      (int)&v45);
    if ( v31 )
      CoTaskMemFree(v31);
LABEL_36:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
    if ( DefaultAudioEndpoint < 0 )
    {
LABEL_37:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
      goto LABEL_35;
    }
LABEL_38:
    DefaultAudioEndpoint = -2147023728;
    goto LABEL_37;
  }
  v8 = (char *)v31;
  v31 = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
  if ( !v8 )
    goto LABEL_38;
  v20 = -1LL;
  while ( *(_WORD *)&v8[2 * v20++ + 2] != 0 )
    ;
  v22 = 2 * v20 + 2;
  if ( v22 > 0x40000 || (v9 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow)) == 0LL )
  {
    DefaultAudioEndpoint = -2147024882;
    goto LABEL_37;
  }
  v23 = v22 >> 1;
  DefaultAudioEndpoint = 0;
  if ( v23 - 1 > 0x7FFFFFFE )
    DefaultAudioEndpoint = -2147024809;
  if ( DefaultAudioEndpoint < 0 )
  {
    if ( v23 )
      *v9 = 0;
  }
  else
  {
    v24 = v9;
    DefaultAudioEndpoint = 0;
    if ( v23 )
    {
      v25 = 2147483646 - v23;
      while ( v23 + v25 )
      {
        v26 = *(_WORD *)((char *)v24 + v8 - (char *)v9);
        if ( !v26 )
          break;
        *v24++ = v26;
        if ( !--v23 )
          goto LABEL_46;
      }
    }
    else
    {
LABEL_46:
      --v24;
      DefaultAudioEndpoint = -2147024774;
    }
    *v24 = 0;
  }
  if ( DefaultAudioEndpoint < 0 )
    goto LABEL_37;
  v27 = a5;
  *v46 = v9;
  *v27 = (unsigned __int8)v45;
LABEL_35:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v8);
  return (unsigned int)DefaultAudioEndpoint;
}
