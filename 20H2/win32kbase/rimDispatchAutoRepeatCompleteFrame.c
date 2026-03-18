/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C0173608
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C0170FEC (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C0172DA8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01752DC (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDispatchAutoRepeatCompleteFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        __int64 a4)
{
  LONG_PTR result; // rax
  char **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  _DWORD v20[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = *((unsigned int *)a2 + 50);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *((_QWORD *)a1 + 43) == -1LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *((_BYTE *)a1 + 584) )
  {
    result = (LONG_PTR)a1 + 552;
    if ( *(_QWORD *)result == result )
    {
      v7 = (char **)*((_QWORD *)a2 + 51);
      if ( v7 )
      {
        Object = 0LL;
        result = RawInputManagerDeviceObjectResolveHandle(v7[4], 3u, *((_DWORD *)v7 + 20) == 0, &Object);
        if ( (int)result >= 0 )
        {
          if ( *((PVOID *)a2 + 4) == Object )
          {
            if ( !*((_DWORD *)v7 + 6) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
            v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            if ( PerformanceCounter.QuadPart - (__int64)v7[12] >= *((_QWORD *)a1 + 45) )
            {
              v7[9] = 0LL;
              *((_DWORD *)v7 + 23) = v12;
              v7[12] = (char *)PerformanceCounter.QuadPart;
              v7[5] = (char *)PerformanceCounter.QuadPart;
              *((_BYTE *)a1 + 584) = 0;
              RIMFixUpAutoRepeatCompleteFrameTimeStamps((__int64)a1, (__int64)a2, (__int64)v7, v14.QuadPart);
              InputTraceLogging::RIM::DispatchFrame((__int64)a2, (__int64)v7, 1);
              v20[1] = 0;
              v20[0] = 0;
              v19 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
              v21 = *(unsigned int *)v7;
              if ( !v19 )
              {
                if ( v7[4] != *((char **)a2 + 3) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
                if ( !*((_DWORD *)v7 + 20) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
              }
              rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)v7, (unsigned int)v20, 1);
              rimSignalReadComplete(a1, a2);
            }
          }
          return ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      return rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return result;
}
