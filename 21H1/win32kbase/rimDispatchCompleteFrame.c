/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C017BF34
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C017C3A8 (rimProcessCompleteFrame.c)
 * Callees:
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005170C (rimFreeAutoRepeatCompleteFrame.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C0179808 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, LARGE_INTEGER *a3)
{
  bool v5; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-30h]
  __int64 *v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v16[3]; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  v5 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
  LowPart = a3->LowPart;
  if ( !v5 )
  {
    if ( a3[4].QuadPart != *((_QWORD *)a2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( !a3[10].LowPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  }
  a3[11].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[12] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v13, 1);
  if ( !*((_QWORD *)a1 + 80) && !*((_BYTE *)a1 + 584) && *((_QWORD *)a2 + 3) )
  {
    v15[1] = (__int64 *)a2;
    v15[0] = (__int64 *)((char *)a1 + 48);
    HMAssignmentLock(v15);
    v16[0] = (__int64 *)((char *)a1 + 56);
    v16[1] = *((__int64 **)a2 + 60);
    HMAssignmentLock(v16);
  }
  rimSignalReadComplete(a1, a2);
  if ( *((_QWORD *)a1 + 43) == -1LL || (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 51) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    Win32FreePool((__int64)a3, v7, v9);
  }
  else
  {
    rimFreeAutoRepeatCompleteFrame((__int64)a2);
    RIMFixUpAutoRepeatCompleteFrameUpDowns((__int64)a1, (__int64)a2, (__int64)a3);
    if ( a3[3].LowPart )
    {
      a3[11].LowPart = 1;
      *((_DWORD *)a2 + 47) |= 1u;
      *((_QWORD *)a2 + 51) = a3;
    }
    else
    {
      if ( *((_QWORD *)a2 + 51) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      Win32FreePool((__int64)a3, v10, v12);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v10,
        1,
        19,
        (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
        a2,
        v13,
        LowPart);
    }
  }
}
