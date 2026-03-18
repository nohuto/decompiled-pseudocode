/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01ACC38 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     IsRemoteConnection @ 0x1C0009F24 (IsRemoteConnection.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0035694 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0036C88 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0099C30 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C00B19A0 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00B3CB0 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     EtwTraceMouseInputApc @ 0x1C0126160 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9C98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01BAAF8 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01BAB74 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01BC554 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionStopSonar @ 0x1C01C84FC (ApiSetEditionStopSonar.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        CMouseProcessor *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // rdi
  CMouseProcessor *v8; // r12
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _MousePacketPerf *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int ExtraInformation; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // edi
  char v24; // al
  _QWORD *v25; // rdx
  unsigned int v26; // edi
  USHORT Flags; // cx
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rdx
  int v33; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v35; // [rsp+48h] [rbp-B8h]
  char *v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+58h] [rbp-A8h]
  __int64 *v39; // [rsp+78h] [rbp-88h] BYREF
  __int128 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int128 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-10h]
  _QWORD v49[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 v53; // [rsp+130h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  struct _MOUSE_INPUT_DATA v58[2]; // [rsp+150h] [rbp+50h] BYREF
  int v59; // [rsp+180h] [rbp+80h]
  int y_low; // [rsp+184h] [rbp+84h]
  struct tagPOINT v61; // [rsp+190h] [rbp+90h] BYREF

  v7 = (unsigned int)a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v39, "ProcessMouseInput", 0LL, a4);
  v9 = 0;
  v51 = 0LL;
  v57 = 0;
  v50 = 0LL;
  if ( a5 )
    v9 = 2;
  v33 = v9;
  v56 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v49[0] = *(_QWORD *)(a2 + 2248);
  v49[1] = *(_QWORD *)(a2 + 2264);
  v52 = *(_QWORD *)(a2 + 2272);
  v53 = *(_QWORD *)(a2 + 2288);
  v34 = 0;
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
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
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
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    if ( !(unsigned int)IsRemoteConnection() && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    goto LABEL_7;
  }
  if ( IsMouseIVEnabled() && isChildPartition() )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v8 + 3864));
  v17 = (struct _MousePacketPerf *)gptCursorAsync;
  if ( a3 )
  {
    v18 = (unsigned __int64)a3 + v7;
    v36 = (char *)a3 + v7;
    do
    {
      v19 = (unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v18);
      v35 = (struct tagUIPI_INFO_INT *)v19;
      if ( (a3->Flags & 4) != 0 )
      {
        v34 = 1;
      }
      else
      {
        if ( a5 && (ExtraInformation = a3->ExtraInformation) != 0 )
        {
          v21 = UpconvertTime(ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v37 = v21;
          v22 = v21 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v37 + 1) = v22;
        }
        else
        {
          *(_QWORD *)&v37 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v37 + 1) = KeQueryPerformanceCounter(0LL);
          v33 = v56;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v22, a3, (struct DEVICEINFO *)a2);
        v23 = v19 == 0 ? 0x100 : 0;
        v24 = IsMouseIVEnabled();
        v25 = 0LL;
        if ( v24 && isChildPartition() )
          v23 |= 4u;
        if ( a5 == (_BYTE)v25 )
        {
          Flags = a3->Flags;
          v26 = v23 | 0x40;
          if ( (Flags & 1) != 0 && (*(_DWORD *)(a2 + 912) & 1) != 0 )
            a3->Flags = Flags | 2;
          if ( a3->LastX == (_DWORD)v25 && a3->LastY == (_DWORD)v25 )
            v26 |= 8u;
        }
        else
        {
          v26 = v23 | (*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) != 0 ? 112 : 48);
        }
        LODWORD(v40) = 2;
        *((_QWORD *)&v40 + 1) = *(_QWORD *)a2;
        v41 = *(_QWORD *)(a2 + 24);
        v42 = v37;
        v43 = *((_QWORD *)&v37 + 1);
        v45 = v40;
        v46 = v41;
        v47 = v37;
        v48 = *((_QWORD *)&v37 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v61, (__int64)a3, &v47, v26, (__int64)&v45, v25);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v61,
          0LL);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             (__int64)a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v61) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v28) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v28,
              6,
              14,
              (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v19 = (__int64)v35;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v61, 2048LL, v29, v30)
            && (v61.y & 0x2AA) != 0 )
          {
            PoLatencySensitivityHint(0LL, v32);
          }
          v19 = (__int64)v35;
          v59 = v33;
          y_low = LOWORD(v61.y);
          memset(v58, 0, sizeof(v58));
          v17 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v44,
                                                  (struct tagPOINT)&v61,
                                                  v17,
                                                  v58,
                                                  v35,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v18 = (unsigned __int64)v36;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v19;
    }
    while ( v19 );
  }
  v55 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)v8 + 3416);
  MousePerfSummary::CollectMousePerfTelemetry((CMouseProcessor *)((char *)v8 + 2800), (const struct _MousePerf *)v49);
  CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)v8 + 3416));
LABEL_46:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v39);
  return v34;
}
