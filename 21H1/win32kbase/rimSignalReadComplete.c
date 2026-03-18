/*
 * XREFs of rimSignalReadComplete @ 0x1C017D180
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C017BD68 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C00A3558 (WPP_RECORDER_SF_qqqq.c)
 *     RIMArmWatchDog @ 0x1C015B728 (RIMArmWatchDog.c)
 *     RIMIsInputSuppressed @ 0x1C016EB08 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C017B838 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C017BA60 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
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
        (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
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
    qword_1C0256368 = 0LL;
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
          (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
          updated);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqq(
        v4,
        4u,
        v5,
        0xCu,
        (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
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
      (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
      a2,
      *((_QWORD *)a2 + 2));
}
