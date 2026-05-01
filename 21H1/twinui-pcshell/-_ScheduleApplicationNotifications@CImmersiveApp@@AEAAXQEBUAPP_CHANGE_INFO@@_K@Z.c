/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180061520
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001DB00 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023310 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800238B8 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18006FA00 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180077070 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180157C20 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180159AD0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180159B50 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180159F80 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18015CCB0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18015EF98 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180061F68 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008DAB4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180155A3C (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  const struct APP_CHANGE_INFO *v9; // rax
  _DWORD *v10; // r12
  bool v11; // bl
  _QWORD *v12; // r14
  LPUNKNOWN v13; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v15; // rcx
  LPUNKNOWN v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int v19; // esi
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  _DWORD *v23; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  volatile int *v26; // rdx
  int v27; // edi
  signed __int64 v28; // rax
  unsigned int v29; // ecx
  signed __int64 v30; // rtt
  _DWORD *v31; // rbx
  volatile signed __int64 *v32; // r10
  signed __int64 v33; // rax
  unsigned int v34; // ecx
  signed __int64 v35; // rtt
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r8
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  int *v43; // rcx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // r9
  __int64 v48; // r10
  int *v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  _BYTE *v52; // rax
  _BYTE *v53; // r14
  char *v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int8 (__fastcall *v57)(CImmersiveApp *); // rax
  __int64 v58; // r8
  unsigned __int64 i; // rdx
  __int64 v60; // rbx
  __int64 v61; // r15
  char *v62; // r12
  _QWORD *v63; // rax
  const struct std::nothrow_t *v64; // rdx
  _QWORD *v65; // r14
  __int64 v66; // rbx
  __int64 v67; // rcx
  _QWORD *v68; // r13
  _DWORD *v69; // rbx
  _DWORD *v70; // rax
  _DWORD *v71; // rdi
  __int64 v72; // rcx
  int v73; // [rsp+20h] [rbp-89h]
  int v74; // [rsp+20h] [rbp-89h]
  __int64 v75; // [rsp+38h] [rbp-71h] BYREF
  __int64 v76; // [rsp+40h] [rbp-69h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-61h] BYREF
  volatile signed __int64 *v78; // [rsp+50h] [rbp-59h] BYREF
  __int64 v79; // [rsp+58h] [rbp-51h] BYREF
  __int64 v80; // [rsp+60h] [rbp-49h] BYREF
  __int64 v81; // [rsp+68h] [rbp-41h]
  int v82; // [rsp+70h] [rbp-39h] BYREF
  void *v83; // [rsp+78h] [rbp-31h]
  _DWORD *v84; // [rsp+80h] [rbp-29h]
  __int64 v85; // [rsp+88h] [rbp-21h]
  signed __int64 v86; // [rsp+90h] [rbp-19h]
  signed __int64 v87; // [rsp+98h] [rbp-11h]
  _QWORD *v88; // [rsp+A0h] [rbp-9h]
  signed __int64 v89; // [rsp+A8h] [rbp-1h]
  signed __int64 v90; // [rsp+B0h] [rbp+7h]
  _QWORD *v91; // [rsp+B8h] [rbp+Fh] BYREF
  char v92; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  char v95; // [rsp+110h] [rbp+67h]
  bool v96; // [rsp+128h] [rbp+7Fh]
  unsigned int Ptr; // [rsp+128h] [rbp+7Fh]

  v76 = 0LL;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL))(
    (char *)this + 48,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v76);
  v6 = v76;
  v7 = v76;
  v81 = v76;
  v85 = v76;
  if ( v76 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
    v6 = v76;
  }
  if ( v6 )
  {
    v76 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v7 )
    goto LABEL_140;
  if ( *((_BYTE *)this + 808) )
  {
    if ( (*((_BYTE *)this + 584) & 1) == 0 )
    {
LABEL_14:
      CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
      *((_BYTE *)this + 808) = 0;
      goto LABEL_15;
    }
    if ( *((_QWORD *)this + 59) )
    {
      v8 = 0LL;
      if ( a3 )
      {
        v9 = a2;
        while ( *(_DWORD *)v9 != 8 )
        {
          ++v8;
          v9 = (const struct APP_CHANGE_INFO *)((char *)v9 + 16);
          if ( v8 >= a3 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v10 = (_DWORD *)((char *)this + 128);
    v11 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    v96 = v11;
    v78 = 0LL;
    v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      v12[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v12[5] = 0LL;
      ppunkMarshal = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v13 = ppunkMarshal;
        QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
        v15 = v12[5];
        if ( v15 )
        {
          v12[5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
          v13,
          &GUID_00000003_0000_0000_c000_000000000046,
          v12 + 5);
        v11 = v96;
      }
      v16 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v16->lpVtbl->Release)(v16);
      }
      v12[7] = 1LL;
      *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
      v12[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v12[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v12 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
      v12[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v12[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_BYTE *)v12 + 64) = v11;
      v78 = v12;
      v84 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      v17 = v12[7];
      v86 = v17;
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64(v12 + 7, v17 + 1, v17);
          if ( v18 != v17 )
            continue;
        }
        goto LABEL_33;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
LABEL_33:
      v19 = v10[10];
      v20 = 0LL;
      v88 = 0LL;
      v21 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v22 = v21;
      if ( v21 )
      {
        *((_DWORD *)v21 + 3) = 1;
        *v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v22[2] = v10;
        v23 = v84;
        v22[3] = v84;
        if ( v23 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
        v22[4] = v12;
        v24 = v12[7];
        v87 = v24;
        while ( v24 >= 0 )
        {
          if ( (_DWORD)v24 != 0x7FFFFFFF )
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange64(v12 + 7, v24 + 1, v24);
            if ( v25 != v24 )
              continue;
          }
          goto LABEL_44;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v24 + 16));
LABEL_44:
        *v22 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vftable';
        v20 = v22;
        v88 = v22;
      }
      v74 = (int)v20;
      v27 = SHTaskPoolQueueTask(3LL, 2LL, v19);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v89 = v12[7];
      v28 = v89;
      while ( v28 >= 0 )
      {
        if ( (_DWORD)v28 == 0x7FFFFFFF )
          goto LABEL_56;
        v29 = v28 - 1;
        v30 = v28;
        v28 = _InterlockedCompareExchange64(v12 + 7, v28 - 1, v28);
        if ( v30 == v28 )
          goto LABEL_53;
      }
      v29 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v28 + 16), v26);
LABEL_53:
      if ( !v29 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v12 + 56LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
LABEL_56:
      v31 = v84;
      if ( v84 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v84 + 16LL))(v84);
      if ( v27 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v27,
          v74);
      if ( v31 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 16LL))(v31);
      v32 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        v33 = *((_QWORD *)v32 + 7);
        v90 = v33;
        while ( v33 >= 0 )
        {
          if ( (_DWORD)v33 == 0x7FFFFFFF )
            goto LABEL_72;
          v34 = v33 - 1;
          v35 = v33;
          v33 = _InterlockedCompareExchange64(v32 + 7, v33 - 1, v33);
          if ( v35 == v33 )
            goto LABEL_69;
        }
        v34 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v33 + 16), v26);
