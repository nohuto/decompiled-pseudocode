/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18001B400
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CA20 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017BAC (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180019A74 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18001A53C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18001A618 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18001ADC0 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18001B074 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18001C6E0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180043568 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056A40 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006FC98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18006FC98.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x180094434 (--$Start@AEAPEAG@SetViewPosition@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1800948B8 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x180094CAC (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180151630 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180160FAC (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180178F58 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18017E0E4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x180180F80 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180182FC0 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180183464 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     WPP_SF_SdL @ 0x180184098 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x180184280 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        RTL_SRWLOCK *a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // r14
  __int128 *v13; // r13
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct IApplicationPresentationLayer *v17; // rdx
  unsigned int v18; // esi
  unsigned __int8 v19; // r15
  struct IUnknown *v20; // rdx
  char v21; // r12
  bool v22; // cl
  int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // r12d
  bool v26; // al
  PSRWLOCK v27; // r15
  struct IUnknown *v28; // rbx
  struct IUnknown *v29; // rax
  PVOID v30; // rcx
  struct IUnknown **v31; // r15
  bool v32; // si
  bool v33; // zf
  unsigned int v34; // ebx
  struct IUnknown *v35; // rdx
  bool IsApplicationWindowGhost; // al
  __int64 v37; // rcx
  PSRWLOCK v38; // rbx
  char *v39; // rdx
  _DWORD *v40; // rdx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rbx
  int v44; // eax
  const RECT *v45; // rdx
  int v46; // ecx
  void (__fastcall *v47)(__int64, struct IUnknown ***); // rbx
  int v48; // edx
  int v49; // r8d
  char v50; // al
  void (__fastcall *v51)(__int64, __int64 *); // rbx
  char *Ptr; // rax
  struct IUnknown *v53; // rcx
  volatile signed __int32 *v54; // rdx
  char v55; // bl
  int v56; // eax
  __int64 v57; // rdx
  void *v58; // rdi
  void *v59; // rbx
  HANDLE ProcessHeap; // rax
  void *v61; // rbx
  HANDLE v62; // rax
  void (*v63)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v65; // [rsp+20h] [rbp-E0h]
  char v66; // [rsp+30h] [rbp-D0h]
  char v67; // [rsp+30h] [rbp-D0h]
  char v68; // [rsp+30h] [rbp-D0h]
  bool v69; // [rsp+31h] [rbp-CFh]
  char v70; // [rsp+32h] [rbp-CEh]
  __int64 v71; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v73; // [rsp+44h] [rbp-BCh] BYREF
  struct IUnknown **v74; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v76; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v78; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h] BYREF
  __int64 v80; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v82[8]; // [rsp+88h] [rbp-78h] BYREF
  HWND hWnd; // [rsp+90h] [rbp-70h] BYREF
  __int64 v84; // [rsp+98h] [rbp-68h]
  PVOID v85; // [rsp+A0h] [rbp-60h]
  struct IUnknown *v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h]
  __int128 v91; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v92; // [rsp+E0h] [rbp-20h]
  __int128 v93; // [rsp+F0h] [rbp-10h]
  _QWORD v94[2]; // [rsp+100h] [rbp+0h] BYREF
  void **v95; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v96[24]; // [rsp+118h] [rbp+18h] BYREF
  int v97; // [rsp+130h] [rbp+30h]
  _DWORD *v98; // [rsp+140h] [rbp+40h]
  int v99; // [rsp+148h] [rbp+48h]
  _BYTE v100[48]; // [rsp+150h] [rbp+50h] BYREF
  LPVOID v101; // [rsp+180h] [rbp+80h]
  char v102; // [rsp+188h] [rbp+88h]
  LPVOID lpMem; // [rsp+228h] [rbp+128h]
  __int64 v104; // [rsp+230h] [rbp+130h]
  void *v105; // [rsp+240h] [rbp+140h] BYREF
  _OWORD v106[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v107; // [rsp+270h] [rbp+170h]
  int v108; // [rsp+278h] [rbp+178h]
  _BYTE v109[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v110; // [rsp+2B8h] [rbp+1B8h]
  int v111; // [rsp+2D4h] [rbp+1D4h]
  int v112; // [rsp+2D8h] [rbp+1D8h]
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v71 = a2;
  v12 = a1;
  v84 = a1;
  SRWLock = a8;
  CImmersiveAppTelemetry::SetViewPosition::Start<unsigned short * &>((CImmersiveAppTelemetry::SetViewPosition *)&v95);
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  if ( a3 )
  {
    v91 = *a3;
    v92 = a3[1];
    v93 = a3[2];
  }
  v13 = &v91;
  if ( !a3 )
    v13 = 0LL;
  if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v12 + 344LL))(v12, v106) >= 0 )
  {
    if ( a3 )
    {
      DWORD2(v91) = DWORD2(v106[0]);
      DWORD1(v93) = HIDWORD(v107);
    }
    else
    {
      v91 = v106[0];
      v92 = v106[1];
      *(_QWORD *)&v93 = v107;
      v13 = &v91;
    }
    DWORD2(v93) = v108;
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v18 = -2147024809;
    goto LABEL_196;
  }
  if ( !*(_BYTE *)(v12 + 624) && ((*(_BYTE *)(v12 + 472) & 1) != 0 || (*(_DWORD *)(v12 + 472) & 8) != 0)
    || (v66 = 1, (a5 & 3) == 0) )
  {
    v66 = 0;
  }
  v80 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v14 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(v82);
    a4 = *v14;
    *v14 = 0LL;
    v81 = 0LL;
    v80 = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v81);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v82);
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v66 )
  {
    if ( (a5 & 1) != 0 )
    {
      v15 = *(_QWORD *)(v12 + 336);
      *(_DWORD *)(v12 + 520) &= ~a9;
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        v77 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 136LL))(v15, &v77) >= 0
          && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v77 + 24LL))(v77, &hWnd) >= 0 )
        {
          SetPropW(hWnd, *(LPCWSTR *)(v12 + 528), (HANDLE)*(unsigned int *)(v12 + 520));
        }
        v16 = v77;
        if ( v77 )
        {
          v77 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    else if ( (a5 & 2) != 0 )
    {
      v17 = *(struct IApplicationPresentationLayer **)(v12 + 336);
      *(_DWORD *)(v12 + 520) |= a9;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(v12 + 520), v17);
    }
    if ( !v66 )
    {
      fPending = 0;
      v87 = 0;
      v88 = 0LL;
      v89 = 0;
      v90 = 0LL;
      if ( !*(_BYTE *)(v12 + 384) || *(_BYTE *)(v12 + 385) )
      {
        v19 = 0;
        if ( (a5 & 2) != 0 )
        {
          v70 = 1;
          if ( a9 )
            goto LABEL_50;
        }
      }
      else
      {
        v19 = 1;
      }
      v70 = 0;
LABEL_50:
      if ( a6 != 1 )
        goto LABEL_55;
      v20 = (struct IUnknown *)v12;
      if ( v12 == 112 )
        v20 = 0LL;
      if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
             v20) )
      {
LABEL_55:
        v21 = 0;
      }
      else
      {
        v21 = 1;
      }
      v67 = v21;
      v22 = *(_DWORD *)(v12 + 740) != *(_DWORD *)(v12 + 724)
         || *(_DWORD *)(v12 + 744) != *(_DWORD *)(v12 + 728)
         || *(_DWORD *)(v12 + 748) != *(_DWORD *)(v12 + 732)
         || *(_DWORD *)(v12 + 752) != *(_DWORD *)(v12 + 736)
         || *(_DWORD *)(v12 + 772) != *(_DWORD *)(v12 + 756)
         || *(_DWORD *)(v12 + 776) != *(_DWORD *)(v12 + 760)
         || *(_DWORD *)(v12 + 780) != *(_DWORD *)(v12 + 764)
         || *(_DWORD *)(v12 + 784) != *(_DWORD *)(v12 + 768);
      v69 = v22;
      *(_QWORD *)(v12 + 740) = *(_QWORD *)(v12 + 724);
      *(_QWORD *)(v12 + 748) = *(_QWORD *)(v12 + 732);
      *(_QWORD *)(v12 + 772) = *(_QWORD *)(v12 + 756);
      *(_QWORD *)(v12 + 780) = *(_QWORD *)(v12 + 764);
      if ( v22 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 336) + 296LL))(*(_QWORD *)(v12 + 336));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v12 + 336) + 304LL))(
          *(_QWORD *)(v12 + 336),
          *(_QWORD *)(v12 + 756),
          *(_QWORD *)(v12 + 764));
        v22 = v69;
      }
      v23 = a5 & (v19 - 3);
      if ( ((unsigned __int8)a5 & (unsigned __int8)(v19 - 3) & 1) != 0 && *(_DWORD *)(v12 + 520) )
        v23 &= ~1u;
      if ( v19 )
      {
        if ( (v23 & 2) != 0 )
          goto LABEL_76;
      }
      else if ( (v23 & 1) == 0 )
      {
        goto LABEL_76;
      }
      v23 &= 0xFFFFFFF3;
