/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180035840
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180038320 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x180238DA0 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180038E40 (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@-$map@V-$co.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18003AAB4 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180041A28 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x1800429F4 (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180062898 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1800825E8 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800874FC (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F058 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18023798C (--$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180237E7C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=56
RTL_SRWLOCK *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        RTL_SRWLOCK *a1,
        RTL_SRWLOCK *a2,
        WINBOOL a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // r12
  __int64 v6; // rbx
  DWORD v7; // r14d
  unsigned __int64 v8; // rsi
  RTL_SRWLOCK *v9; // rdi
  HWND v10; // rdx
  HWND v11; // rcx
  HWND v12; // rax
  HWND *p_hWnd; // rax
  __int64 (__fastcall **v14)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  bool v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r14d
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int (__fastcall *v26)(__int64, __int64, GUID *, __int64 *); // r15
  __int64 v27; // rdx
  const WCHAR *v28; // r14
  __int64 v29; // r14
  __int64 v30; // rbx
  int v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  void *v34; // rcx
  HRESULT v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // esi
  int v39; // eax
  HWND v40; // r14
  WINBOOL v41; // r15d
  int v42; // eax
  LPWSTR FileNameW; // rsi
  _DWORD *v44; // rcx
  RTL_SRWLOCK *v45; // rbx
  void *v46; // rax
  __int64 AppIdInfoForApplicationView; // r12
  const WCHAR **v49; // r14
  const WCHAR *v50; // r15
  PCWSTR v51; // r14
  __int64 v52; // r15
  unsigned __int64 v53; // rbx
  void (__stdcall *v54)(LPVOID); // r13
  void **v55; // r12
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r13
  __int64 v58; // r15
  __int64 v59; // rax
  unsigned __int64 v60; // r10
  char *v61; // r15
  size_t v62; // rbx
  signed int LastError; // eax
  DWORD v64; // ebx
  DWORD v65; // ebx
  char *v66; // r15
  size_t v67; // rbx
  void (*v68)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  RTL_SRWLOCK *v69; // rbx
  int v70; // [rsp+20h] [rbp-2F8h]
  int v71; // [rsp+20h] [rbp-2F8h]
  _WORD v72[2]; // [rsp+60h] [rbp-2B8h] BYREF
  bool v73; // [rsp+64h] [rbp-2B4h]
  unsigned int v74; // [rsp+68h] [rbp-2B0h]
  PCWSTR sourceString; // [rsp+70h] [rbp-2A8h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-2A0h] BYREF
  int v77; // [rsp+7Ch] [rbp-29Ch] BYREF
  int v78; // [rsp+80h] [rbp-298h] BYREF
  void *v79; // [rsp+88h] [rbp-290h]
  unsigned int v80; // [rsp+90h] [rbp-288h] BYREF
  DWORD dwProcessId; // [rsp+94h] [rbp-284h] BYREF
  DWORD v82; // [rsp+98h] [rbp-280h]
  __int64 v83; // [rsp+A0h] [rbp-278h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp-270h] BYREF
  int v85; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-260h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-258h] BYREF
  HWND hWnd; // [rsp+C8h] [rbp-250h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-248h] BYREF
  LPVOID v90; // [rsp+D8h] [rbp-240h] BYREF
  void *v91; // [rsp+E0h] [rbp-238h]
  RTL_SRWLOCK *v92; // [rsp+E8h] [rbp-230h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+F0h] [rbp-228h] BYREF
  __int128 v94; // [rsp+F8h] [rbp-220h]
  __int128 v95; // [rsp+108h] [rbp-210h]
  LPVOID v96; // [rsp+118h] [rbp-200h] BYREF
  __int64 (__fastcall ***v97)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+120h] [rbp-1F8h] BYREF
  __int64 v98; // [rsp+128h] [rbp-1F0h] BYREF
  __int64 v99; // [rsp+130h] [rbp-1E8h] BYREF
  void (__stdcall *v100[2])(LPVOID); // [rsp+138h] [rbp-1E0h] BYREF
  _QWORD v101[2]; // [rsp+148h] [rbp-1D0h] BYREF
  HWND v102; // [rsp+158h] [rbp-1C0h]
  HWND v103; // [rsp+160h] [rbp-1B8h] BYREF
  __int64 v104; // [rsp+168h] [rbp-1B0h]
  __int64 v105; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v106; // [rsp+178h] [rbp-1A0h] BYREF
  LPVOID v107; // [rsp+180h] [rbp-198h]
  __int64 v108; // [rsp+188h] [rbp-190h] BYREF
  __int64 v109[2]; // [rsp+190h] [rbp-188h] BYREF
  __int128 v110; // [rsp+1A0h] [rbp-178h]
  __int64 v111; // [rsp+1B0h] [rbp-168h]
  void (__stdcall *v112)(LPVOID); // [rsp+1B8h] [rbp-160h]
  RTL_SRWLOCK *v113; // [rsp+1C0h] [rbp-158h]
  void (__stdcall *v114)(PSRWLOCK); // [rsp+1C8h] [rbp-150h]
  PCWSTR v115; // [rsp+1D0h] [rbp-148h]
  void (__stdcall *v116)(LPVOID); // [rsp+1D8h] [rbp-140h]
  __int64 v117; // [rsp+1E0h] [rbp-138h]
  void (__stdcall *v118)(LPVOID); // [rsp+1E8h] [rbp-130h]
  void (__stdcall *v119)(LPVOID); // [rsp+200h] [rbp-118h]
  LPVOID v120; // [rsp+208h] [rbp-110h]
  void (__stdcall *v121)(LPVOID); // [rsp+210h] [rbp-108h]
  __int64 v122; // [rsp+218h] [rbp-100h]
  __int64 v123; // [rsp+220h] [rbp-F8h]
  __int64 v124; // [rsp+228h] [rbp-F0h]
  __int64 v125; // [rsp+230h] [rbp-E8h]
  RTL_SRWLOCK *v126; // [rsp+238h] [rbp-E0h]
  void (__stdcall *v127)(PSRWLOCK); // [rsp+240h] [rbp-D8h]
  struct _FILETIME v128; // [rsp+248h] [rbp-D0h]
  unsigned __int64 v129; // [rsp+250h] [rbp-C8h]
  PCWSTR v130; // [rsp+258h] [rbp-C0h]
  void (__stdcall *v131)(LPVOID); // [rsp+260h] [rbp-B8h]
  RTL_SRWLOCK *v132; // [rsp+268h] [rbp-B0h]
  void (__stdcall *v133)(PSRWLOCK); // [rsp+270h] [rbp-A8h]
  PCWSTR v134; // [rsp+278h] [rbp-A0h]
  HWND v135; // [rsp+280h] [rbp-98h]
  HWND v136; // [rsp+288h] [rbp-90h]
  char v137[8]; // [rsp+290h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+298h] [rbp-80h]
  void (__stdcall *v139)(PSRWLOCK); // [rsp+2A0h] [rbp-78h]
  PCWSTR v140; // [rsp+2A8h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+2B0h] [rbp-68h] BYREF
  HSTRING string; // [rsp+2C8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  v4 = a4;
  Context = a4;
  fPending = a3;
  v92 = a2;
  v6 = (__int64)a1;
  v83 = (__int64)a1;
  v109[1] = (__int64)a2;
  v74 = 0;
  v79 = 0LL;
  v72[0] = 0;
  v7 = 0;
  v82 = 0;
  v8 = -1LL;
  v77 = -1;
  sourceString = 0LL;
  v9 = a1 + 31;
  AcquireSRWLockExclusive(a1 + 31);
  v98 = (__int64)v9;
  v10 = *(HWND *)(v6 + 256);
  v11 = v10;
  v102 = v10;
  v12 = (HWND)*((_QWORD *)v10 + 1);
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_QWORD *)v12 + 4) >= (unsigned __int64)v4 )
    {
      v11 = v12;
      v102 = v12;
      v12 = *(HWND *)v12;
    }
    else
    {
      v12 = (HWND)*((_QWORD *)v12 + 2);
    }
  }
  v135 = v10;
  if ( v11 == v10 || (unsigned __int64)v4 < *((_QWORD *)v11 + 4) )
  {
    v103 = v10;
    p_hWnd = &v103;
  }
  else
  {
    hWnd = v11;
    p_hWnd = &hWnd;
  }
  v136 = *p_hWnd;
  if ( v136 == *(HWND *)(v6 + 256) )
  {
    v78 = 0;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*v4)[27])(
      v4,
      &v78);
    if ( v78 != 1 )
    {
      LOBYTE(v72[0]) = 1;
      a2->Ptr = 0LL;
      v74 = 1;
      if ( v9 )
      {
        v92 = v9;
        v139 = ReleaseSRWLockExclusive;
        ReleaseSRWLockExclusive(v9);
      }
      if ( sourceString )
      {
        v140 = sourceString;
        v112 = CoTaskMemFree;
        CoTaskMemFree((LPVOID)sourceString);
      }
      if ( v79 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v79 + 16LL))(v79);
      return a2;
    }
  }
  hWnd = (HWND)ApplicationViewHelpers::GetWindowForView(v4, (struct IApplicationView *)v10);
  if ( !hWnd )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    HIBYTE(v72[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(v6 + 256),
      (struct IApplicationView *)v4);
    a2->Ptr = 0LL;
    v74 = 1;
    if ( v9 )
    {
      v113 = v9;
      v114 = ReleaseSRWLockExclusive;
      ReleaseSRWLockExclusive(v9);
    }
    if ( sourceString )
    {
      v115 = sourceString;
      v116 = CoTaskMemFree;
      CoTaskMemFree((LPVOID)sourceString);
    }
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v72);
    if ( v79 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v79 + 16LL))(v79);
    return a2;
  }
  v14 = *v4;
  v99 = 0LL;
  v15 = (int)(*v14)((ApplicationViewHelpers *)v4, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v99) >= 0;
  v73 = v15;
  if ( v99 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
  v16 = *(_QWORD *)(v6 + 256);
  v17 = v16;
  v104 = v16;
  v18 = *(_QWORD *)(v16 + 8);
  while ( !*(_BYTE *)(v18 + 25) )
  {
    if ( *(_QWORD *)(v18 + 32) >= (unsigned __int64)v4 )
    {
      v17 = v18;
      v104 = v18;
      v18 = *(_QWORD *)v18;
    }
    else
    {
      v18 = *(_QWORD *)(v18 + 16);
    }
  }
  v117 = v16;
  if ( v17 == v16 || (unsigned __int64)v4 < *(_QWORD *)(v17 + 32) )
  {
    v106 = v16;
    v19 = &v106;
  }
  else
  {
    v105 = v17;
    v19 = &v105;
  }
  v20 = *v19;
  if ( v20 == v16 )
  {
    v94 = 0LL;
    v95 = 0LL;
    BYTE8(v95) = 0;
  }
  else
  {
    LODWORD(v110) = *(_DWORD *)(v20 + 40);
    *((_QWORD *)&v110 + 1) = v20 + 48;
    v17 = *(unsigned int *)(v20 + 80);
    LODWORD(v111) = *(_DWORD *)(v20 + 80);
    v94 = v110;
    *(_QWORD *)&v95 = v111;
    BYTE8(v95) = 1;
  }
  if ( BYTE8(v95) && (_DWORD)v95 )
  {
    v7 = v95;
    v82 = v95;
  }
  else if ( fPending != 1 )
  {
    dwProcessId = 0;
    v21 = 0;
    v80 = 0;
    if ( v15 )
    {
      v87 = 0LL;
      v89 = 0LL;
      v86 = 0LL;
      v22 = (**v4)((ApplicationViewHelpers *)v4, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v86);
      if ( v22 < 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v86);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v86 + 24LL))(v86, &v89);
        v22 = v23;
        if ( v23 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6B,
            (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
            (const char *)(unsigned int)v23,
            v70);
        v24 = v86;
        if ( v86 )
        {
          v86 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
      if ( v22 >= 0 )
      {
        v25 = v89;
        v26 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v89 + 24LL);
        if ( v87 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
        if ( v26(v25, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v87) >= 0 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v87 + 48LL))(v87, &dwProcessId);
          v80 = v21;
        }
      }
      if ( v87 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
      if ( v89 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
      v6 = v83;
    }
    else
    {
      if ( GetWindowThreadProcessId(hWnd, &dwProcessId) )
      {
LABEL_44:
        v7 = dwProcessId;
        v82 = dwProcessId;
        if ( dwProcessId )
        {
          v97 = v4;
          ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v4)[1])(v4);
          std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
            v6 + 256,
            v101,
            &v97);
          v17 = (__int64)v97;
          if ( v97 )
            ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v97)[2])(v97);
          *(_DWORD *)(v101[0] + 80LL) = v7;
        }
        goto LABEL_45;
      }
      LastError = GetLastError();
      v21 = LastError;
      if ( LastError > 0 )
        v21 = (unsigned __int16)LastError | 0x80070000;
      v80 = v21;
    }
    v17 = 0x80000000LL;
    if ( (int)(v21 + 0x80000000) >= 0 && v21 != -2147023496 )
      TaskFlowDataEngineTelemetry::FailedToRetreiveProcessId<long &>(&v80);
    goto LABEL_44;
  }
