/*
 * XREFs of EtwpStopTrace @ 0x1406B529C
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 result; // rax
  __int16 v8; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // rbx
  __int64 v15; // rdi
  struct _DMA_ADAPTER *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
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
      v14 = (unsigned int *)P;
      if ( !v6 )
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
          EtwpReleaseLoggerContext(v14, 1);
          goto LABEL_22;
        }
      }
      v15 = *v14;
      if ( (v14[3] & 0x400) == 0 )
      {
        v16 = (struct _DMA_ADAPTER *)*((_QWORD *)v14 + 6);
        ObReferenceObjectByPointer(v16, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent((PRKEVENT)(v14 + 118));
        v17 = (unsigned int)v15;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v15),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v14);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v17),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        EtwpReleaseLoggerContext(v14, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( (v14[14] & 0x80000000) == 0 )
          {
            while ( KeWaitForSingleObject(v14 + 118, Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v14);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = v14[14];
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v21, &ETW_EVENT_STOP_TRACE, v14);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v17), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
        HalPutDmaAdapter(v16);
        return (unsigned int)LoggerInfoFromContext;
      }
      LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v14);
      EtwpReleaseLoggerContext(v14, 1);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v14);
        EtwpFreeLoggerContext((char *)v14);
      }
    }
LABEL_22:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v12, v13);
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
