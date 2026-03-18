/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BD8AC
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01AEFB8 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0026560 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A230 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00538E0 (ResetAccessibilityCountersOnMouseInput.c)
 *     IsRemoteConnection @ 0x1C0059A7C (IsRemoteConnection.c)
 *     UpconvertTime @ 0x1C0060B60 (UpconvertTime.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0070220 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0070398 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0071500 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     Feature_Servicing_2105c_32092283__private_IsEnabled @ 0x1C00D23BC (Feature_Servicing_2105c_32092283__private_IsEnabled.c)
 *     EtwTraceMouseInputApc @ 0x1C01284B0 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BC008 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01BCE68 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01BCEE4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BE8CC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionStopSonar @ 0x1C01CA87C (ApiSetEditionStopSonar.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        LARGE_INTEGER *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  __int64 v7; // rdi
  LARGE_INTEGER *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _MousePacketPerf *v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int ExtraInformation; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // edi
  USHORT Flags; // ax
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rdx
  int v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v38; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int128 v40; // [rsp+58h] [rbp-A8h]
  __int64 *v42; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v47; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int128 v50; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-10h]
  _QWORD v52[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  __int64 v56; // [rsp+130h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER v58; // [rsp+140h] [rbp+40h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  struct _MOUSE_INPUT_DATA v61[2]; // [rsp+150h] [rbp+50h] BYREF
  int v62; // [rsp+180h] [rbp+80h]
  int y_low; // [rsp+184h] [rbp+84h]
  struct tagPOINT v64; // [rsp+190h] [rbp+90h] BYREF

  v7 = a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v42, "ProcessMouseInput", 0LL);
  v9 = 0;
  v54 = 0LL;
  v60 = 0;
  v53 = 0LL;
  if ( a5 )
    v9 = 2;
  v36 = v9;
  v59 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v52[0] = *(_QWORD *)(a2 + 2240);
  v52[1] = *(_QWORD *)(a2 + 2256);
  v55 = *(_QWORD *)(a2 + 2264);
  v56 = *(_QWORD *)(a2 + 2280);
  v37 = 0;
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
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    goto LABEL_46;
  }
  if ( gptiBlockInput )
  {
LABEL_7:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_46;
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
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    if ( !(unsigned int)IsRemoteConnection(v13, v12) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
    goto LABEL_7;
  }
  if ( IsMouseIVEnabled() && isChildPartition(v19, v18) )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor::RootCursorAsync *)&v8[483]);
  v20 = (struct _MousePacketPerf *)gptCursorAsync;
  if ( a3 )
  {
    v21 = (unsigned __int64)a3 + v7;
    v39 = (char *)a3 + v7;
    do
    {
      v22 = (unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v21);
      v38 = (struct tagUIPI_INFO_INT *)v22;
      if ( (a3->Flags & 4) != 0 )
      {
        v37 = 1;
      }
      else
      {
        if ( a5 && (ExtraInformation = a3->ExtraInformation) != 0 )
        {
          v24 = UpconvertTime(ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v40 = v24;
          v25 = v24 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v40 + 1) = v25;
        }
        else
        {
          *(_QWORD *)&v40 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v40 + 1) = KeQueryPerformanceCounter(0LL);
          v36 = v59;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v25, a3, (struct DEVICEINFO *)a2);
        v26 = v22 == 0 ? 0x100 : 0;
        if ( IsMouseIVEnabled() && isChildPartition(v28, v27) )
          v26 |= 4u;
        if ( a5 )
        {
          v29 = v26 | (*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) != 0 ? 112 : 48);
        }
        else
        {
          v29 = v26 | 0x40;
          if ( !(unsigned int)Feature_Servicing_2105c_32092283__private_IsEnabled() )
          {
            Flags = a3->Flags;
            if ( (Flags & 1) != 0 )
              a3->Flags = Flags | 2;
          }
          if ( !a3->LastX && !a3->LastY )
            v29 |= 8u;
        }
        LODWORD(v43) = 2;
        *((_QWORD *)&v43 + 1) = *(_QWORD *)a2;
        v44 = *(_QWORD *)(a2 + 24);
        v45 = v40;
        v46 = *((_QWORD *)&v40 + 1);
        v48 = v43;
        v49 = v44;
        v50 = v40;
        v51 = *((_QWORD *)&v40 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v64, (__int64)a3, &v50, v29, (__int64)&v48, 0LL);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v64);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             (__int64)a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v64) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v31) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v31,
              6,
              14,
              (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
          }
          v22 = (__int64)v38;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v64, 2048LL, v32, v33)
            && (v64.y & 0x2AA) != 0 )
          {
            PoLatencySensitivityHint(0LL, v35);
          }
          v22 = (__int64)v38;
          v62 = v36;
          y_low = LOWORD(v64.y);
          memset(v61, 0, sizeof(v61));
          v20 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v47,
                                                  (struct tagPOINT)&v64,
                                                  v20,
                                                  v61,
                                                  v38,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v21 = (unsigned __int64)v39;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v22;
    }
    while ( v22 );
  }
  v58 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)&v8[427]);
  MousePerfSummary::CollectMousePerfTelemetry((MousePerfSummary *)&v8[350], (const struct _MousePerf *)v52);
  CInpPushLock::UnLockExclusive((CInpPushLock *)&v8[427]);
LABEL_46:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v42);
  return v37;
}
