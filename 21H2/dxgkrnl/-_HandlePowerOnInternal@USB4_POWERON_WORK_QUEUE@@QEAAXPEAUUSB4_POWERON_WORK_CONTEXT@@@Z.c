/*
 * XREFs of ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0
 * Callers:
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03B6240 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C000954C (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C000A800 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001D1B4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0027E5C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af___ @ 0x1C002C910 (DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af___.c)
 *     _DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002C94C (_DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C002E920 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C004D3D8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-Derefe.c)
 *     ?SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@@Z @ 0x1C006B8CC (-SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@@Z.c)
 *     ?SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@I@Z @ 0x1C006B8DC (-SetError@PowerOnFailureStage@DxgMonitor@@QEAAXW4Stage@12@I@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?_AsyncUsb4PowerOnStage1@DXGMONITOR@@QEAAXPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0157938 (-_AsyncUsb4PowerOnStage1@DXGMONITOR@@QEAAXPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?_AsyncUsb4PowerOnStage2@DXGMONITOR@@QEAAXXZ @ 0x1C015799C (-_AsyncUsb4PowerOnStage2@DXGMONITOR@@QEAAXXZ.c)
 *     ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0158064 (-AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(
        USB4_POWERON_WORK_QUEUE *this,
        struct USB4_POWERON_WORK_CONTEXT *a2)
{
  struct _LUID *v2; // r8
  int v3; // edx
  struct DXGADAPTER *v4; // rdi
  struct USB4_POWERON_WORK_CONTEXT *v5; // r9
  unsigned int i; // r15d
  __int64 v7; // rax
  _BOOL8 v8; // rbx
  _BOOL8 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r15d
  _BOOL8 v12; // rbx
  void *v13; // rbx
  _BOOL8 v14; // rbx
  __int64 v15; // rdx
  bool v16; // bl
  __int64 v17; // rdx
  const wchar_t *v18; // r9
  int v19; // edi
  __int64 v20; // rdx
  int v21; // edx
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct USB4_POWERON_WORK_CONTEXT *v24; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v26; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v27[2]; // [rsp+70h] [rbp-90h] BYREF
  DxgkCompositionObject *v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v32[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-28h]
  _BYTE v34[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v35[144]; // [rsp+100h] [rbp+0h] BYREF

  v24 = a2;
  v25[0] = 0;
  *(_QWORD *)&v29 = v25;
  v22 = 0;
  *((_QWORD *)&v29 + 1) = &v24;
  v28 = 0LL;
  v30 = &v22;
  v25[1] = -1;
  DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af_((__int64)v34, &v29);
  v27[0] = 0LL;
  if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v27, v2 + 10) )
  {
    WdLogSingleEntry2(2LL, *((int *)v24 + 21), *((unsigned int *)v24 + 20));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not find adapter with luid 0x%08I64x%08I64x",
      *((int *)v24 + 21),
      *((unsigned int *)v24 + 20),
      0LL,
      0LL,
      0LL);
    v3 = 2;
LABEL_21:
    DxgMonitor::PowerOnFailureStage::SetError(v25, v3);
    goto LABEL_29;
  }
  v4 = v27[0];
  *((struct DXGADAPTER **)&v29 + 1) = v27[0];
  LOBYTE(v30) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v29);
  if ( DXGADAPTER::IsActive(v4) )
  {
    v5 = v24;
    for ( i = 0; i < *((_DWORD *)v5 + 22); ++i )
    {
      v33 = 0LL;
      v7 = *((_QWORD *)v5 + 12);
      memset(v32, 0, sizeof(v32));
      MONITOR_MGR::AcquireMonitorExclusive(&v26, (__int64)v4, *(_DWORD *)(v7 + 4LL * i), 0);
      if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v26) )
      {
        DXGMONITOR::_AsyncUsb4PowerOnStage1(v26, (struct USB4_POFXREF_CONTEXT *)v32);
      }
      else
      {
        v8 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
        WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * i), v8, v22);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
          *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * i),
          v8,
          v22,
          0LL,
          0LL);
        DxgMonitor::PowerOnFailureStage::SetError(v25, 5, *(_DWORD *)(*((_QWORD *)v24 + 12) + 4LL * i));
      }
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v26);
      if ( *(_QWORD *)&v32[0]
        && (v22 = DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRefFromContext((struct USB4_POFXREF_CONTEXT *)v32),
            v22 < 0) )
      {
        v9 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
        WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * i), v9, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to power on USB4 host adapter target 0x%I64 for adapter 0x%I64, status 0x%I64",
          *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * i),
          v9,
          v22,
          0LL,
          0LL);
        DxgMonitor::PowerOnFailureStage::SetError(v25, 15, *(_DWORD *)(*((_QWORD *)v24 + 12) + 4LL * i));
      }
      else
      {
        v5 = v24;
      }
    }
    v11 = 0;
    if ( *((_DWORD *)v5 + 22) )
    {
      do
      {
        MONITOR_MGR::AcquireMonitorExclusive(&v26, (__int64)v4, *(_DWORD *)(*((_QWORD *)v5 + 12) + 4LL * v11), 0);
        if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v26) )
        {
          DXGMONITOR::_AsyncUsb4PowerOnStage2(v26);
        }
        else
        {
          v12 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
          WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * v11), v12, v22);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
            *(unsigned int *)(*((_QWORD *)v24 + 12) + 4LL * v11),
            v12,
            v22,
            0LL,
            0LL);
          DxgMonitor::PowerOnFailureStage::SetError(v25, 12, *(_DWORD *)(*((_QWORD *)v24 + 12) + 4LL * v11));
        }
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v26);
        v5 = v24;
        ++v11;
      }
      while ( v11 < *((_DWORD *)v24 + 22) );
    }
    Interval.QuadPart = -4000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    v13 = (void *)*((_QWORD *)v4 + 27);
    ObfReferenceObject(v13);
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
      &v28,
      (DxgkCompositionObject *)v13);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v29);
    v22 = DpiPollDisplayChildren((__int64)v28, 0xCu, 0LL);
    if ( v22 < 0 )
    {
      v14 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
      WdLogSingleEntry2(2LL, v14, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
        v14,
        v22,
        0LL,
        0LL,
        0LL);
      v3 = 6;
      goto LABEL_21;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v4, 0LL);
    v22 = COREADAPTERACCESS::AcquireExclusive((__int64)v35);
    if ( v22 >= 0 )
    {
      v23[0] = 0;
      v22 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v4, 0LL, (struct _DMM_SET_TIMING_RESULT *)v23);
      if ( v22 >= 0 )
      {
        DmmHandleSetTimingsResult(
          (ADAPTER_DISPLAY **)v4,
          (struct _DMM_SET_TIMING_RESULT *)v23,
          (struct USB4_POWERON_WORK_CONTEXT *)((char *)v24 + 8));
        v21 = 1;
        goto LABEL_28;
      }
      v16 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
      WdLogSingleEntry2(2LL, v16, v20);
      v18 = L"DmmPowerOnOffTargetsFromSourceIfNecessary failed for adapter 0x%I64 after processing, status 0x%I64";
      v19 = 7;
    }
    else
    {
      v16 = wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v27);
      WdLogSingleEntry2(2LL, v16, v17);
      v18 = L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64";
      v19 = 6;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v16, v22, 0LL, 0LL, 0LL);
    v21 = v19;
LABEL_28:
    DxgMonitor::PowerOnFailureStage::SetError(v25, v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    goto LABEL_29;
  }
  WdLogSingleEntry2(2LL, *((int *)v24 + 21), *((unsigned int *)v24 + 20));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Adapter with luid 0x%08I64x%08I64x is not active",
    *((int *)v24 + 21),
    *((unsigned int *)v24 + 20),
    0LL,
    0LL,
    0LL);
  DxgMonitor::PowerOnFailureStage::SetError(v25, 13);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v29);
LABEL_29:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v27);
  DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v34);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>();
}
