/*
 * XREFs of EtwpUpdateTrace @ 0x140780C28
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwpQueryUsedProcessorCount @ 0x14027DFDC (EtwpQueryUsedProcessorCount.c)
 *     EtwpCaptureString @ 0x140645208 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140645514 (EtwpValidateLoggerInfo.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066ABD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066B088 (EtwpFreeSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     SeCreateClientSecurity @ 0x1406821A0 (SeCreateClientSecurity.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpValidateFlagExtension @ 0x1406C78B4 (EtwpValidateFlagExtension.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1406CAF94 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406CB02C (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F2A8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14077F2D8 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14077F39C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdatePerProcessTracing @ 0x140930E44 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x14093687C (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x140939750 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14093DF9C (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  unsigned int *v8; // rdi
  int v9; // r15d
  unsigned int v10; // r14d
  ACCESS_MASK v11; // eax
  unsigned int *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  struct _DMA_ADAPTER *v20; // rcx
  UNICODE_STRING v21; // xmm0
  __int64 v22; // r9
  unsigned int SystemMaximumBufferCount; // eax
  int v24; // ecx
  int v25; // ecx
  unsigned int *v26; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v29; // [rsp+A0h] [rbp+50h] BYREF
  void *v30; // [rsp+A8h] [rbp+58h] BYREF

  v29 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v5);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, (__int64 *)&v29);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)LoggerInfoFromContext;
      }
      v8 = v29;
      v9 = *(_DWORD *)(a2 + 64);
      v10 = v29[3];
      v26 = v29 + 3;
      if ( (v10 & 0x40) != 0
        || (v9 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v9 & 2) != 0 && (v10 & 2) == 0
        || (v9 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v11 = ((v10 | v9) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v11 |= 0x40u;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v11, (__int64)v29);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v10 & 8) != 0 || (v9 & 8) != 0 || (v10 & 0x400) != 0 )
          goto LABEL_6;
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v20 = (struct _DMA_ADAPTER *)*((_QWORD *)v8 + 92);
        if ( v20 )
        {
          HalPutDmaAdapter(v20);
          *((_QWORD *)v8 + 92) = 0LL;
        }
        v8 = v29;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(
                                  KeGetCurrentThread(),
                                  &ClientSecurityQos,
                                  0,
                                  (PSECURITY_CLIENT_CONTEXT)v29 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v21 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v8 + 50) = v21;
        EtwpSynchronizeWithLogger((__int64)v8, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v8, 2u);
        if ( LoggerInfoFromContext < 0 || !v8[84] )
          goto LABEL_7;
      }
      if ( (v10 & 0x400) != 0 )
        goto LABEL_18;
      if ( (v9 & 0x100) != 0 )
      {
        v10 |= 0x100u;
        if ( !v8[56] )
          v8[56] = (v10 & 0x10) != 0 ? 1000 : 1;
LABEL_18:
        v12 = v8 + 73;
        v13 = *(_QWORD *)(v8 + 73);
        v14 = *(_QWORD *)&HeapGuid.Data1 - v13;
        if ( *(_QWORD *)&HeapGuid.Data1 == v13 )
          v14 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v8 + 75);
        if ( v14 )
        {
          v15 = *(_QWORD *)&CritSecGuid.Data1 - v13;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v13 )
            v15 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v8 + 75);
          if ( v15 )
          {
LABEL_24:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, (__int64)v8);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v26 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess((__int64)v8, 0x80u), LoggerInfoFromContext >= 0)
                && (a1 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension((__int64)v8, a2, 0),
                     LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks((__int64)v8, a2), LoggerInfoFromContext >= 0) )
              {
                v16 = *(_DWORD *)(a2 + 56);
                if ( v16 )
                {
                  if ( v8[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v8);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v16 > SystemMaximumBufferCount )
                  {
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                    v16 = SystemMaximumBufferCount;
                  }
                  if ( v16 > v8[63] )
                    v8[63] = v16;
                }
                if ( (v10 & 0x400) == 0 )
                {
                  v17 = *(_DWORD *)(a2 + 68);
                  if ( v17 )
                  {
                    if ( v17 != v8[56] )
                    {
                      v8[56] = v17;
                      EtwpSynchronizeWithLogger((__int64)v8, 4u);
                    }
                  }
                }
                if ( (v9 & 0x80000) == 0 )
                {
                  if ( (v10 & 0x80000) != 0 )
                    v10 &= ~0x80000u;
                  goto LABEL_36;
                }
                if ( v8[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v8 + 209, 0x800u);
                  v10 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    v8 = v29;
                  }
                  else
                  {
                    v8 = v29;
                    EtwpSendDbgId(v29);
                  }
LABEL_36:
                  if ( (v9 & 0x80u) == 0
                    || (v30 = 0LL,
                        EtwpGetSecurityDescriptorByGuid(v12, &v30),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(v8, v30),
                        EtwpFreeSecurityDescriptor(&v30),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v26 = v10;
                    v18 = *(_DWORD *)(a2 + 76);
                    if ( v18 )
                    {
                      if ( v8[56] || (v10 & 0x400) != 0 )
                        goto LABEL_87;
                      v24 = v8[63] - EtwpQueryUsedProcessorCount((__int64)v8);
                      v18 = *(_DWORD *)(a2 + 76);
                      v25 = v24 - 1;
                      if ( v18 > v25 )
                      {
                        *(_DWORD *)(a2 + 76) = v25;
                        v18 = v25;
                      }
                      if ( v18 < 0 )
                      {
LABEL_87:
                        *(_DWORD *)(a2 + 76) = 0;
                        v18 = 0;
                      }
                    }
                    v8[57] = v18;
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v8);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v19, &ETW_EVENT_UPDATE_TRACE, v8);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_7:
            RtlFreeAnsiString(&UnicodeString);
            EtwpReleaseLoggerContext(v8, 1);
            goto LABEL_8;
          }
          v22 = 1LL;
        }
        else
        {
          v22 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v8, v22);
        goto LABEL_24;
      }
      if ( (v10 & 0x100) == 0 )
        goto LABEL_18;
      if ( *((_QWORD *)v8 + 102) )
      {
        v10 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)v8, 8u);
        goto LABEL_18;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