LABEL_45:
  if ( BYTE8(v95) && (_DWORD)v94 != -1 && *(_QWORD *)(*((_QWORD *)&v94 + 1) + 16LL) )
  {
    v77 = v94;
    v27 = *((_QWORD *)&v94 + 1);
    if ( *(_QWORD *)(*((_QWORD *)&v94 + 1) + 24LL) >= 8uLL )
      v27 = **((_QWORD **)&v94 + 1);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v90,
      v27,
      -1LL);
    v74 = 4;
    v28 = (const WCHAR *)v90;
    if ( sourceString )
    {
      v107 = (LPVOID)sourceString;
      v64 = GetLastError();
      v118 = CoTaskMemFree;
      CoTaskMemFree(v107);
      SetLastError(v64);
    }
    sourceString = v28;
    v90 = 0LL;
    goto LABEL_53;
  }
  AppIdInfoForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                  v17,
                                  v137,
                                  v4,
                                  v7);
  v101[0] = &v77;
  v101[1] = &sourceString;
  v49 = (const WCHAR **)(AppIdInfoForApplicationView + 8);
  if ( &sourceString != (PCWSTR *)(AppIdInfoForApplicationView + 8) )
  {
    v50 = *v49;
    if ( sourceString )
    {
      SystemTimeAsFileTime = (struct _FILETIME)sourceString;
      v65 = GetLastError();
      v119 = CoTaskMemFree;
      CoTaskMemFree(*(LPVOID *)&SystemTimeAsFileTime);
      SetLastError(v65);
    }
    sourceString = v50;
    *v49 = 0LL;
  }
  *(_DWORD *)v101[0] = *(_DWORD *)AppIdInfoForApplicationView;
  if ( pv )
  {
    v120 = pv;
    v121 = CoTaskMemFree;
    CoTaskMemFree(pv);
  }
  v51 = sourceString;
  if ( sourceString )
  {
    v78 = v77;
    if ( v77 != -1 )
    {
      v52 = v83;
      v53 = -1LL;
      do
        ++v53;
      while ( sourceString[v53] );
      v96 = Context;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 8LL))(Context);
      std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
        v52 + 256,
        v100,
        &v96);
      if ( v96 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v96 + 16LL))(v96);
      v54 = v100[0];
      v55 = (void **)((char *)v100[0] + 48);
      v56 = *((_QWORD *)v100[0] + 9);
      if ( v53 <= v56 )
      {
        v66 = (char *)v100[0] + 48;
        if ( v56 >= 8 )
          v66 = (char *)*v55;
        *((_QWORD *)v100[0] + 8) = v53;
        v67 = 2 * v53;
        memmove_0(v66, v51, v67);
        *(_WORD *)&v66[v67] = 0;
      }
      else
      {
        v122 = 0x7FFFFFFFFFFFFFFFLL;
        v123 = 8LL;
        v124 = 0x7FFFFFFFFFFFFFFELL;
        v125 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v53 > 0x7FFFFFFFFFFFFFFELL )
          std::_Xlength_error("string too long");
        v57 = *((_QWORD *)v100[0] + 9);
        v58 = std::wstring::_Calculate_growth((char *)v100[0] + 48, v53);
        v59 = 2 * (v58 + 1);
        if ( v58 + 1 > v60 )
          v59 = -1LL;
        v91 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v59);
        v55[2] = (void *)v53;
        v55[3] = (void *)v58;
        v61 = (char *)v91;
        v62 = 2 * v53;
        memcpy_0(v91, v51, v62);
        *(_WORD *)&v61[v62] = 0;
        if ( v57 >= 8 )
          std::_Deallocate<16,0>(*v55, 2 * v57 + 2);
        *v55 = v91;
        v54 = v100[0];
      }
      *((_DWORD *)v54 + 10) = v78;
      v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))Context;
