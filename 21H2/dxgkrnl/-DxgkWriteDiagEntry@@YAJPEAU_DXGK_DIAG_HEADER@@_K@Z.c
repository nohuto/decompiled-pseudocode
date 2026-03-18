/*
 * XREFs of ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC
 * Callers:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0062950 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C01B3020 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C01B32B0 (DxgkWriteDiagEntry.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C01B4F70 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C01B5EA8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C01D55FC (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01DAE20 (DxgkInvalidateMonitorConnections.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     LogSetTimingSourceMask @ 0x1C01E6720 (LogSetTimingSourceMask.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01E6D3C (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoIsChildConnected @ 0x1C01F35DC (DpiPdoIsChildConnected.c)
 *     DpiPnpNotifyGdi @ 0x1C01F5E0C (DpiPnpNotifyGdi.c)
 *     DpiPnpEnableVga @ 0x1C01F5F10 (DpiPnpEnableVga.c)
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0206274 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     _lambda_d80ae1be2ed16c50038304b59cdfb672_::operator() @ 0x1C02B9878 (_lambda_d80ae1be2ed16c50038304b59cdfb672_--operator().c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C2338 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C02C657C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     _lambda_551b55b43c33c06817801b78f16a1bd1_::operator() @ 0x1C02CE3E8 (_lambda_551b55b43c33c06817801b78f16a1bd1_--operator().c)
 *     _lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator() @ 0x1C02EBDCC (_lambda_da24f1cfb4b7f8e158997fb0a51b3ded_--operator().c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02EFA40 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F07A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C0304E68 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0308C20 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0389190 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C038A234 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C038CC60 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C038D350 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C038D50C (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C038F164 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C038FD70 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0394794 (DpiAcpiHandleAcpiEvent.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C039C580 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C039C714 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00124C0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rbx
  DXGDIAGNOSTICS *v13; // rcx

  if ( (a1 && *((_DWORD *)a1 + 1)
     || (WdLogSingleEntry1(1LL, 8126LL),
         DxgkLogInternalTriageEvent(
           0LL,
           262146,
           -1,
           (__int64)L"(io_pHeader != NULL) && (io_pHeader->Size > 0)",
           8126LL,
           0LL,
           0LL,
           0LL,
           0LL),
         a1))
    && *((_DWORD *)a1 + 1) >= 0x30u )
  {
    Global = DXGGLOBAL_GetGlobal();
    if ( Global )
    {
      CurrentProcess = PsGetCurrentProcess(v5, v4, v7, v8);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      if ( a2 == 0x200000000LL )
      {
        v10 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        a2 = *(unsigned int *)(v10 + 144);
        if ( a2 == 0xFFFFFFFFLL )
          a2 = 0x100000000LL;
      }
      if ( a2 == 0x100000000LL )
      {
        *((_DWORD *)a1 + 9) |= 0x80000000;
        v11 = *((_DWORD *)a1 + 9) ^ (PsGetCurrentProcessSessionId(v10) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
      }
      else
      {
        v11 = a2 & 0x7FFFFFFF;
      }
      *((_DWORD *)a1 + 9) = v11;
      *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
      v12 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v12 * KeQueryTimeIncrement();
      v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 120);
      if ( v13 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v13, a1);
      WdLogSingleEntry2(2LL, a1, Global);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
        (__int64)a1,
        (__int64)Global,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL singleton; io_pHeader = 0x%I64x",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225860LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid header; io_pHeader = 0x%I64x",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