LABEL_76:
      v24 = v23 & 0xFFFFFFFB;
      if ( !v21 )
        v24 = v23;
      v73 = v24;
      v25 = 0;
      if ( (v24 & 0x40) != 0 )
      {
        v25 = 8;
        goto LABEL_99;
      }
      if ( v22 )
      {
        v25 = 17;
        goto LABEL_99;
      }
      if ( v71 || v13 )
      {
        if ( v67 )
          goto LABEL_98;
        if ( (v24 & 1) != 0 )
        {
          v25 = 1;
          goto LABEL_99;
        }
        v26 = v19 && (v24 & 2) != 0 && v13 && (*((_BYTE *)v13 + 44) & 2) != 0;
        if ( (v24 & 8) != 0 || v26 || (v25 = 1, !v19) )
LABEL_98:
          v25 = 2;
      }
      else if ( v67 )
      {
        v25 = 4;
      }
LABEL_99:
      v78 = 0LL;
      (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v12 + 464LL))(v12, &v78);
      if ( (v25 & 1) == 0 )
      {
LABEL_116:
        v68 = 0;
LABEL_117:
        if ( *(_QWORD *)(v12 + 360) && (v24 & 1) != 0 )
        {
          v34 = 0;
          if ( a6 == 1 )
          {
            v35 = (struct IUnknown *)v12;
            if ( v12 == 112 )
              v35 = 0LL;
            if ( !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                    (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                    v35) )
              v34 = 2;
          }
          IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184));
          v37 = v12 + 184;
          if ( IsApplicationWindowGhost )
            CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v37, v34);
          else
            CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v37, 0LL, v34);
        }
        if ( SRWLock )
        {
          (*(void (__fastcall **)(_QWORD, PVOID))(**(_QWORD **)(v12 + 336) + 152LL))(
            *(_QWORD *)(v12 + 336),
            SRWLock->Ptr);
          if ( v13 )
          {
            v41 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
                    (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184),
                    (struct APPLICATION_VIEW_DATA_UPDATE *)v109);
            if ( v41 >= 0 )
            {
              *((_DWORD *)v13 + 2) = v110;
              *((_DWORD *)v13 + 9) = v111;
              *((_DWORD *)v13 + 10) = v112;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x158E,
                (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                (const char *)(unsigned int)v41,
                v65);
            }
          }
        }
        if ( a4 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 336) + 168LL))(*(_QWORD *)(v12 + 336), a4);
        if ( (v24 & 3) != 0 )
        {
          if ( (v24 & 1) != 0 )
          {
            CImmersiveApp::_SetPos_ShowApplication(v12 - 112, v71, (__int64)v13, v25, v68);
          }
          else
          {
            v42 = 0;
            if ( (v24 & 4) != 0 )
            {
              LOBYTE(v42) = v68 != 0;
              ++v42;
            }
            CImmersiveApp::_SetPos_HideApplication(v12 - 112, v71, v13, v25, v42);
          }
          LOBYTE(v25) = 0;
        }
        if ( v70 && *(_BYTE *)(v12 + 384) )
        {
          *(_BYTE *)(v12 + 384) = 0;
          CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184));
        }
        if ( (v24 & 0x800) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 600LL))(v12, 0LL);
        v43 = v71;
        if ( (v25 & 3) != 0 )
        {
          if ( v71 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 336) + 112LL))(*(_QWORD *)(v12 + 336), v71);
          }
          else if ( (v25 & 0x10) != 0 )
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 336) + 320LL))(*(_QWORD *)(v12 + 336));
          }
          v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v12 + 336) + 128LL))(
                  *(_QWORD *)(v12 + 336),
                  v94);
          v45 = (const RECT *)v94;
          if ( v44 < 0 )
            v45 = 0LL;
          if ( v45 )
            CopyRect((LPRECT)(v12 + 200), v45);
          if ( v13 )
          {
            *(_OWORD *)(v12 + 260) = *v13;
            *(_OWORD *)(v12 + 276) = v13[1];
            *(_OWORD *)(v12 + 292) = v13[2];
          }
          v46 = 2;
          if ( *(_QWORD *)(v12 + 360) && (v25 & 1) != 0 )
            v46 = CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v12 + 184) == 1;
          if ( v68 && v46 == 1 )
          {
            v74 = 0LL;
            v47 = *(void (__fastcall **)(__int64, struct IUnknown ***))(*(_QWORD *)v12 + 464LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
            v47(v12, &v74);
            CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
              (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184),
              9LL);
            CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
              (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184),
              10LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
            v43 = v71;
          }
        }
        if ( (v25 & 8) != 0 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 336) + 112LL))(*(_QWORD *)(v12 + 336), v43);
        if ( a10 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 336) + 256LL))(*(_QWORD *)(v12 + 336));
        if ( (*(_BYTE *)(v12 + 472) & 1) != 0
          && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 336) + 56LL))(*(_QWORD *)(v12 + 336)) )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SdL(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              v48,
              v49,
              *(_QWORD *)(*(_QWORD *)(v12 + 344) + 592LL),
              *(_DWORD *)(*(_QWORD *)(v12 + 344) + 600LL),
              *(_DWORD *)(v12 + 396));
            if ( *(_QWORD *)(v12 + 360) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 352) + 240LL))(**(_QWORD **)(v12 + 352))
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v50 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 352) + 32LL))(**(_QWORD **)(v12 + 352));
                WPP_SF_Sdq(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  29,
                  *(_DWORD *)(*(_QWORD *)(v12 + 344) + 600LL),
                  *(_QWORD *)(*(_QWORD *)(v12 + 344) + 592LL),
                  *(_DWORD *)(*(_QWORD *)(v12 + 344) + 600LL),
                  v50);
              }
            }
          }
          if ( !*(_DWORD *)(v12 + 396)
            && *(_QWORD *)(v12 + 360)
            && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v12 + 352) + 240LL))(**(_QWORD **)(v12 + 352))
            && *(_DWORD *)(*(_QWORD *)(v12 + 432) + 152LL) != 1 )
          {
            CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 184));
          }
        }
        if ( v68 )
        {
          v71 = 0LL;
          v51 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
          v51(v12, &v71);
          Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
          if ( Ptr )
            CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = Ptr - 1;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
        }
        v53 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v53->lpVtbl->Release)(v53);
        }
        v18 = fPending;
        goto LABEL_193;
      }
      v27 = CApplicationManagerUtility::g_pIAMGlobals;
      Context = CApplicationManagerUtility::g_pIAMGlobals;
      v28 = (struct IUnknown *)v12;
      if ( v12 == 112 )
        v28 = 0LL;
      v29 = v78;
      v86 = v78;
      v30 = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      v85 = v30;
      if ( v28 )
      {
        v74 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
        v31 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
        if ( v31 != v74 )
        {
          v94[0] = &v76;
          do
          {
            v76 = *v31;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v76);
            v32 = (unsigned int)SHIsSameObject(v28, v76) != 0;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v76);
            if ( v32 )
              break;
            ++v31;
          }
          while ( v31 != v74 );
          v12 = v84;
          LOWORD(v24) = v73;
          v30 = v85;
        }
        if ( v31 != *((struct IUnknown ***)Context + 8) )
          goto LABEL_116;
        v27 = (PSRWLOCK)Context;
        v29 = v86;
      }
      if ( v30 )
      {
        v33 = *((_DWORD *)v27[1].Ptr + (_QWORD)v30 - 1) == 1;
      }
      else
      {
        if ( !LODWORD(v27[5].Ptr) || !(unsigned int)SHIsSameObject(v29, (struct IUnknown *)v27[6].Ptr) )
        {
          if ( HIDWORD(v27[5].Ptr) == 1 )
            goto LABEL_116;
          goto LABEL_127;
        }
        v33 = LODWORD(v27[5].Ptr) == 1;
      }
      if ( v33 )
        goto LABEL_116;
