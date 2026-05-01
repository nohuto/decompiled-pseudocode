/*
 * XREFs of ?SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803DD930
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1803D7BA4 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PE.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1803DA1A4 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1803DA1A4.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1803DA278 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1803DA278.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::SubscribeToServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  __int64 result; // rax
  __int64 (*QueryService)(void); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 21);
  try
  {
    v6 = QueryService();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v9 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)this + 176);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),KioskPositioner *>(
                (__int64)this + 208,
                *((_QWORD *)this + 22),
                v11);
        v14 = v13;
        if ( v13 >= 0 )
        {
          lpVtbl = a2->lpVtbl;
          v26 = 0LL;
          v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                  &v26);
          v18 = v16;
          if ( v16 >= 0 )
          {
            v19 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),SurfaceHubPositioner *>(
                    (__int64)this + 336,
                    v26,
                    v17);
            v20 = v19;
            if ( v19 >= 0 )
            {
              v21 = a2->lpVtbl->QueryService;
              wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 23);
              v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *, char *))v21)(
                      a2,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      (char *)this + 184,
                      (char *)this - 40);
              v24 = v22;
              if ( v22 >= 0 )
              {
                SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),KioskPositioner *>(
                  (__int64)this + 464,
                  *((_QWORD *)this + 23),
                  v23);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
                result = 0LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x226,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                  (const char *)(unsigned int)v22);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
                result = v24;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x224,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                (const char *)(unsigned int)v19);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
              result = v20;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x220,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
              (const char *)(unsigned int)v16);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
            result = v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x21D,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v13);
          result = v14;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x219,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v10);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x217,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22E,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v8);
  }
  return result;
}
