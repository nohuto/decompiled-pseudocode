/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C017863C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017767C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0065400 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C0158F60 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A830 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C015E880 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171450 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171650 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01783B8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01791BC (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017ACDC (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017BA50 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // r14
  bool v13; // cf
  int v14; // r15d
  _UNKNOWN **v15; // rcx
  void *v16; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // edx
  int v25; // r9d
  int v26; // r12d
  unsigned int v27; // r15d
  __int16 v28; // ax
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r9
  LARGE_INTEGER v37; // rax
  int v38; // r8d
  unsigned __int64 v39; // rdx
  __int64 v40; // [rsp+28h] [rbp-51h]
  unsigned int v41; // [rsp+50h] [rbp-29h] BYREF
  int v42; // [rsp+54h] [rbp-25h] BYREF
  int v43; // [rsp+58h] [rbp-21h] BYREF
  int v44; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v45; // [rsp+60h] [rbp-19h] BYREF
  int v46; // [rsp+64h] [rbp-15h] BYREF
  __int64 v47; // [rsp+68h] [rbp-11h]
  __int64 v48; // [rsp+70h] [rbp-9h]
  __int64 *v49; // [rsp+78h] [rbp-1h] BYREF
  __int64 *v50[10]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 v51; // [rsp+E0h] [rbp+67h] BYREF
  int v52; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v53; // [rsp+F0h] [rbp+77h]
  int v54; // [rsp+F8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v49, "ProcessPointerInput", 0LL, a4);
  v8 = *(_QWORD *)(a2 + 464);
  v9 = *(_QWORD *)(a2 + 480);
  v10 = *(_DWORD *)(a2 + 264);
  v11 = *(_QWORD *)(v8 + 24);
  v12 = *(unsigned __int16 *)(v8 + 44);
  v13 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v47 = v9;
  v14 = -v13;
  v15 = &WPP_RECORDER_INITIALIZED;
  v16 = &WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v16, 1, 14, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( !*(_QWORD *)(v9 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16, v6, v7);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v18 = RIMGetPointerInputType(v47) - 2;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
          v21 = 17;
        else
          v21 = 0;
      }
      else
      {
        v21 = 3;
      }
    }
    else
    {
      v21 = 13;
    }
  }
  else
  {
    v21 = 11;
  }
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v21,
    0LL,
    0,
    v14 != 0 ? 10 : 2);
  v23 = v10 / (unsigned int)v12;
  if ( v10 % (unsigned int)v12 )
  {
    if ( v10 > (unsigned int)v12 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v40) = v10;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          4u,
          1u,
          0xFu,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v40,
          v12);
      }
      goto LABEL_54;
    }
    v23 = 1;
  }
  if ( v23 )
  {
    v48 = v23;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v50,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v49,
        v22);
      v42 = 0;
      v51 = 0;
      v52 = 0;
      v41 = 0;
      v54 = 0;
      v46 = 0;
      v43 = 0;
      v53 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v11,
                  v12,
                  (__int64)&v52,
                  (__int64)&v41,
                  (__int64)&v54,
                  (__int64)&v46,
                  (__int64)&v43,
                  (__int64)&v51) >= 0 )
      {
        if ( !v54 )
          goto LABEL_34;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v11, (unsigned int)v12);
        if ( !v52 )
        {
          if ( *(_DWORD *)(v47 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              (struct RIMDEV *)a2,
              v11,
              v12,
              PerformanceCounter.QuadPart);
            goto LABEL_53;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v25 = 17;
          goto LABEL_22;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v47 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, a2, v11, v12, 0);
LABEL_34:
          RIMStoreRawDataInPointerDeviceFrame(a1, a2, v11, v12, &v42);
          v26 = 0;
          v27 = v41;
          if ( v41 )
          {
            v28 = v51;
            while ( 1 )
            {
              v44 = 0;
              v45 = 0;
              rimProcessPointerDeviceContact(a1, a2, v11, v12, v28, v42, (__int64)&v44, (__int64)&v45);
              if ( v43 )
              {
                if ( v44 )
                  break;
              }
              v31 = v53;
              v32 = v47;
              if ( v45 )
                v31 = 1;
              v53 = v31;
              if ( (*(_DWORD *)(v47 + 312) & 2) != 0 )
              {
                v28 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 712) + 24LL) + 8LL * v51 + 4);
                v51 = v28;
              }
              else
              {
                if ( v52 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, 1LL, v29, v30);
                if ( v27 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, 1LL, v29, v30);
                v28 = v51;
              }
              if ( ++v26 >= v27 )
                goto LABEL_50;
            }
            v33 = 1;
          }
          else
          {
LABEL_50:
            v33 = v46;
          }
          if ( v33 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v53);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v34, v35);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0LL, v36);
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = 18;
          goto LABEL_22;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 16;
LABEL_22:
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, v25, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
LABEL_53:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v50);
      v11 += v12;
      --v48;
    }
    while ( v48 );
  }
LABEL_54:
  v37 = KeQueryPerformanceCounter(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v39 = (unsigned __int64)(1000000 * (v37.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520);
    LOBYTE(v39) = 4;
    WPP_RECORDER_SF_i(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v39,
      v38,
      19,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      (unsigned __int64)(1000000 * (v37.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v49);
}
