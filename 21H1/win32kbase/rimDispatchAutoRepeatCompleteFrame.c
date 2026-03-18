/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C017BD68
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C017974C (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C017B508 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDispatchAutoRepeatCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  LONG_PTR result; // rax
  char **v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rcx
  bool v10; // zf
  _DWORD v11[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = *((unsigned int *)a2 + 50);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *((_QWORD *)a1 + 43) == -1LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *((_BYTE *)a1 + 584) )
  {
    result = (LONG_PTR)a1 + 552;
    if ( *(_QWORD *)result == result )
    {
      v5 = (char **)*((_QWORD *)a2 + 51);
      if ( v5 )
      {
        Object = 0LL;
        result = RawInputManagerDeviceObjectResolveHandle(v5[4], 3u, *((_DWORD *)v5 + 20) == 0, &Object);
        if ( (int)result >= 0 )
        {
          if ( *((PVOID *)a2 + 4) == Object )
          {
            if ( !*((_DWORD *)v5 + 6) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
            v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            if ( PerformanceCounter.QuadPart - (__int64)v5[12] >= *((_QWORD *)a1 + 45) )
            {
              v5[9] = 0LL;
              *((_DWORD *)v5 + 23) = v7;
              v5[12] = (char *)PerformanceCounter.QuadPart;
              v5[5] = (char *)PerformanceCounter.QuadPart;
              *((_BYTE *)a1 + 584) = 0;
              RIMFixUpAutoRepeatCompleteFrameTimeStamps((__int64)a1, (__int64)a2, (__int64)v5);
              InputTraceLogging::RIM::DispatchFrame((__int64)a2, (__int64)v5, 1);
              v11[1] = 0;
              v11[0] = 0;
              v10 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
              v12 = *(unsigned int *)v5;
              if ( !v10 )
              {
                if ( v5[4] != *((char **)a2 + 3) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
                if ( !*((_DWORD *)v5 + 20) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
              }
              rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)v5, (unsigned int)v11, 1);
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