LABEL_127:
      v68 = 1;
      v38 = CApplicationManagerUtility::g_pIAMGlobals;
      v39 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      if ( v39 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
        || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                  &CApplicationManagerUtility::g_pIAMGlobals[1],
                  v39 + 1) >= 0 )
      {
        v40 = (char *)v38[1].Ptr + 4 * (__int64)v38[2].Ptr++;
        if ( v40 )
          *v40 = 1;
      }
      goto LABEL_117;
    }
  }
  v18 = -2147019873;
LABEL_193:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_196:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v95, v18);
  v95 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  v54 = (volatile signed __int32 *)v105;
  if ( !v105 )
    goto LABEL_204;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v95,
    &SRWLock);
  v54 = (volatile signed __int32 *)v105;
  if ( v105 && *(_DWORD *)v105 == 1 )
  {
    v55 = 1;
  }
  else
  {
    v55 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v105);
    v54 = (volatile signed __int32 *)v105;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v54 = (volatile signed __int32 *)v105;
  }
  if ( v55 )
  {
LABEL_204:
    if ( *v98 == 1 )
    {
      v56 = v98[21];
      v73 = v56;
      v57 = 2147942974LL;
      if ( v56 < 0 )
        v57 = (unsigned int)v56;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v98,
        v57,
        &v73);
      ((void (__fastcall *)(void ***))v95[1])(&v95);
      v54 = (volatile signed __int32 *)v105;
    }
  }
  if ( v54 )
  {
    if ( _InterlockedExchangeAdd(v54, 0xFFFFFFFF) == 1 )
    {
      v58 = v105;
      if ( v105 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v105 + 8);
        operator delete(v58, (const struct std::nothrow_t *)0x100);
      }
    }
    v105 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v59 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v59);
    }
    lpMem = 0LL;
    v104 = 0LL;
  }
  if ( v102 )
  {
    v61 = v101;
    v62 = GetProcessHeap();
    HeapFree(v62, 0, v61);
    v102 = 0;
  }
  v101 = 0LL;
  if ( v99 == 1 )
  {
    v99 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC170;
      qword_1805CC170[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC188 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC170, qword_1805CC188, v63);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CC170);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v100);
  }
  v99 = 3;
  if ( v97 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v96);
  return v18;
}
