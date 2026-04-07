/*
 * XREFs of ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F110
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800864C8 (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18008D918 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008DAC4 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008DF88 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x18008EA58 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008F5A4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x180090E5C (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x180091908 (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800BD5CC (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800BDA98 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::StartVirtualMonitorCapture(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // ebx
  int v9; // edi
  struct CCaptureControllerProxy *v10; // rsi
  int IsMonitorVirtual; // eax
  int v12; // ebx
  int v13; // r9d
  int v14; // eax
  CProjectionBorderManager *v15; // rcx
  int DesktopRootVisual; // eax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  bool v19; // [rsp+30h] [rbp-D0h] BYREF
  CCaptureControllerProxy *v20; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisualProxy *v21; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[40]; // [rsp+50h] [rbp-B0h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0LL;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v23,
    (__int64)"StartDisplayCapture");
  v23[0] = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v23,
    a2,
    v9,
    v8);
  IsMonitorVirtual = CDesktopManager::IsMonitorVirtual(
                       (CDWMDXGIEnumeration **)CDesktopManager::s_pDesktopManagerInstance,
                       a2,
                       &v19);
  v12 = IsMonitorVirtual;
  if ( IsMonitorVirtual < 0 )
  {
    v18 = 514;
LABEL_17:
    v13 = IsMonitorVirtual;
    goto LABEL_18;
  }
  if ( v19 )
  {
    if ( !CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
            this + 7,
            *(_QWORD *)a4) )
    {
      v14 = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              a3,
              &v20);
      v12 = v14;
      if ( v14 >= 0 )
      {
        DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v15, &v21);
        v12 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          v10 = v20;
          IsMonitorVirtual = CCaptureControllerProxy::SetRootVisual(v20, v21);
          v12 = IsMonitorVirtual;
          if ( IsMonitorVirtual >= 0 )
          {
            IsMonitorVirtual = CProjectionBorderManager::_AddDisplayCaptureEntry(
                                 (CProjectionBorderManager *)this,
                                 a2,
                                 v10,
                                 a4,
                                 0);
            v12 = IsMonitorVirtual;
            if ( IsMonitorVirtual >= 0 )
              goto LABEL_19;
            v18 = 532;
          }
          else
          {
            v18 = 530;
          }
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, 0x210u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x20Eu);
      }
      v10 = v20;
      goto LABEL_19;
    }
    v12 = -2147418113;
    v18 = 523;
  }
  else
  {
    v12 = -2147024891;
    v18 = 518;
  }
  v13 = v12;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v18);
LABEL_19:
  if ( a3 )
    CloseHandle(a3);
  if ( v10 && v12 < 0 )
    CBaseObject::Release(v10);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v23,
    (unsigned int)v12);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v23);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v12;
}
