/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C015B4C0 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015CD90 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C0160DE0 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0173180 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0173880 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0173A80 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C017A7E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C017B5EC (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017D10C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017D520 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017D71C (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017DE80 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // r14
  bool v11; // cf
  int v12; // r15d
  _UNKNOWN **v13; // rcx
  void *v14; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  int v21; // edx
  int v22; // r9d
  int v23; // r12d
  unsigned int v24; // r15d
  __int16 v25; // ax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r9
  LARGE_INTEGER v34; // rax
  int v35; // r8d
  unsigned __int64 v36; // rdx
  __int64 v37; // [rsp+28h] [rbp-51h]
  unsigned int v38; // [rsp+50h] [rbp-29h] BYREF
  int v39; // [rsp+54h] [rbp-25h] BYREF
  int v40; // [rsp+58h] [rbp-21h] BYREF
  int v41; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v42; // [rsp+60h] [rbp-19h] BYREF
  int v43; // [rsp+64h] [rbp-15h] BYREF
  __int64 v44; // [rsp+68h] [rbp-11h]
  __int64 v45; // [rsp+70h] [rbp-9h]
  __int64 *v46; // [rsp+78h] [rbp-1h] BYREF
  __int64 *v47[10]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 v48; // [rsp+E0h] [rbp+67h] BYREF
  int v49; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+77h]
  int v51; // [rsp+F8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v46, "ProcessPointerInput", 0LL);
  v6 = *(_QWORD *)(a2 + 464);
  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)(a2 + 264);
  v9 = *(_QWORD *)(v6 + 24);
  v10 = *(unsigned __int16 *)(v6 + 44);
  v11 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v44 = v7;
  v12 = -v11;
  v13 = &WPP_RECORDER_INITIALIZED;
  v14 = &WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 14, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( !*(_QWORD *)(v7 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v14, v4, v5);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = RIMGetPointerInputType(v44) - 2;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v19 = 17;
        else
          v19 = 0;
      }
      else
      {
        v19 = 3;
      }
    }
    else
    {
      v19 = 13;
    }
  }
  else
  {
    v19 = 11;
  }
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v19,
    0LL,
    0,
    v12 != 0 ? 10 : 2);
  v20 = v8 / (unsigned int)v10;
  if ( v8 % (unsigned int)v10 )
  {
    if ( v8 > (unsigned int)v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v37) = v8;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          4u,
          1u,
          0xFu,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v37,
          v10);
      }
      goto LABEL_54;
    }
    v20 = 1;
  }
  if ( v20 )
  {
    v45 = v20;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v47,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v46);
      v39 = 0;
      v48 = 0;
      v49 = 0;
      v38 = 0;
      v51 = 0;
      v43 = 0;
      v40 = 0;
      v50 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v9,
                  v10,
                  (__int64)&v49,
                  (__int64)&v38,
                  (__int64)&v51,
                  (__int64)&v43,
                  (__int64)&v40,
                  (__int64)&v48) >= 0 )
      {
        if ( !v51 )
          goto LABEL_34;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v9, (unsigned int)v10);
        if ( !v49 )
        {
          if ( *(_DWORD *)(v44 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              (struct RIMDEV *)a2,
              v9,
              v10,
              PerformanceCounter.QuadPart);
            goto LABEL_53;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v22 = 17;
          goto LABEL_22;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v44 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, a2, v9, v10, 0);
LABEL_34:
          RIMStoreRawDataInPointerDeviceFrame(a1, a2, v9, v10, &v39);
          v23 = 0;
          v24 = v38;
          if ( v38 )
          {
            v25 = v48;
            while ( 1 )
            {
              v41 = 0;
              v42 = 0;
              rimProcessPointerDeviceContact(a1, a2, v9, v10, v25, v39, (__int64)&v41, (__int64)&v42);
              if ( v40 )
              {
                if ( v41 )
                  break;
              }
              v28 = v50;
              v29 = v44;
              if ( v42 )
                v28 = 1;
              v50 = v28;
              if ( (*(_DWORD *)(v44 + 312) & 2) != 0 )
              {
                v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 712) + 24LL) + 8LL * v48 + 4);
                v48 = v25;
              }
              else
              {
                if ( v49 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, 1LL, v26, v27);
                if ( v24 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, 1LL, v26, v27);
                v25 = v48;
              }
              if ( ++v23 >= v24 )
                goto LABEL_50;
            }
            v30 = 1;
          }
          else
          {
LABEL_50:
            v30 = v43;
          }
          if ( v30 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v50);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v31, v32);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0LL, v33);
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 18;
          goto LABEL_22;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 16;
LABEL_22:
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, v22, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
LABEL_53:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v47);
      v9 += v10;
      --v45;
    }
    while ( v45 );
  }
LABEL_54:
  v34 = KeQueryPerformanceCounter(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = (unsigned __int64)(1000000 * (v34.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520);
    LOBYTE(v36) = 4;
    WPP_RECORDER_SF_i(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v36,
      v35,
      19,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      (unsigned __int64)(1000000 * (v34.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v46);
}
