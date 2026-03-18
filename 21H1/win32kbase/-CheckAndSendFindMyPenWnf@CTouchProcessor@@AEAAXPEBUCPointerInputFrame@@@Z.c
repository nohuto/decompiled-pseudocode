/*
 * XREFs of ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018F324
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C019D8A4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndSendFindMyPenWnf(LARGE_INTEGER *this, const struct CPointerInputFrame *a2)
{
  __int64 v3; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v5; // rcx

  if ( *((_DWORD *)a2 + 12) )
  {
    v3 = *((_QWORD *)a2 + 17);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 168) == 3 && (*(_DWORD *)(*((_QWORD *)a2 + 19) + 312LL) & 8) == 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( this[25].QuadPart + 5000 * gliQpcFreq.QuadPart / 0x3E8uLL < PerformanceCounter.QuadPart )
        {
          this[25] = PerformanceCounter;
          if ( (int)ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, &gSessionId, 0, 0) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
        }
      }
    }
  }
}
