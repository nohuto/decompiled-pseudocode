/*
 * XREFs of EtwpFlushTrace @ 0x1406B4984
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1406B6324 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCCSwapStop @ 0x140798A70 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v10; // rbx
  ACCESS_MASK v11; // r8d
  int v12; // ebp
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  UNICODE_STRING v19; // xmm0
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = 0LL;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v7, &v24);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeAnsiString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
      return (unsigned int)LoggerInfoFromContext;
    }
    v10 = v24;
    if ( (*(_DWORD *)(v24 + 12) & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v11 = ((*(_DWORD *)(v24 + 12) & 0x100 | 0x400u) >> 3) | 0x40;
      if ( !*(_QWORD *)(v24 + 816) )
        v11 = (*(_DWORD *)(v24 + 12) & 0x100 | 0x400u) >> 3;
      v12 = *(_DWORD *)(v24 + 12) & 0x400;
      if ( v12 )
      {
        if ( !*(_QWORD *)(a2 + 136) || (v13 = a2 + 128, !*(_WORD *)(a2 + 128)) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_14;
        }
        v11 |= 0x40u;
      }
      else
      {
        v13 = a2 + 128;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v11, v24);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v12 )
        {
          v14 = EtwpSynchronizeWithLogger(v10, 4u);
LABEL_11:
          LoggerInfoFromContext = v14;
          if ( v14 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_FLUSH_TRACE, v10);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = EtwpCaptureString(v13, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v19 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v10 + 200) = v19;
          _InterlockedOr((volatile signed __int32 *)(v10 + 836), 1u);
          v20 = *(_DWORD *)(v10 + 12);
          v10 = v24;
          if ( (v20 & 0x2000000) != 0 )
          {
            v21 = 32LL * *(unsigned __int8 *)(v24 + 834) + a1 + 4260;
            if ( v21 )
            {
              v22 = *(_DWORD *)(v21 + 4);
              if ( (v22 & 4) != 0 && (v22 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v24 + 216), 0LL);
            }
          }
          v14 = EtwpBufferingModeFlush(v10);
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    EtwpReleaseLoggerContext((unsigned int *)v10, 1);
    goto LABEL_15;
  }
  return result;
}
