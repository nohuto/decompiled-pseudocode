/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C01737D4
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C0174278 (rimProcessCompleteFrame.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00BF6BC (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01710A8 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01752DC (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDispatchCompleteFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        LARGE_INTEGER *a3,
        __int64 a4)
{
  bool v6; // zf
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-30h]
  _QWORD v21[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-18h] BYREF

  v19 = 0LL;
  v6 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
  LowPart = a3->LowPart;
  if ( !v6 )
  {
    if ( a3[4].QuadPart != *((_QWORD *)a2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( !a3[10].LowPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  }
  a3[11].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[12] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v19, 1);
  if ( !*((_QWORD *)a1 + 80) && !*((_BYTE *)a1 + 584) && *((_QWORD *)a2 + 3) )
  {
    v21[1] = a2;
    v21[0] = (char *)a1 + 48;
    HMAssignmentLock((__int64)v21, v8);
    v22[0] = (char *)a1 + 56;
    v22[1] = *((_QWORD *)a2 + 60);
    HMAssignmentLock((__int64)v22, v9);
  }
  rimSignalReadComplete(a1, a2);
  if ( *((_QWORD *)a1 + 43) == -1LL || (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 51) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
    Win32FreePool((__int64)a3);
  }
  else
  {
    rimFreeAutoRepeatCompleteFrame((__int64)a2);
    RIMFixUpAutoRepeatCompleteFrameUpDowns((__int64)a1, (__int64)a2, (__int64)a3, v14);
    if ( a3[3].LowPart )
    {
      a3[11].LowPart = 1;
      *((_DWORD *)a2 + 47) |= 1u;
      *((_QWORD *)a2 + 51) = a3;
    }
    else
    {
      if ( *((_QWORD *)a2 + 51) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
      Win32FreePool((__int64)a3);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v15,
        1,
        19,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        a2,
        v19,
        LowPart);
    }
  }
}
