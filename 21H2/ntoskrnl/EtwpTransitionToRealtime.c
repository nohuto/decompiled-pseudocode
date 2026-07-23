/*
 * XREFs of EtwpTransitionToRealtime @ 0x1403F91C4
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpTransitionToRealtime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // eax
  int *v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v18);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_20:
      KeLeaveCriticalRegion();
      return (unsigned int)LoggerInfoFromContext;
    }
    v10 = v18;
    v11 = *(_DWORD *)(v18 + 12);
    if ( (v11 & 0x540) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0xA0u);
      if ( LoggerInfoFromContext >= 0 )
      {
        EtwpSynchronizeWithLogger(v10, 4100LL);
        if ( *(_QWORD *)(v10 + 816) )
        {
          LoggerInfoFromContext = -1073741823;
          if ( *(_DWORD *)(v10 + 56) )
            LoggerInfoFromContext = *(_DWORD *)(v10 + 56);
          goto LABEL_19;
        }
        RtlFreeAnsiString((PUNICODE_STRING)(v10 + 168));
        RtlFreeAnsiString((PUNICODE_STRING)(v10 + 184));
        RtlFreeAnsiString((PUNICODE_STRING)(v10 + 200));
        v12 = v11 & 0xFBFFFCD0 | 0x100;
        v13 = v11 & 0xFBFFFCC0 | 0x110;
        v14 = v12 & 0xFFFFFFEF;
        if ( (*(_DWORD *)(a2 + 64) & 0x10) == 0 )
          v13 = v14;
        v15 = (int *)(v10 + 224);
        *(_DWORD *)(v10 + 12) = v13;
        v16 = *(_DWORD *)(a2 + 68);
        if ( !v16 )
        {
          if ( *v15 )
            goto LABEL_16;
          v16 = 1000;
          if ( (v13 & 0x10) == 0 )
            v16 = 1;
        }
        *v15 = v16;
        EtwpSynchronizeWithLogger(v10, 4LL);
LABEL_16:
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
          EtwpEventWriteTemplateSession(v17, &ETW_EVENT_UPDATE_TRACE, v10);
      }
    }
LABEL_19:
    LOBYTE(v8) = 1;
    EtwpReleaseLoggerContext(v10, v8);
    goto LABEL_20;
  }
  return result;
}
