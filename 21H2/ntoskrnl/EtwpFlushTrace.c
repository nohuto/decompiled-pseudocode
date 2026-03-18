/*
 * XREFs of EtwpFlushTrace @ 0x1406ECACC
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406EF020 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406EF140 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1406EF170 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpCCSwapStop @ 0x140814F44 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0AEC (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r15d
  ACCESS_MASK v13; // r8d
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rcx
  UNICODE_STRING v17; // xmm0
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = 0LL;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v7, &v22);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeUnicodeString(&UnicodeString);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v10 = v22;
    v11 = 1024LL;
    v12 = *(_DWORD *)(v22 + 12);
    v13 = ((v12 & 0x100 | 0x400u) >> 3) | 0x40;
    if ( !*(_QWORD *)(v22 + 800) )
      v13 = (*(_DWORD *)(v22 + 12) & 0x100 | 0x400u) >> 3;
    if ( (v12 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v14 = a2 + 128, !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v13 |= 0x40u;
    }
    else
    {
      v14 = a2 + 128;
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v13);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v12 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v14, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v17 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v10 + 184) = v17;
          _InterlockedOr((volatile signed __int32 *)(v10 + 824), 1u);
          v18 = *(_DWORD *)(v10 + 12);
          v10 = v22;
          if ( (v18 & 0x2000000) != 0 )
          {
            v19 = 32LL * *(unsigned __int8 *)(v22 + 818) + a1 + 4284;
            if ( v19 )
            {
              v20 = *(_DWORD *)(v19 + 4);
              if ( (v20 & 4) != 0 && (v20 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v22 + 200), 0LL);
            }
          }
          v15 = EtwpBufferingModeFlush(v10);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v12 & 0x40000) == 0 )
        {
          v15 = EtwpSynchronizeWithLogger(v10, 4u);
LABEL_11:
          LoggerInfoFromContext = v15;
          if ( v15 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v16, &ETW_EVENT_FLUSH_TRACE, v10);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    LOBYTE(v11) = 1;
    EtwpReleaseLoggerContext(v10, v11);
    goto LABEL_15;
  }
  return result;
}