LABEL_53:
      v29 = v83;
      if ( fPending == 1 )
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
          (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(v83 + 256),
          (struct IApplicationView *)v4);
      if ( v9 )
      {
        v126 = v9;
        v127 = ReleaseSRWLockExclusive;
        ReleaseSRWLockExclusive(v9);
      }
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      v128 = SystemTimeAsFileTime;
      v30 = (__int64)SystemTimeAsFileTime;
      v85 = 0;
      v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*v4)[43])(
              v4,
              &v85);
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x128,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v31,
          v70);
      }
      else
      {
        v9 = *(RTL_SRWLOCK **)(v29 + 272);
        v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)v9->Ptr + 6);
        v34 = v79;
        v79 = 0LL;
        if ( !v34 )
          goto LABEL_59;
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_59:
      if ( sourceString )
      {
        string = 0LL;
        do
          ++v8;
        while ( sourceString[v8] );
        v129 = v8;
        if ( v8 <= 0xFFFFFFFF )
        {
          if ( (int)v8 + 1 < (unsigned int)v8 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v32, v33);
          }
          else
          {
            v35 = WindowsCreateStringReference(sourceString, v8, &hstringHeader, &string);
            if ( v35 >= 0 )
            {
              v38 = v74 | 2;
              v74 |= 2u;
              v39 = (int)string;
              goto LABEL_66;
            }
          }
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35, v36, v37);
        }
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v32, v33);
      }
      v39 = 0;
      v38 = v74;
