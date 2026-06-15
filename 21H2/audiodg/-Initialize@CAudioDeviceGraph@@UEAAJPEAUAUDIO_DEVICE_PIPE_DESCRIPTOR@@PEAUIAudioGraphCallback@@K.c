/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140001EB0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140003338 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004190 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053BC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007324 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400083B0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B880 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E140 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x140011344 (--$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DDCC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U?$_tlgWrapSz@G@@U4@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55533AEBU?$_tlgWrapSz@G@@635@Z @ 0x140048E50 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  int *v11; // r15
  HRESULT v12; // eax
  LPCRITICAL_SECTION v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // r13
  HRESULT Instance; // eax
  int v19; // eax
  LPCRITICAL_SECTION v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  HRESULT v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  void *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  struct CPipeInstance *v37; // r15
  __int64 v38; // r13
  struct ATL::CAtlPlex *v39; // r8
  int v40; // edx
  _QWORD *v41; // rcx
  int i; // edx
  __int64 *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int16 *v46; // r15
  struct CPipeInstance *v47; // rax
  int v48; // ebx
  __int64 v49; // rcx
  unsigned int v50; // r8d
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // r9
  CPipeInstance *v54; // rcx
  __int64 v56; // rcx
  CPipeInstance *v57; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  unsigned int v59; // edx
  CPipeInstance *v60; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v61; // rcx
  unsigned int v62; // edx
  CPipeInstance *v63; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v64; // rcx
  unsigned int v65; // edx
  CPipeInstance *v66; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v67; // rcx
  DWORD LastError; // ebx
  unsigned int v69; // edx
  CPipeInstance *v70; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v71; // rcx
  __int64 v72; // rcx
  HRESULT v73; // eax
  unsigned int v74; // edx
  CPipeInstance *v75; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v76; // rcx
  int v77; // eax
  unsigned int v78; // edx
  CPipeInstance *v79; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v80; // rcx
  unsigned int v81; // edx
  CPipeInstance *v82; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v83; // rcx
  int v84; // ecx
  int ppv; // [rsp+20h] [rbp-168h]
  int ppva; // [rsp+20h] [rbp-168h]
  int ppvb; // [rsp+20h] [rbp-168h]
  int ppvc; // [rsp+20h] [rbp-168h]
  struct CPipeInstance *v89; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int8 v90; // [rsp+88h] [rbp-100h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-F8h] BYREF
  LPVOID v92; // [rsp+98h] [rbp-F0h] BYREF
  char *v93; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 *v94; // [rsp+A8h] [rbp-E0h] BYREF
  struct IAudioGraphCallback *v95; // [rsp+B0h] [rbp-D8h] BYREF
  double v96; // [rsp+B8h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION v97; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int16 *v98; // [rsp+C8h] [rbp-C0h] BYREF
  CAudioDeviceGraph *v99; // [rsp+D0h] [rbp-B8h] BYREF
  GUID *v100; // [rsp+D8h] [rbp-B0h] BYREF
  char *v101; // [rsp+E0h] [rbp-A8h] BYREF
  CAudioDeviceGraph *v102; // [rsp+E8h] [rbp-A0h] BYREF
  char v103; // [rsp+F0h] [rbp-98h]
  CAudioDeviceGraph *v104; // [rsp+F8h] [rbp-90h] BYREF
  char v105; // [rsp+100h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v106; // [rsp+108h] [rbp-80h]
  __int64 v107; // [rsp+118h] [rbp-70h] BYREF
  float v108; // [rsp+120h] [rbp-68h]
  int v109; // [rsp+124h] [rbp-64h]
  BOOL v110; // [rsp+128h] [rbp-60h]
  GUID v111; // [rsp+130h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  LODWORD(v93) = a4;
  v95 = a3;
  v99 = this;
  v96 = *(double *)&a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v100 = (GUID *)((char *)this + 264);
  v97 = (LPCRITICAL_SECTION)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v106 = v7;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x80004003LL,
      ppv);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147500035LL;
  }
  if ( *((_DWORD *)this + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0010LL,
      ppv);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2289827856LL;
  }
  v8 = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8,
      ppv);
