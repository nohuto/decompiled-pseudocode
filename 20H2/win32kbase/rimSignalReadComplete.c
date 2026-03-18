/*
 * XREFs of rimSignalReadComplete @ 0x1C0175050
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0173608 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0023F98 (WPP_RECORDER_SF_qqqq.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     RIMArmWatchDog @ 0x1C0152E78 (RIMArmWatchDog.c)
 *     RIMIsInputSuppressed @ 0x1C0166258 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01665DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C01730D8 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0173300 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int updated; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // edx

  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) && (a2[25].LowPart & 0x80u) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v4,
        1,
        10,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        (char)a2,
        a2[2].QuadPart);
    }
    InputTraceLogging::RIM::DropInput((__int64)a2);
    *((_BYTE *)a1 + 584) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 584) )
  {
    RIMLockExclusive((__int64)&gWatchDogQPCLock);
    *((LARGE_INTEGER *)a1 + 89) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 180) = 1;
    RIMArmWatchDog();
    qword_1C024E398 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (a2[25].LowPart & 0x80u) != 0 && *(_DWORD *)(a2[60].QuadPart + 24) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_14:
          InputTraceLogging::RIM::ReadComplete(a1, (const struct RIMDEV *)a2);
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          a2[23].LowPart |= 0x80000000;
          a2[283] = PerformanceCounter;
          a2[281] = a2[282];
          a2[284] = a2[285];
          ZwSetEvent(*((HANDLE *)a1 + 81), 0LL);
          ZwClose(*((HANDLE *)a1 + 81));
          *((_QWORD *)a1 + 81) = 0LL;
          return;
        }
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v5,
          1,
          11,
          (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
          updated);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qqqq(
        v6,
        v5,
        v7,
        12,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        (char)a1,
        (char)a2,
        a2[2].QuadPart,
        *((_QWORD *)a1 + 81));
    }
    goto LABEL_14;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qq(
      (_DWORD)gRimLog,
      v10,
      1,
      13,
      (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
      (char)a2,
      a2[2].QuadPart);
  }
}
