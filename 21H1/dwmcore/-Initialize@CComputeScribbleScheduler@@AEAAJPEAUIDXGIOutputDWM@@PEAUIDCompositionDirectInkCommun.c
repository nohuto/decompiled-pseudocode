/*
 * XREFs of ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A8914
 * Callers:
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAPEAV1@@Z @ 0x1801A8420 (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180088B50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18008CFAC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801508CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801517F4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801892D4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801A0A6C (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     CalculateDisplayBlankTime @ 0x1801A8178 (CalculateDisplayBlankTime.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801A98E8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x1801AE098 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 *     ?CreateDDisplayDeviceAndTarget@CDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x180239074 (-CreateDDisplayDeviceAndTarget@CDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@C.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Initialize(
        CComputeScribbleScheduler *this,
        struct IDXGIOutputDWM *a2,
        struct IDCompositionDirectInkCommunicationPartner *a3)
{
  __int64 (__fastcall *v6)(struct IDCompositionDirectInkCommunicationPartner *, __int64); // rbx
  __int64 v7; // rax
  unsigned int LastError; // edi
  int LastErrorFailHr; // ebx
  __int64 v10; // rdx
  CDisplayManager *v12; // rcx
  __int64 v13; // rdx
  wil::details *v14; // rcx
  wil::details *Event; // rbx
  __int64 v16; // r8
  const char *v17; // r9
  struct ID3D12CommandQueue *v18; // rcx
  int v19; // r14d
  __int64 *v20; // rbx
  __int64 v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  HANDLE Thread; // rax
  const char *v26; // r9
  char *v27; // rbx
  __int64 v28; // rdx
  HRESULT v29; // eax
  __int64 **v30; // [rsp+30h] [rbp-D0h]
  struct CComputeScribbleStopwatch *v31; // [rsp+38h] [rbp-C8h] BYREF
  char v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hThread; // [rsp+50h] [rbp-B0h] BYREF
  char *v35; // [rsp+58h] [rbp-A8h]
  struct Windows::Devices::Display::Core::IDisplayDevice *v36; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+68h] [rbp-98h]
  _DWORD v38[44]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v6 = *(__int64 (__fastcall **)(struct IDCompositionDirectInkCommunicationPartner *, __int64))(*(_QWORD *)a3 + 40LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 88LL))(*((_QWORD *)g_pComposition + 63));
  LastError = 0;
  LastErrorFailHr = v6(a3, v7);
  if ( LastErrorFailHr < 0 )
  {
    v10 = 100LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 18, (__int64)a3);
  LastErrorFailHr = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v38);
  if ( LastErrorFailHr < 0 )
  {
    v10 = 104LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 8) = v38[7];
  *((_DWORD *)this + 9) = v38[8];
  v31 = 0LL;
  v32 = 1;
  v36 = 0LL;
  v37 = 1;
  v35 = (char *)this + 16;
  *((float *)this + 10) = (float)v38[11] / (float)v38[10];
  LastErrorFailHr = CDisplayManager::CreateDDisplayDeviceAndTarget(v12, a2, &v36, &v31);
  if ( v37 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v35, v36);
  if ( v32 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
      (char *)this + 24,
      v31);
  if ( LastErrorFailHr < 0 )
  {
    v10 = 118LL;
    goto LABEL_3;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 7,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v14, v13, v16, v17);
  }
  if ( LastErrorFailHr < 0 )
  {
    v10 = 121LL;
    goto LABEL_3;
  }
  LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 64LL))(
                      *((_QWORD *)this + 3),
                      &v33);
  if ( LastErrorFailHr < 0 )
  {
    v10 = 124LL;
    goto LABEL_3;
  }
  LastErrorFailHr = CalculateDisplayBlankTime(
                      v38[0] | (unsigned __int64)((__int64)v38[1] << 32),
                      v33,
                      (float *)this + 11);
  if ( LastErrorFailHr < 0 )
  {
    v10 = 127LL;
    goto LABEL_3;
  }
  v18 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
  v30 = (__int64 **)((char *)this + 64);
  v31 = 0LL;
  v32 = 1;
  v19 = CComputeScribbleStopwatch::Create(v18, &v31);
  if ( v32 )
  {
    v20 = *v30;
    *v30 = (__int64 *)v31;
    if ( v20 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v20 + 5);
      v21 = v20[4];
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v20);
      operator delete(v20);
    }
  }
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
  v22 = (float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0;
  *(float *)this = v22;
  v23 = *((float *)this + 10);
  if ( v22 <= v23 )
    v23 = v22;
  *(float *)this = v23;
  v24 = FLOAT_0_0049999999;
  if ( (float)((float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0) <= 0.0049999999 )
    v24 = (float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0;
  *((float *)this + 1) = v24;
  hThread = 0LL;
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)lambda_89e933d5fb66f69ea87b181cfe24c3bb_::_lambda_invoker_cdecl_,
             this,
             4u,
             0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hThread,
    Thread);
  v27 = (char *)hThread;
  if ( hThread )
  {
    v29 = SetThreadDescription(hThread, L"D3D12 Compute Scribble");
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v29);
    if ( SetThreadPriority(v27, 2) && ResumeThread(v27) != -1 )
    {
      if ( (HANDLE *)((char *)this + 48) != &hThread )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 6,
          v27);
        v27 = 0LL;
      }
      goto LABEL_42;
    }
    v28 = 168LL;
  }
  else
  {
    v28 = 154LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v28,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
                v26);
LABEL_42:
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v27);
  return LastError;
}
