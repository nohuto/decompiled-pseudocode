/*
 * XREFs of ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x180217698
 * Callers:
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x180217800 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1800838E8 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1800872FC (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x180215460 (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x180218DDC (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
struct IApplicationView *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // rax
  __int64 v7; // rsi
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  struct _FILETIME v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationView *v16; // [rsp+68h] [rbp+10h]
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v11 = 0LL;
  LOWORD(v15) = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a4, a2);
  v7 = WindowForView;
  if ( WindowForView )
  {
    v13 = WindowForView;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v14 = SystemTimeAsFileTime;
    v9 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData)(
                      &SystemTimeAsFileTime,
                      a3,
                      SystemTimeAsFileTime,
                      v7,
                      v11);
    v10 = *v9;
    *v9 = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&SystemTimeAsFileTime);
    TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
      (int *)&v17,
      (__int64 *)&v14,
      &v13);
    LOBYTE(v15) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v15);
    v11 = 0LL;
    *(_QWORD *)a2 = v10;
  }
  else
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
    BYTE1(v15) = 1;
    *(_QWORD *)a2 = 0LL;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v15);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return a2;
}
