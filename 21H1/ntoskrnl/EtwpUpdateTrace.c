/*
 * XREFs of EtwpUpdateTrace @ 0x14077FAB8
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x140938024 (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405F2620 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405F289C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405F28DC (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateFlagExtension @ 0x140678F6C (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14067961C (EtwpCheckForStackTracingExtension.c)
 *     EtwpAcquireLoggerContext @ 0x14067A62C (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14067A750 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x14067A844 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14067A954 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x14067AC08 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14077FD78 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140780E28 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x140780EB8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x14092FB94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x1409355DC (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x1409384B0 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14093CD20 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int LoggerInfoFromContext; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rdi
  int v12; // r15d
  unsigned int v13; // r14d
  ACCESS_MASK v14; // eax
  unsigned int *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  struct _DMA_ADAPTER *v23; // rcx
  UNICODE_STRING v24; // xmm0
  __int64 v25; // r9
  unsigned int SystemMaximumBufferCount; // eax
  int v27; // ecx
  int v28; // ecx
  unsigned int *v29; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp+50h] BYREF
  void *v33; // [rsp+A8h] [rbp+58h] BYREF

  v32 = 0LL;
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
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, (__int64 *)&v32);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v9, v10);
        return (unsigned int)LoggerInfoFromContext;
      }
      v11 = v32;
      v12 = *(_DWORD *)(a2 + 64);
      v13 = v32[3];
      v29 = v32 + 3;
      if ( (v13 & 0x40) != 0
        || (v12 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v12 & 2) != 0 && (v13 & 2) == 0
        || (v12 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v14 = ((v13 | v12) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v14 |= 0x40u;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v14, (__int64)v32);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v13 & 8) != 0 || (v12 & 8) != 0 || (v13 & 0x400) != 0 )
          goto LABEL_6;
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v23 = (struct _DMA_ADAPTER *)*((_QWORD *)v11 + 92);
        if ( v23 )
        {
          HalPutDmaAdapter(v23);
          *((_QWORD *)v11 + 92) = 0LL;
        }
        v11 = v32;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(
                                  KeGetCurrentThread(),
                                  &ClientSecurityQos,
                                  0,
                                  (PSECURITY_CLIENT_CONTEXT)v32 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v24 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v11 + 50) = v24;
        EtwpSynchronizeWithLogger((__int64)v11, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v11, 2u);
        if ( LoggerInfoFromContext < 0 || !v11[84] )
          goto LABEL_7;
      }
      if ( (v13 & 0x400) != 0 )
        goto LABEL_18;
      if ( (v12 & 0x100) != 0 )
      {
        v13 |= 0x100u;
        if ( !v11[56] )
          v11[56] = (v13 & 0x10) != 0 ? 1000 : 1;
LABEL_18:
        v15 = v11 + 73;
        v16 = *(_QWORD *)(v11 + 73);
        v17 = *(_QWORD *)&HeapGuid.Data1 - v16;
        if ( *(_QWORD *)&HeapGuid.Data1 == v16 )
          v17 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v11 + 75);
        if ( v17 )
        {
          v18 = *(_QWORD *)&CritSecGuid.Data1 - v16;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v16 )
            v18 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v11 + 75);
          if ( v18 )
          {
LABEL_24:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, (__int64)v11);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v29 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(v11, 128LL), LoggerInfoFromContext >= 0)
                && (a1 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension(v11, a2, 0LL), LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks(v11, a2), LoggerInfoFromContext >= 0) )
              {
                v19 = *(_DWORD *)(a2 + 56);
                if ( v19 )
                {
                  if ( v11[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v11);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v19 > SystemMaximumBufferCount )
                  {
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                    v19 = SystemMaximumBufferCount;
                  }
                  if ( v19 > v11[63] )
                    v11[63] = v19;
                }
                if ( (v13 & 0x400) == 0 )
                {
                  v20 = *(_DWORD *)(a2 + 68);
                  if ( v20 )
                  {
                    if ( v20 != v11[56] )
                    {
                      v11[56] = v20;
                      EtwpSynchronizeWithLogger((__int64)v11, 4u);
                    }
                  }
                }
                if ( (v12 & 0x80000) == 0 )
                {
                  if ( (v13 & 0x80000) != 0 )
                    v13 &= ~0x80000u;
                  goto LABEL_36;
                }
                if ( v11[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v11 + 209, 0x800u);
                  v13 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    v11 = v32;
                  }
                  else
                  {
                    v11 = v32;
                    EtwpSendDbgId(v32);
                  }
LABEL_36:
                  if ( (v12 & 0x80u) == 0
                    || (v33 = 0LL,
                        EtwpGetSecurityDescriptorByGuid(v15, &v33),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(v11, v33),
                        EtwpFreeSecurityDescriptor(&v33),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v29 = v13;
                    v21 = *(_DWORD *)(a2 + 76);
                    if ( v21 )
                    {
                      if ( v11[56] || (v13 & 0x400) != 0 )
                        goto LABEL_87;
                      v27 = v11[63] - EtwpQueryUsedProcessorCount((__int64)v11);
                      v21 = *(_DWORD *)(a2 + 76);
                      v28 = v27 - 1;
                      if ( v21 > v28 )
                      {
                        *(_DWORD *)(a2 + 76) = v28;
                        v21 = v28;
                      }
                      if ( v21 < 0 )
                      {
LABEL_87:
                        *(_DWORD *)(a2 + 76) = 0;
                        v21 = 0;
                      }
                    }
                    v11[57] = v21;
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v11);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v22, &ETW_EVENT_UPDATE_TRACE, v11);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_7:
            RtlFreeAnsiString(&UnicodeString);
            EtwpReleaseLoggerContext(v11, 1);
            goto LABEL_8;
          }
          v25 = 1LL;
        }
        else
        {
          v25 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v11, v25);
        goto LABEL_24;
      }
      if ( (v13 & 0x100) == 0 )
        goto LABEL_18;
      if ( *((_QWORD *)v11 + 102) )
      {
        v13 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)v11, 8u);
        goto LABEL_18;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