LABEL_65:
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)a2 + 4);
  if ( (double)(int)v10 > 25000000.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x80070057LL,
      ppv);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147942487LL;
  }
  *((_QWORD *)this + 16) = v10;
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 35);
  *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2 + 152);
  v98 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v11 = (int *)v98;
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 25);
  *((float *)this + 34) = (float)v11[1];
  v92 = 0LL;
  v12 = CoCreateInstance(
          &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
          0LL,
          0x17u,
          &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
          &v92);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v12,
      ppva);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v92);
    goto LABEL_65;
  }
  lpCriticalSection = 0LL;
  (**(void (__fastcall ***)(LPVOID, GUID *, LPCRITICAL_SECTION *))v92)(
    v92,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &lpCriticalSection);
  v13 = lpCriticalSection;
  v15 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v14,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  ((void (__fastcall *)(LPCRITICAL_SECTION, _QWORD))v13->DebugInfo->ProcessLocksList.Blink)(v13, *(_QWORD *)(v15 + 8));
  if ( lpCriticalSection )
    ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
  v107 = *((_QWORD *)a2 + 4);
  v108 = (float)v11[1];
  v109 = *((unsigned __int16 *)v11 + 1);
  v110 = *((_DWORD *)a2 + 25) == 1;
  v16 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, char *))(*(_QWORD *)v92 + 24LL))(
          v92,
          *((_QWORD *)a2 + 7),
          &v107,
          (char *)this + 344);
  v9 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v16,
      ppva);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v92);
    goto LABEL_65;
  }
  v17 = (_QWORD *)((char *)this + 144);
  v94 = (__int64 *)((char *)this + 144);
  Instance = CoCreateInstance(
               &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
               0LL,
               0x17u,
               &GUID_cfbc31a5_5756_48a3_aa45_b6b6dd4c363e,
               (LPVOID *)this + 18);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance,
      ppvb);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v92);
    goto LABEL_65;
  }
  v104 = this;
  v105 = 1;
  v19 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD))(*(_QWORD *)*v17 + 24LL))(
          *v17,
          *((_DWORD *)this + 35) != 0,
          *((_QWORD *)this + 43));
  v9 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v19,
      ppvb);
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
    goto LABEL_62;
  }
  lpCriticalSection = 0LL;
  (**(void (__fastcall ***)(_QWORD, GUID *, LPCRITICAL_SECTION *))*v17)(
    *v17,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &lpCriticalSection);
  v20 = lpCriticalSection;
  v22 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v21,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  ((void (__fastcall *)(LPCRITICAL_SECTION, _QWORD))v20->DebugInfo->ProcessLocksList.Blink)(v20, *(_QWORD *)(v22 + 8));
  if ( lpCriticalSection )
    ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 152);
  v23 = CoCreateInstance(
          &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
          0LL,
          0x17u,
          &GUID_2823d585_8d44_4969_8653_fca6e4afab6b,
          (LPVOID *)this + 19);
  v9 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v23,
      ppvc);
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v102 = this;
  v103 = 1;
  v89 = 0LL;
  v9 = CPipeInstance::CreateDevicePipeInstance(*v17, *((_QWORD *)this + 43), a2, &v89);
  if ( v9 < 0 )
  {
    v57 = v89;
    v89 = 0LL;
    if ( v57 )
      CPipeInstance::`scalar deleting destructor'(v57, v24);
    DebugInfo = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
    }
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
LABEL_62:
    *v17 = 0LL;
    goto LABEL_63;
  }
  v25 = CPipeInstance::Initialize(v89);
  v9 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v25,
      ppvc);
    v60 = v89;
    v89 = 0LL;
    if ( v60 )
      CPipeInstance::`scalar deleting destructor'(v60, v59);
    v61 = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v61->Type + 16LL))(v61);
    }
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v26 = CPipeInstance::ConnectAPOs(v89, v95);
  v9 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v26,
      ppvc);
    v63 = v89;
    v89 = 0LL;
    if ( v63 )
      CPipeInstance::`scalar deleting destructor'(v63, v62);
    v64 = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v64->Type + 16LL))(v64);
    }
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v27 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((__int64)v89 + 16)
                  + 32LL);
  v28 = *((_QWORD *)this + 48);
  *((_QWORD *)this + 48) = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = *(struct Windows::Media::Devices::IAudioDeviceModulesManager **)(v27 + 24);
  *((_QWORD *)this + 48) = v29;
  v30 = *(_QWORD *)(v27 + 24);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    v29 = (struct Windows::Media::Devices::IAudioDeviceModulesManager *)*((_QWORD *)this + 48);
  }
  v31 = CPipeInstance::AddConnectionsAndActivateAPOs(v89, v29);
  v9 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v31,
      ppvc);
    v66 = v89;
    v89 = 0LL;
    if ( v66 )
      CPipeInstance::`scalar deleting destructor'(v66, v65);
    v67 = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v67->Type + 16LL))(v67);
    }
    v56 = *v17;
    if ( !*v17 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v90 = ((unsigned int)v93 & 0x400001) != 0;
  v32 = (void *)*((_QWORD *)this + 49);
  if ( v32 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v32);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 49) = 0LL;
  mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)a2 + 7), (char *)this + 392);
  v33 = *((_QWORD *)a2 + 21) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v33 )
    v33 = *((_QWORD *)a2 + 22) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v33 )
  {
    v72 = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    v73 = CoCreateInstance(
            (const IID *const)((char *)a2 + 168),
            0LL,
            0x17u,
            &GUID_c4e70434_407d_416b_94be_9717b79065fb,
            (LPVOID *)this + 50);
    v9 = v73;
    if ( v73 >= 0 )
    {
      v77 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 50) + 24LL))(
              *((_QWORD *)this + 50),
              (char *)a2 + 184);
      v9 = v77;
      if ( v77 >= 0 )
        goto LABEL_30;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v77,
        ppvc);
      v79 = v89;
      v89 = 0LL;
      if ( v79 )
        CPipeInstance::`scalar deleting destructor'(v79, v78);
      v80 = lpCriticalSection->DebugInfo;
      if ( lpCriticalSection->DebugInfo )
      {
        lpCriticalSection->DebugInfo = 0LL;
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v80->Type + 16LL))(v80);
      }
      v56 = *v94;
      if ( !*v94 )
        goto LABEL_64;
      *v94 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v73,
        ppvc);
      v75 = v89;
      v89 = 0LL;
      if ( v75 )
        CPipeInstance::`scalar deleting destructor'(v75, v74);
      v76 = lpCriticalSection->DebugInfo;
      if ( lpCriticalSection->DebugInfo )
      {
        lpCriticalSection->DebugInfo = 0LL;
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v76->Type + 16LL))(v76);
      }
      v56 = *v94;
      if ( !*v94 )
        goto LABEL_64;
      *v94 = 0LL;
    }