LABEL_69:
        if ( !v34 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v32 + 56))(v32, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
LABEL_72:
      v7 = v85;
      v81 = v85;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL,
        v73);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v78);
    }
    v75 = 0LL;
    v80 = 0LL;
    v79 = 0LL;
    v36 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
            v7,
            &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
            &v79);
    if ( v36 >= 0 )
      v36 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v79 + 24LL))(
              v79,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v80);
    v37 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    if ( v36 >= 0 )
      v36 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v80 + 24LL))(v80, &v75);
    v38 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    if ( v36 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v75 + 24LL))(v75, &v82) >= 0 && v82 )
    {
      v39 = a3;
      v40 = 0LL;
      if ( a3 >= 4 )
      {
        v41 = 0LL;
        v42 = 0LL;
        v43 = (int *)((char *)a2 + 32);
        do
        {
          *(double *)v44.m128i_i64 = dbl_1805970F0[4 * *(v43 - 8)];
          *(double *)&v44.m128i_i64[1] = dbl_1805970F0[4 * *(v43 - 4)];
          v41 = _mm_add_epi64(v44, v41);
          *(double *)v44.m128i_i64 = dbl_1805970F0[4 * *v43];
          *(double *)&v44.m128i_i64[1] = dbl_1805970F0[4 * v43[4]];
          v45 = _mm_add_epi64(v44, v42);
          v42 = v45;
          v40 += 4LL;
          v43 += 16;
        }
        while ( v40 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
        v46 = _mm_add_epi64(v41, v45);
        v39 = a3 + _mm_add_epi64(v46, _mm_srli_si128(v46, 8)).m128i_u64[0];
      }
      v47 = 0LL;
      v48 = 0LL;
      if ( v40 < a3 )
      {
        if ( a3 - v40 >= 2 )
        {
          v49 = (int *)((char *)a2 + 16 * v40);
          v50 = ((a3 - v40 - 2) >> 1) + 1;
          v40 += 2 * v50;
          do
          {
            v47 += *((_QWORD *)&unk_1805970E0 + 4 * *v49 + 2);
            v48 += *((_QWORD *)&unk_1805970E0 + 4 * v49[4] + 2);
            v49 += 8;
            --v50;
          }
          while ( v50 );
        }
        if ( v40 < a3 )
          v39 += *((_QWORD *)&unk_1805970E0 + 4 * *((int *)a2 + 4 * v40) + 2);
        v39 += v47 + v48;
      }
      v51 = 16 * v39;
      if ( !is_mul_ok(v39, 0x10uLL) )
        v51 = -1LL;
      v52 = operator new[](v51, (const struct std::nothrow_t *)&std::nothrow);
      v53 = v52;
      v83 = v52;
      if ( v52 )
      {
        v54 = v52;
        if ( a3 )
        {
          do
          {
            *(_OWORD *)v54 = *(_OWORD *)a2;
            if ( *(_DWORD *)v54 != 6 && *(_DWORD *)v54 != 12 && !*((_QWORD *)v54 + 1) )
            {
              v55 = 0LL;
              if ( *((_QWORD *)this + 59) )
                v55 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 58) + 32LL))(**((_QWORD **)this + 58));
              *((_QWORD *)v54 + 1) = v55;
            }
            v56 = 32LL * *(int *)a2;
            if ( *(_QWORD *)((char *)&unk_1805970E0 + v56 + 8) )
            {
              v57 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_1805970E0 + v56 + 24);
              if ( !v57 || v57(this) )
              {
                v58 = *((_QWORD *)v54 + 1);
                for ( i = 0LL; i < *(_QWORD *)((char *)&unk_1805970E0 + v56 + 16); ++i )
                {
                  v54 += 16;
                  *(_DWORD *)v54 = *(_DWORD *)(*(_QWORD *)((char *)&unk_1805970E0 + v56 + 8) + 4 * i);
                  *((_QWORD *)v54 + 1) = v58;
                }
              }
            }
            v54 += 16;
            a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
            --a3;
          }
          while ( a3 );
          v7 = v81;
        }
        v60 = (v54 - v53) >> 4;
        v61 = v75;
        v62 = (char *)this + 88;
        if ( this != (CImmersiveApp *)-88LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v62 + 8LL))((char *)this + 88);
        if ( v61 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
        v63 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v65 = v63;
        if ( v63 )
        {
          v63[4] = 0LL;
          v63[1] = v83;
          v63[2] = v60;
          v62 = 0LL;
          v63[3] = (char *)this + 88;
          v66 = v61;
          v61 = 0LL;
          v67 = v63[4];
          if ( v67 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
          v65[4] = v66;
          v83 = 0LL;
          *v65 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v65 + 10) = 0;
        }
        else
        {
          v65 = 0LL;
        }
        if ( v65 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v65 + 8LL))(v65);
          v95 = *((_BYTE *)this + 759);
          v68 = v65;
          v91 = v65;
          (*(void (__fastcall **)(_QWORD *))(*v65 + 8LL))(v65);
          v92 = v95;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v69 = 0LL;
          v81 = 0LL;
          v70 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v71 = v70;
          if ( v70 )
          {
            v70[3] = 1;
            *(_QWORD *)v70 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v71 + 2) = 0LL;
            if ( v71 + 4 != (_DWORD *)&v91 )
            {
              *((_QWORD *)v71 + 2) = v65;
              v68 = 0LL;
            }
            *((_BYTE *)v71 + 24) = v95;
            *(_QWORD *)v71 = off_18046DC10;
            v69 = v71;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr);
          if ( v69 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v69 + 16LL))(v69);
          if ( v68 )
            (*(void (__fastcall **)(_QWORD *))(*v68 + 16LL))(v68);
          (*(void (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
        }
        operator delete(v83, v64);
        if ( v61 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
        if ( v62 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v62 + 16LL))(v62);
      }
    }
    v72 = v75;
    if ( v75 )
    {
      v75 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    }
  }
LABEL_140:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
