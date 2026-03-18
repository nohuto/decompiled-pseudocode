/*
 * XREFs of EtwpStopTrace @ 0x1406C75AC
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     ObReferenceObjectByPointer @ 0x14026E130 (ObReferenceObjectByPointer.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140311DB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140645514 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x14093687C (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  struct _DMA_ADAPTER *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64)a2, (__int64 *)&P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( !a3 )
      {
        if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
        {
          EtwpReleaseLoggerContext((unsigned int *)P, 1);
          LoggerInfoFromContext = -1073741535;
          goto LABEL_22;
        }
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
        if ( LoggerInfoFromContext < 0 )
        {
          EtwpReleaseLoggerContext(v10, 1);
          goto LABEL_22;
        }
      }
      v11 = *v10;
      if ( (v10[3] & 0x400) == 0 )
      {
        v12 = (struct _DMA_ADAPTER *)*((_QWORD *)v10 + 6);
        ObReferenceObjectByPointer(v12, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent((PRKEVENT)(v10 + 118));
        v13 = (unsigned int)v11;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v11),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v10);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v13),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        EtwpReleaseLoggerContext(v10, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( (v10[14] & 0x80000000) == 0 )
          {
            while ( KeWaitForSingleObject(v10 + 118, Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = v10[14];
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v14, &ETW_EVENT_STOP_TRACE, v10);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v13), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
        HalPutDmaAdapter(v12);
        return (unsigned int)LoggerInfoFromContext;
      }
      LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v10);
      EtwpReleaseLoggerContext(v10, 1);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
        EtwpFreeLoggerContext(v10);
      }
    }
LABEL_22:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