LABEL_63:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
LABEL_64:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v92);
    goto LABEL_65;
  }
  v34 = *((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  v35 = Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>((char *)this + 400);
  v9 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v35,
      ppvc);
    v70 = v89;
    v89 = 0LL;
    if ( v70 )
      CPipeInstance::`scalar deleting destructor'(v70, v69);
    v71 = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v71->Type + 16LL))(v71);
    }
    v56 = *v94;
    if ( !*v94 )
      goto LABEL_64;
    *v94 = 0LL;
    goto LABEL_63;
  }
LABEL_30:
  v36 = CAudioDeviceGraph::InitializePump(this, v89, a2, v90);
  v9 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v36,
      ppvc);
    v82 = v89;
    v89 = 0LL;
    if ( v82 )
      CPipeInstance::`scalar deleting destructor'(v82, v81);
    v83 = lpCriticalSection->DebugInfo;
    if ( lpCriticalSection->DebugInfo )
    {
      lpCriticalSection->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v83->Type + 16LL))(v83);
    }
    v56 = *v94;
    if ( !*v94 )
      goto LABEL_64;
    *v94 = 0LL;
    goto LABEL_63;
  }
  v95 = (CAudioDeviceGraph *)((char *)this + 216);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v101 = (char *)this + 216;
  v37 = v89;
  v38 = *((_QWORD *)this + 21);
  if ( !*((_QWORD *)this + 25) )
  {
    v39 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 24, *((unsigned int *)this + 52), 0x18uLL);
    if ( !v39 )
      ATL::AtlThrowImpl(-2147024882);
    v40 = *((_DWORD *)this + 52);
    v41 = (_QWORD *)((char *)v39 + 16 * (v40 - 1) + 8 * (unsigned int)(v40 - 1) + 8);
    for ( i = v40 - 1; i >= 0; --i )
    {
      *v41 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = v41;
      v41 -= 3;
    }
  }
  v43 = (__int64 *)*((_QWORD *)this + 25);
  v44 = *v43;
  v43[2] = (__int64)v37;
  *((_QWORD *)this + 25) = v44;
  v43[1] = 0LL;
  *v43 = v38;
  ++*((_QWORD *)this + 23);
  v45 = *((_QWORD *)this + 21);
  if ( v45 )
    *(_QWORD *)(v45 + 8) = v43;
  else
    *((_QWORD *)this + 22) = v43;
  *((_QWORD *)this + 21) = v43;
  v46 = v98;
  if ( this != (CAudioDeviceGraph *)-216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v47 = v89;
  v89 = 0LL;
  *((_QWORD *)this + 20) = v47;
  *((_DWORD *)this + 64) = 1;
  *((_DWORD *)this + 28) = 0;
  if ( *v46 == 0xFFFE )
  {
    v111 = *(GUID *)(v46 + 12);
  }
  else
  {
    v111 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v111.Data1 = *v46;
  }
  v48 = 0;
  v49 = 0LL;
  v50 = *((_DWORD *)a2 + 24);
  if ( v50 )
  {
    while ( 1 )
    {
      v51 = *((_QWORD *)a2 + 2 * (unsigned int)v49 + 25) - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
      if ( !v51 )
        v51 = *((_QWORD *)a2 + 2 * (unsigned int)v49 + 26) - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
      if ( !v51 )
        break;
      v49 = (unsigned int)(v49 + 1);
      if ( (unsigned int)v49 >= v50 )
        goto LABEL_46;
    }
    v48 = 1;
  }
LABEL_46:
  v53 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                      v49,
                      _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v53 > 4u )
  {
    v52 = 1;
    if ( (*(_QWORD *)(v53 + 16) & 0x400000000001LL) != 0
      && (*(_QWORD *)(v53 + 24) & 0x400000000001LL) == *(_QWORD *)(v53 + 24) )
    {
      v84 = *((_DWORD *)this + 35);
      v96 = (double)(int)*((_QWORD *)this + 16) / 10000000.0;
      LODWORD(v93) = v48;
      v100 = &v111;
      v95 = (struct IAudioGraphCallback *)*((_QWORD *)this + 49);
      v99 = (CAudioDeviceGraph *)*((_QWORD *)a2 + 7);
      v102 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)((char *)a2 + 120);
      v104 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)((char *)a2 + 104);
      LODWORD(v97) = v110;
      LODWORD(v98) = v109;
      *(float *)&v94 = v108;
      LODWORD(lpCriticalSection) = v84;
      v101 = (char *)this + 352;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v53,
        (unsigned int)&unk_14007C42E,
        (_DWORD)this + 352,
        v53,
        (__int64)&v101,
        (__int64)&v96,
        (__int64)&lpCriticalSection,
        (__int64)&v94,
        (__int64)&v98,
        (__int64)&v97,
        (__int64)&v104,
        (__int64)&v102,
        (__int64)&v99,
        (__int64)&v95,
        (__int64)&v100,
        (__int64)&v93);
    }
  }
  v54 = v89;
  v89 = 0LL;
  if ( v54 )
    CPipeInstance::`scalar deleting destructor'(v54, v52);
  if ( v92 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v92 + 16LL))(v92);
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
