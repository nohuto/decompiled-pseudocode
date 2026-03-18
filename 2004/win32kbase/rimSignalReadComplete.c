/*
 * XREFs of rimSignalReadComplete @ 0x1C0177480
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0175A38 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C0175C04 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0056724 (WPP_RECORDER_SF_qqqq.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     RIMArmWatchDog @ 0x1C01553D8 (RIMArmWatchDog.c)
 *     RIMIsInputSuppressed @ 0x1C01687B8 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0168B3C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0175508 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0175730 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int updated; // eax
  int v7; // edx
  LARGE_INTEGER PerformanceCounter; // rax

  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) && (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)gRimLog,
        4u,
        1u,
        0xAu,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        a2,
        *((_QWORD *)a2 + 2));
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
    qword_1C0250398 = 0LL;
    ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a2 + 60) + 24LL) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_14:
          InputTraceLogging::RIM::ReadComplete(a1, a2);
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          *((_DWORD *)a2 + 46) |= 0x80000000;
          *((LARGE_INTEGER *)a2 + 282) = PerformanceCounter;
          *((_QWORD *)a2 + 280) = *((_QWORD *)a2 + 281);
          *((_QWORD *)a2 + 283) = *((_QWORD *)a2 + 284);
          ZwSetEvent(*((HANDLE *)a1 + 81), 0LL);
          ZwClose(*((HANDLE *)a1 + 81));
          *((_QWORD *)a1 + 81) = 0LL;
          return;
        }
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          v7,
          1,
          11,
          (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
          updated);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqq(
        v4,
        4u,
        v5,
        0xCu,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        a1,
        a2,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a1 + 81));
    goto LABEL_14;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      (__int64)gRimLog,
      4u,
      1u,
      0xDu,
      (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
      a2,
      *((_QWORD *)a2 + 2));
}
