/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800217B0
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18000B510 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18000B770 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18000D020 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18001DB70 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x1800681A0 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18006BCA0 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator() @ 0x18018DC20 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--operator().c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18018DE8C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     _lambda_58d0b42f459fba30bfac1d074d7fc715_::operator() @ 0x18018DF88 (_lambda_58d0b42f459fba30bfac1d074d7fc715_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x18018EFD0 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18018F580 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x18018FA44 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180190540 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180197834 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180197A80 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180021500 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180022310 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800223A0 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180022D50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800475CC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180049F34 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800685F8 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180088140 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180151630 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18018DAEC (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // edi
  __int64 v10; // rdi
  unsigned __int64 CurrentThreadId; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rcx
  char *v15; // rax
  __int64 v16; // r8
  char *v17; // rsi
  char *v18; // rdi
  char v19; // bl
  __int64 v20; // r8
  volatile signed __int32 *v21; // rdx
  struct IObjectArray *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // si
  volatile signed __int32 *v26; // rcx
  RTL_SRWLOCK *v27; // rbx
  int v29; // eax
  void *v30; // rbx
  _QWORD *v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rax
  void *v34; // rbx
  HANDLE ProcessHeap; // rax
  void *v36; // rbx
  void *v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  void *v40; // rbx
  void *v41; // rbx
  HANDLE v42; // rax
  void *v43; // rbx
  HANDLE v44; // rax
  void (*v45)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v46; // r15
  int v47; // eax
  __int64 v48; // rdx
  void *v49; // rbx
  HANDLE v50; // rax
  void *v51; // rbx
  HANDLE v52; // rax
  void (*v53)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v54[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v55; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v58; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  struct IObjectArray *v60; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v61; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v63; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v64[3]; // [rsp+68h] [rbp-98h] BYREF
  int v65; // [rsp+80h] [rbp-80h]
  int *v66; // [rsp+88h] [rbp-78h]
  int *v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+98h] [rbp-68h] BYREF
  char v69; // [rsp+9Ch] [rbp-64h]
  _OWORD v70[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v71; // [rsp+C0h] [rbp-40h] BYREF
  const char *v72; // [rsp+C8h] [rbp-38h]
  LPVOID v73; // [rsp+D0h] [rbp-30h]
  char v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  _BYTE v76[144]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v77; // [rsp+178h] [rbp+78h]
  __int128 v78; // [rsp+180h] [rbp+80h]
  void *v79; // [rsp+190h] [rbp+90h] BYREF
  __int64 v80; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v81; // [rsp+1A8h] [rbp+A8h]
  __int64 v82; // [rsp+1B0h] [rbp+B0h]
  struct IObjectArray *v83; // [rsp+1B8h] [rbp+B8h]
  void **v84; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v85[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v86; // [rsp+1D8h] [rbp+D8h]
  DWORD v87; // [rsp+1E0h] [rbp+E0h]
  int *v88; // [rsp+1E8h] [rbp+E8h]
  int *v89; // [rsp+1F0h] [rbp+F0h]
  int v90; // [rsp+1F8h] [rbp+F8h] BYREF
  char v91; // [rsp+1FCh] [rbp+FCh]
  char v92[32]; // [rsp+200h] [rbp+100h] BYREF
  int v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]
  LPVOID v95; // [rsp+230h] [rbp+130h]
  char v96; // [rsp+238h] [rbp+138h]
  __int64 v97; // [rsp+240h] [rbp+140h]
  char v98[144]; // [rsp+248h] [rbp+148h] BYREF
  LPVOID lpMem; // [rsp+2D8h] [rbp+1D8h]
  __int128 v100; // [rsp+2E0h] [rbp+1E0h]
  void *v101[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v64[0] = 0LL;
  v64[1] = &v63;
  v64[2] = 0LL;
  v65 = 0;
  v66 = &v71;
  v67 = &v68;
  v68 = 0;
  v69 = 0;
  v74 = 0;
  v71 = 0;
  v72 = "RaiseApplicationViewChange";
  v73 = 0LL;
  v75 = 1LL;
  v77 = 0LL;
  memset_0(v76, 0, sizeof(v76));
  v78 = 0LL;
  v79 = 0LL;
  v63 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(&v63, a2, a3, a4);
  v60 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 104), &v60);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v54[0]);
    goto LABEL_45;
  }
  if ( a3 == 7 )
  {
    *(_QWORD *)v54 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v54);
    if ( (**(int (__fastcall ***)(__int64, GUID *, int *))a2)(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v54) >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v54 + 40LL))(*(_QWORD *)v54, 0LL);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v29,
          v54[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v54);
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 600) + 40LL))(*(_QWORD *)(a1 + 600), a2, a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v80 = a2;
  v81 = a3;
  v82 = a4;
  v83 = v60;
  if ( v60 )
    ((void (__fastcall *)(struct IObjectArray *))v60->lpVtbl->AddRef)(v60);
  v84 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v85[0] = 0LL;
  v85[1] = &v84;
  v86 = 0LL;
  v87 = 0;
  v88 = 0LL;
  v10 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_79;
  CurrentThreadId = GetCurrentThreadId();
  v12 = (__int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = *v12;
  if ( !*v12 )
  {
LABEL_75:
    v31 = wil::details::ProcessHeapAlloc(0, 0x18uLL, CurrentThreadId % 0xA);
    v32 = (signed __int64)v31;
    if ( v31 )
    {
      *(_DWORD *)v31 = CurrentThreadId;
      v31[1] = 0LL;
      v14 = v31 + 2;
      v31[2] = 0LL;
      _m_prefetchw(v12);
      do
      {
        v33 = *v12;
        *(_QWORD *)(v32 + 8) = *v12;
      }
      while ( v33 != _InterlockedCompareExchange64(v12, v32, v33) );
      goto LABEL_15;
    }
LABEL_79:
    v14 = 0LL;
    goto LABEL_15;
  }
  while ( *(_DWORD *)v13 != (_DWORD)CurrentThreadId )
  {
    v13 = *(_QWORD *)(v13 + 8);
    if ( !v13 )
      goto LABEL_75;
  }
  v14 = (__int64 *)(v13 + 16);
LABEL_15:
  v85[0] = v14;
  if ( v14 )
  {
    v86 = *v14;
    *v14 = (__int64)v85;
    v87 = GetCurrentThreadId();
  }
  v89 = &v90;
  v90 = 0;
  v91 = 0;
  v96 = 0;
  v93 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v97 = 1LL;
  lpMem = 0LL;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v101[0] = 0LL;
  if ( v87 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v85);
  if ( v79 )
  {
    v89 = v67;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v101,
      &v79);
  }
  else
  {
    v15 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = 1;
      v18 = v15 + 8;
      *((_DWORD *)v15 + 2) = 0;
      v15[12] = 0;
      *((_DWORD *)v15 + 2) = v68;
      v15[12] = v69;
      *((_OWORD *)v15 + 1) = v70[0];
      *((_OWORD *)v15 + 2) = v70[1];
      v68 = 0;
      v69 = 0;
      *((_OWORD *)v15 + 3) = 0LL;
      *((_OWORD *)v15 + 4) = 0LL;
      *((_DWORD *)v15 + 12) = v71;
      *((_QWORD *)v15 + 7) = v72;
      if ( v15[72] )
      {
        v34 = (void *)*((_QWORD *)v15 + 8);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v34);
        v18[64] = 0;
      }
      *((_QWORD *)v18 + 7) = 0LL;
      *((_QWORD *)v18 + 7) = v73;
      v73 = 0LL;
      v18[64] = v74;
      v74 = 0;
      *((_QWORD *)v18 + 9) = v75;
      wil::StoredFailureInfo::StoredFailureInfo(v18 + 80, v76);
      *((_QWORD *)v18 + 30) = 0LL;
      if ( v101[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v101[0], 0xFFFFFFFF) == 1 )
        {
          v36 = v101[0];
          if ( v101[0] )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v101[0] + 8);
            operator delete(v36, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v101[0] = v17;
      v89 = (int *)v18;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v79, 0xFFFFFFFF) == 1 )
        {
          v37 = v79;
          if ( v79 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v79 + 8);
            operator delete(v37, (const struct std::nothrow_t *)0x100);
          }
        }
        v17 = (char *)v101[0];
      }
      v79 = v17;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)v17);
      v67 = v89;
      v66 = v89 + 10;
    }
  }
  v88 = v89 + 10;
  v84 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v9 = NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
         *(NotificationDispatcher **)(a1 + 672),
         &v80,
         v16);
  v84 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v19 = 1;
  v20 = 2147942974LL;
  v21 = (volatile signed __int32 *)v101[0];
  if ( v101[0] )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v84,
      SRWLock,
      2147942974LL);
    v21 = (volatile signed __int32 *)v101[0];
    if ( !v101[0] || *(_DWORD *)v101[0] != 1 )
    {
      v19 = 0;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v101);
      v21 = (volatile signed __int32 *)v101[0];
    }
    if ( SRWLock[0] )
    {
      ReleaseSRWLockExclusive(SRWLock[0]);
      v21 = (volatile signed __int32 *)v101[0];
    }
    if ( !v19 )
      goto LABEL_30;
    v20 = 2147942974LL;
  }
  if ( *v89 == 1 )
  {
    v38 = v89[21];
    v55 = v38;
    v39 = 2147942974LL;
    if ( v38 < 0 )
      v39 = (unsigned int)v38;
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v89,
      v39,
      &v55);
    ((void (__fastcall *)(void ***))v84[1])(&v84);
    v21 = (volatile signed __int32 *)v101[0];
  }
