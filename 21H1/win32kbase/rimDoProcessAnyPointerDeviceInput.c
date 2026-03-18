/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C018076C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017F7AC (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C005AF90 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C0161810 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0179BB0 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0179DB0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01812EC (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0183B80 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
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
  __int64 v20; // r9
  unsigned int v21; // eax
  int v22; // edx
  int v23; // r9d
  int v24; // r12d
  unsigned int v25; // r15d
  __int16 v26; // ax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  LARGE_INTEGER v30; // rax
  int v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // [rsp+28h] [rbp-51h]
  unsigned int v34; // [rsp+50h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-25h] BYREF
  int v36; // [rsp+58h] [rbp-21h] BYREF
  int v37; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v38; // [rsp+60h] [rbp-19h] BYREF
  int v39; // [rsp+64h] [rbp-15h] BYREF
  __int64 v40; // [rsp+68h] [rbp-11h]
  __int64 v41; // [rsp+70h] [rbp-9h]
  __int64 *v42; // [rsp+78h] [rbp-1h] BYREF
  __int64 *v43[10]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 v44; // [rsp+E0h] [rbp+67h] BYREF
  int v45; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v46; // [rsp+F0h] [rbp+77h]
  int v47; // [rsp+F8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v42, "ProcessPointerInput", 0LL, a4);
  v6 = *(_QWORD *)(a2 + 464);
  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)(a2 + 264);
  v9 = *(_QWORD *)(v6 + 24);
  v10 = *(unsigned __int16 *)(v6 + 44);
  v11 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v40 = v7;
  v12 = -v11;
  v13 = &WPP_RECORDER_INITIALIZED;
  v14 = &WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 14, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( !*(_QWORD *)(v7 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = RIMGetPointerInputType(v40) - 2;
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
  v21 = v8 / (unsigned int)v10;
  if ( v8 % (unsigned int)v10 )
  {
    if ( v8 > (unsigned int)v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v33) = v8;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          4u,
          1u,
          0xFu,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v33,
          v10);
      }
      goto LABEL_54;
    }
    v21 = 1;
  }
  if ( v21 )
  {
    v41 = v21;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v43,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v42,
        v20);
      v35 = 0;
      v44 = 0;
      v45 = 0;
      v34 = 0;
      v47 = 0;
      v39 = 0;
      v36 = 0;
      v46 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v9,
                  v10,
                  (__int64)&v45,
                  (__int64)&v34,
                  (__int64)&v47,
                  (__int64)&v39,
                  (__int64)&v36,
                  (__int64)&v44) >= 0 )
      {
        if ( !v47 )
          goto LABEL_34;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v9, (unsigned int)v10);
        if ( !v45 )
        {
          if ( *(_DWORD *)(v40 + 24) == 7 )
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
          v23 = 17;
          goto LABEL_22;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v40 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, a2, v9, v10, 0);
LABEL_34:
          RIMStoreRawDataInPointerDeviceFrame(a1, a2, v9, v10, &v35);
          v24 = 0;
          v25 = v34;
          if ( v34 )
          {
            v26 = v44;
            while ( 1 )
            {
              v37 = 0;
              v38 = 0;
              rimProcessPointerDeviceContact(a1, a2, v9, v10, v26, v35, (__int64)&v37, (__int64)&v38);
              if ( v36 )
              {
                if ( v37 )
                  break;
              }
              v27 = v46;
              v28 = v40;
              if ( v38 )
                v27 = 1;
              v46 = v27;
              if ( (*(_DWORD *)(v40 + 312) & 2) != 0 )
              {
                v26 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 712) + 24LL) + 8LL * v44 + 4);
                v44 = v26;
              }
              else
              {
                if ( v45 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
                if ( v25 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
                v26 = v44;
              }
              if ( ++v24 >= v25 )
                goto LABEL_50;
            }
            v29 = 1;
          }
          else
          {
LABEL_50:
            v29 = v39;
          }
          if ( v29 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v46);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0);
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 18;
          goto LABEL_22;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 16;
LABEL_22:
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, v23, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
LABEL_53:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v43);
      v9 += v10;
      --v41;
    }
    while ( v41 );
  }
LABEL_54:
  v30 = KeQueryPerformanceCounter(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = (unsigned __int64)(1000000 * (v30.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520);
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_i(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v32,
      v31,
      19,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      (unsigned __int64)(1000000 * (v30.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v42);
}
