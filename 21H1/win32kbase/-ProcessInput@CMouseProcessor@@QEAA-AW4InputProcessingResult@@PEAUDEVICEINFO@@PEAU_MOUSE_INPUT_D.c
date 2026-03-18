/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01B4D18 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C002BC80 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C00437E0 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0045B70 (ResetAccessibilityCountersOnMouseInput.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0065920 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C006994C (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     EtwTraceMouseInputApc @ 0x1C012E4A0 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C1D68 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01C2BC8 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C2C44 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01C4648 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionStopSonar @ 0x1C01D07FC (ApiSetEditionStopSonar.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        CMouseProcessor *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // rdi
  CMouseProcessor *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _MousePacketPerf *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int ExtraInformation; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // edi
  char v24; // al
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  int v27; // edi
  USHORT Flags; // ax
  int v29; // edx
  __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-C0h]
  unsigned int v33; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v34; // [rsp+48h] [rbp-B8h]
  char *v35; // [rsp+50h] [rbp-B0h]
  __int128 v36; // [rsp+58h] [rbp-A8h]
  __int64 *v38; // [rsp+78h] [rbp-88h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v43; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-10h]
  _QWORD v48[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int64 v52; // [rsp+130h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER v54; // [rsp+140h] [rbp+40h]
  int v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+14Ch] [rbp+4Ch]
  struct _MOUSE_INPUT_DATA v57[2]; // [rsp+150h] [rbp+50h] BYREF
  int v58; // [rsp+180h] [rbp+80h]
  int y_low; // [rsp+184h] [rbp+84h]
  struct tagPOINT v60; // [rsp+190h] [rbp+90h] BYREF

  v7 = (unsigned int)a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v38, "ProcessMouseInput", 0LL, a4);
  v9 = 0;
  v50 = 0LL;
  v56 = 0;
  v49 = 0LL;
  if ( a5 )
    v9 = 2;
  v32 = v9;
  v55 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v48[0] = *(_QWORD *)(a2 + 2240);
  v48[1] = *(_QWORD *)(a2 + 2256);
  v51 = *(_QWORD *)(a2 + 2264);
  v52 = *(_QWORD *)(a2 + 2280);
  v33 = 0;
  EtwTraceMouseInputApc(v10);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        6,
        12,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    goto LABEL_48;
  }
  if ( gptiBlockInput )
  {
LABEL_7:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_48;
  }
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  ApiSetEditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v12,
        6,
        13,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    if ( qword_1C0258F10 )
      v14 = qword_1C0258F10(v13, v12);
    else
      v14 = 0;
    if ( !v14 && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    goto LABEL_7;
  }
  if ( IsMouseIVEnabled() && isChildPartition(v16, v15) )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v8 + 3936));
  v17 = (struct _MousePacketPerf *)gptCursorAsync;
  if ( a3 )
  {
    v18 = (unsigned __int64)a3 + v7;
    v35 = (char *)a3 + v7;
    do
    {
      v19 = (unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v18);
      v34 = (struct tagUIPI_INFO_INT *)v19;
      if ( (a3->Flags & 4) != 0 )
      {
        v33 = 1;
      }
      else
      {
        if ( a5 && (ExtraInformation = a3->ExtraInformation) != 0 )
        {
          v21 = UpconvertTime(ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v36 = v21;
          v22 = v21 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v36 + 1) = v22;
        }
        else
        {
          *(_QWORD *)&v36 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v36 + 1) = KeQueryPerformanceCounter(0LL);
          v32 = v55;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v22, a3, (struct DEVICEINFO *)a2);
        v23 = v19 == 0 ? 0x100 : 0;
        v24 = IsMouseIVEnabled();
        v26 = 0LL;
        if ( v24 && isChildPartition(v25, 0LL) )
          v23 |= 4u;
        if ( a5 == (_BYTE)v26 )
        {
          Flags = a3->Flags;
          v27 = v23 | 0x40;
          if ( (Flags & 1) != 0 )
            a3->Flags = Flags | 2;
          if ( a3->LastX == (_DWORD)v26 && a3->LastY == (_DWORD)v26 )
            v27 |= 8u;
        }
        else
        {
          v27 = v23 | (*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) != 0 ? 112 : 48);
        }
        LODWORD(v39) = 2;
        *((_QWORD *)&v39 + 1) = *(_QWORD *)a2;
        v40 = *(_QWORD *)(a2 + 24);
        v41 = v36;
        v42 = *((_QWORD *)&v36 + 1);
        v44 = v39;
        v45 = v40;
        v46 = v36;
        v47 = *((_QWORD *)&v36 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v60, (__int64)a3, &v46, v27, (__int64)&v44, v26);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v60,
          0LL);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             (__int64)a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v60) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v29,
              6,
              14,
              (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
          }
          v19 = (__int64)v34;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v60, 2048) && (v60.y & 0x2AA) != 0 )
            PoLatencySensitivityHint(0LL, v31);
          v19 = (__int64)v34;
          v58 = v32;
          y_low = LOWORD(v60.y);
          memset(v57, 0, sizeof(v57));
          v17 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v43,
                                                  (struct tagPOINT)&v60,
                                                  v17,
                                                  v57,
                                                  v34,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v18 = (unsigned __int64)v35;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v19;
    }
    while ( v19 );
  }
  v54 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)v8 + 3488);
  MousePerfSummary::CollectMousePerfTelemetry((CMouseProcessor *)((char *)v8 + 2800), (const struct _MousePerf *)v48);
  *((_QWORD *)v8 + 437) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v8 + 3488, 0LL);
  KeLeaveCriticalRegion();
LABEL_48:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v38);
  return v33;
}
