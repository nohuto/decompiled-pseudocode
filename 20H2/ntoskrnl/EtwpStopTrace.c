/*
 * XREFs of EtwpStopTrace @ 0x140713944
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140202F70 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     ObReferenceObjectByPointer @ 0x1402E15A0 (ObReferenceObjectByPointer.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14066AA50 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwpAcquireLoggerContext @ 0x140714878 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14071499C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140714BA0 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x14093C6AC (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 result; // rax
  __int16 v8; // dx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v11; // rbx
  __int64 v12; // rdi
  struct _DMA_ADAPTER *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
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
      v11 = (unsigned int *)P;
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
          EtwpReleaseLoggerContext(v11, 1);
          goto LABEL_22;
        }
      }
      v12 = *v11;
      if ( (v11[3] & 0x400) == 0 )
      {
        v13 = (struct _DMA_ADAPTER *)*((_QWORD *)v11 + 6);
        ObReferenceObjectByPointer(v13, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent((PRKEVENT)(v11 + 118));
        v14 = (unsigned int)v12;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v12),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v11);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v14),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        EtwpReleaseLoggerContext(v11, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( (v11[14] & 0x80000000) == 0 )
          {
            while ( KeWaitForSingleObject(v11 + 118, Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = v11[14];
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_STOP_TRACE, v11);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v14), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
        HalPutDmaAdapter(v13);
        return (unsigned int)LoggerInfoFromContext;
      }
      LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v11);
      EtwpReleaseLoggerContext(v11, 1);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
        EtwpFreeLoggerContext((char *)v11);
      }
    }
LABEL_22:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