LABEL_30:
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21, 0xFFFFFFFF) == 1 )
    {
      v40 = v101[0];
      if ( v101[0] )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v101[0] + 8);
        operator delete(v40, (const struct std::nothrow_t *)0x100);
      }
    }
    v101[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v41 = lpMem;
      v42 = GetProcessHeap();
      HeapFree(v42, 0, v41);
    }
    lpMem = 0LL;
    *(_QWORD *)&v100 = 0LL;
  }
  if ( v96 )
  {
    v43 = v95;
    v44 = GetProcessHeap();
    HeapFree(v44, 0, v43);
    v96 = 0;
  }
  v95 = 0LL;
  if ( v90 == 1 )
  {
    v90 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805CC218;
      qword_1805CC218[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC230 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC218, qword_1805CC230, v45);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC218);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v92);
  }
  v90 = 3;
  if ( v87 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v85);
  v22 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v22->lpVtbl->Release)(
      v22,
      v21,
      v20);
  }
  v23 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 16LL))(v23, v21, v20);
  }
  v24 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 16LL))(v24, v21, v20);
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v54[0]);
  else
    v9 = 0;
LABEL_45:
  if ( v60 )
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v60->lpVtbl->Release)(
      v60,
      v21,
      v20);
  v63 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v25 = 1;
  v26 = (volatile signed __int32 *)v79;
  if ( !v79 )
    goto LABEL_68;
  v27 = (RTL_SRWLOCK *)((char *)v79 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)v79 + 31);
  v26 = (volatile signed __int32 *)v79;
  if ( !v79 || *(_DWORD *)v79 != 1 )
  {
    v25 = 0;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v79, 0xFFFFFFFF) == 1 )
      {
        v46 = v79;
        if ( v79 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v79 + 8);
          operator delete(v46, (const struct std::nothrow_t *)0x100);
        }
      }
      v26 = 0LL;
      v79 = 0LL;
    }
  }
  if ( v27 )
  {
    ReleaseSRWLockExclusive(v27);
    v26 = (volatile signed __int32 *)v79;
  }
  if ( v25 )
  {
LABEL_68:
    if ( *v67 == 1 )
    {
      v47 = v67[21];
      v57 = v47;
      v48 = 2147942974LL;
      if ( v47 < 0 )
        v48 = (unsigned int)v47;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v67,
        v48,
        &v57);
      ((void (__fastcall *)(void ***))v63[1])(&v63);
      v26 = (volatile signed __int32 *)v79;
    }
  }
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
    {
      v30 = v79;
      if ( v79 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v79 + 8);
        operator delete(v30, (const struct std::nothrow_t *)0x100);
      }
    }
    v79 = 0LL;
  }
  if ( v77 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v77, 0xFFFFFFFF) == 1 )
    {
      v49 = v77;
      v50 = GetProcessHeap();
      HeapFree(v50, 0, v49);
    }
    v77 = 0LL;
    *(_QWORD *)&v78 = 0LL;
  }
  if ( v74 )
  {
    v51 = v73;
    v52 = GetProcessHeap();
    HeapFree(v52, 0, v51);
    v74 = 0;
  }
  v73 = 0LL;
  if ( v68 == 1 )
  {
    v68 = 2;
    v61 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v58, &v61) && v58 )
    {
      v61 = qword_1805CC218;
      qword_1805CC218[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC230 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC218, qword_1805CC230, v53);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC218);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v61 + 1), v70);
  }
  v68 = 3;
  if ( v65 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v64);
  return (unsigned int)v9;
}
