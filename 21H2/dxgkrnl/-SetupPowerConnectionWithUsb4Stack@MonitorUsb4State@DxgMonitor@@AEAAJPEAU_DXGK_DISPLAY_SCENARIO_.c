/*
 * XREFs of ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021C1A0
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x1C03B6AA0 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0014708 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0027E28 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0027E5C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___ @ 0x1C002C8F0 (DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___.c)
 *     _DXGKCALLONEXIT__lambda_3f5bab62b2f873cd95dd11ae8bfb13c7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002C930 (_DXGKCALLONEXIT__lambda_3f5bab62b2f873cd95dd11ae8bfb13c7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C004D3F0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0157F9C (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x1C03B5FE4 (-OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor@@QEAA-AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(
        _QWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // r9
  unsigned __int16 v5; // di
  unsigned __int64 v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rbx
  int v10; // edi
  _QWORD *v11; // rax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  int v15; // edi
  _QWORD *v16; // rax
  const WCHAR *v17; // rdx
  int appended; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  int *v25; // [rsp+80h] [rbp-80h]
  _QWORD *v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[48]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // [rsp+148h] [rbp+48h] BYREF

  v29 = a2;
  if ( !*((_BYTE *)Context + 8) )
    return 0LL;
  v19 = 0;
  *(_QWORD *)&v24 = &v29;
  FileObject = 0LL;
  *((_QWORD *)&v24 + 1) = &appended;
  appended = 0;
  v25 = &v19;
  v26 = Context;
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v27, &v24);
  v5 = *((_WORD *)Context + 20) + 64;
  v6 = 2 * ((unsigned __int64)v5 >> 1);
  if ( !is_mul_ok((unsigned __int64)v5 >> 1, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x4D677844u, 256LL, v4);
  v8 = *Context;
  v9 = v7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = v7;
  Destination.MaximumLength = v5;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v23);
  appended = RtlStringCchPrintfW(Source, 0x20uLL, (size_t *)L"GFX-%016llx:%08x", *v11, v10);
  v12 = appended;
  if ( appended < 0 )
  {
    v13 = 4;
LABEL_11:
    v19 = v13;
    goto LABEL_29;
  }
  appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)Context[6]);
  v12 = appended;
  if ( appended < 0 )
  {
    v13 = 5;
    goto LABEL_11;
  }
  appended = RtlAppendUnicodeToString(&Destination, Source);
  v12 = appended;
  if ( appended < 0 )
  {
    v13 = 6;
    goto LABEL_11;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, &FileObject, &DeviceObject);
  v12 = appended;
  if ( appended >= 0 )
  {
    v19 = DxgMonitor::Usb4HostRouterPoFxRef::OnInitialized(Context + 8, DeviceObject);
    if ( v19 == 1 )
    {
      appended = DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRef(
                   (DxgMonitor::Usb4HostRouterPoFxRef *)(Context + 8),
                   0LL,
                   v14);
      v12 = appended;
      if ( appended >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)&FileObject,
          0LL);
        v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
        v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v23);
        appended = RtlStringCchPrintfW(
                     Source,
                     0x20uLL,
                     (size_t *)L"GFX%02x-%016llx:%08x",
                     *((unsigned int *)Context + 3),
                     *v16,
                     v15);
        v12 = appended;
        if ( appended >= 0 )
        {
          v17 = (const WCHAR *)Context[6];
          Destination.Length = 0;
          appended = RtlAppendUnicodeToString(&Destination, v17);
          v12 = appended;
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&Destination, Source);
            v12 = appended;
            if ( appended >= 0 )
            {
              wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
                (DxgkCompositionObject **)Context + 4,
                0LL);
              appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, (PFILE_OBJECT *)Context + 4, &DeviceObject);
              v12 = appended;
              if ( appended >= 0 )
              {
                if ( Context[12]
                  || (wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                        (void **)Context + 12,
                        0LL),
                      appended = IoRegisterPlugPlayNotification(
                                   EventCategoryTargetDeviceChange,
                                   0,
                                   (PVOID)Context[4],
                                   g_pDriverObject,
                                   DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification,
                                   Context,
                                   (PVOID *)Context + 12),
                      v12 = appended,
                      appended >= 0) )
                {
                  v19 = 1;
                  if ( v9 )
                    operator delete[](v9);
                  v12 = 0;
                  goto LABEL_34;
                }
                v19 = 14;
              }
              else
              {
                v19 = 13;
              }
            }
            else
            {
              v19 = 12;
            }
          }
          else
          {
            v19 = 11;
          }
        }
        else
        {
          v19 = 10;
        }
      }
      else
      {
        v19 = 9;
      }
    }
    else
    {
      v12 = -1073741823;
      appended = -1073741823;
    }
  }
  else
  {
    v19 = 7;
  }
LABEL_29:
  if ( v9 )
    operator delete[](v9);
LABEL_34:
  DXGKCALLONEXIT__lambda_3f5bab62b2f873cd95dd11ae8bfb13c7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v27);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&FileObject);
  return v12;
}