LABEL_66:
      v71 = v39;
      v40 = hWnd;
      v41 = fPending;
      v42 = ((__int64 (__fastcall *)(RTL_SRWLOCK *, _QWORD, __int64, HWND))v4)(v9, (unsigned int)fPending, v30, hWnd);
      if ( v42 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x133,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v42,
          v71);
      }
      else
      {
        if ( (v38 & 2) != 0 )
        {
          v74 = v38 & 0xFFFFFFFD;
          string = 0LL;
        }
        v9 = (RTL_SRWLOCK *)sourceString;
        FileNameW = 0LL;
        if ( !sourceString )
          goto LABEL_72;
        if ( PathIsFileSpecW(sourceString) )
        {
          FileNameW = (LPWSTR)v9;
          goto LABEL_72;
        }
      }
      FileNameW = PathFindFileNameW((LPCWSTR)v9);
LABEL_72:
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1805CC4F8;
        qword_1805CC4F8[0] = &ShellScreenClippingLogging::`vftable';
        qword_1805CC510 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC4F8, qword_1805CC510, v68);
        InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1805CC4F8);
      }
      v44 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v44 > 5u )
      {
        v108 = (__int64)FileNameW;
        v109[0] = (__int64)v40;
        v98 = v30;
        LODWORD(v83) = v41;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          (int)v44,
          (int)&dword_180508C25,
          (__int64)&v83,
          (__int64)&v98,
          (__int64)v109,
          (__int64)&v108);
      }
      LOBYTE(v72[0]) = 1;
      if ( sourceString )
      {
        v130 = sourceString;
        v131 = CoTaskMemFree;
        CoTaskMemFree((LPVOID)sourceString);
      }
      v45 = v92;
      v46 = v79;
      v79 = 0LL;
      v92->Ptr = v46;
      v74 |= 1u;
      if ( v79 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v79 + 16LL))(v79);
      return v45;
    }
  }
  HIBYTE(v72[0]) = 1;
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
    (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(v83 + 256),
    (struct IApplicationView *)Context);
  v69 = v92;
  v92->Ptr = 0LL;
  v74 = 1;
  if ( v9 )
  {
    v132 = v9;
    v133 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v9);
  }
  if ( sourceString )
  {
    v134 = sourceString;
    v100[0] = CoTaskMemFree;
    CoTaskMemFree((LPVOID)sourceString);
  }
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v72);
  if ( v79 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v79 + 16LL))(v79);
  return v69;
}
