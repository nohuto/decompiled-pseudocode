/*
 * XREFs of EtwpStopTrace @ 0x1406EDFEC
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpAcquireLoggerContext @ 0x1406EF020 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406EF140 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0AEC (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 result; // rax
  __int16 v8; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  int LoggerInfoFromContext; // edi
  struct _KEVENT *v12; // rbx
  __int64 v13; // rdx
  __int64 Lock; // rdi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  v6 = a3;
  result = EtwpValidateLoggerInfo(a2, 0xFFFFFFFFLL, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v8;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v12 = (struct _KEVENT *)P;
      if ( !v6 )
      {
        if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
        {
          LOBYTE(v10) = 1;
          EtwpReleaseLoggerContext(P, v10);
          LoggerInfoFromContext = -1073741535;
          goto LABEL_22;
        }
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u);
        if ( LoggerInfoFromContext < 0 )
        {
          LOBYTE(v13) = 1;
          EtwpReleaseLoggerContext(v12, v13);
          goto LABEL_22;
        }
      }
      Lock = (unsigned int)v12->Header.Lock;
      if ( (HIDWORD(v12->Header.WaitListHead.Flink) & 0x400) == 0 )
      {
        Flink = v12[1].Header.WaitListHead.Flink;
        ObReferenceObjectByPointer(Flink, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent(v12 + 19);
        v16 = (unsigned int)Lock;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * Lock),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v12);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v16),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        LOBYTE(v17) = 1;
        EtwpReleaseLoggerContext(v12, v17);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( SLODWORD(v12[1].Header.WaitListHead.Blink) >= 0 )
          {
            while ( KeWaitForSingleObject(&v12[19], Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v12);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = (int)v12[1].Header.WaitListHead.Blink;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v18, &ETW_EVENT_STOP_TRACE, v12);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v16), 1u);
        }
        KeLeaveCriticalRegion();
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(Flink, Executive, 0, 0, 0LL);
        ObfDereferenceObject(Flink);
        return (unsigned int)LoggerInfoFromContext;
      }
      v19 = EtwpStopLoggerInstance((unsigned __int64)v12);
      LOBYTE(v20) = 1;
      LoggerInfoFromContext = v19;
      EtwpReleaseLoggerContext(v12, v20);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v12);
        EtwpFreeLoggerContext((char *)v12);
      }
    }
LABEL_22:
    KeLeaveCriticalRegion();
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
