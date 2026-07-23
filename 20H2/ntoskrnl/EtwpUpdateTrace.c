/*
 * XREFs of EtwpUpdateTrace @ 0x14078C87C
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     EtwpQueryUsedProcessorCount @ 0x1402670A4 (EtwpQueryUsedProcessorCount.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     SeCreateClientSecurity @ 0x140620190 (SeCreateClientSecurity.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066A56C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066A5AC (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpCheckLoggerControlAccess @ 0x14066AA50 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateFlagExtension @ 0x140713200 (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x1407138C0 (EtwpCheckForStackTracingExtension.c)
 *     EtwpAcquireLoggerContext @ 0x140714878 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14071499C (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x140714A90 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140714BA0 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140714EAC (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14078C7EC (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14078CCAC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078ED10 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x140936C74 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x14093C6AC (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x14093F580 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140943D5C (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  unsigned int *p_Length; // rdi
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
  struct _SECURITY_CLIENT_CONTEXT *v29; // [rsp+A0h] [rbp+50h] BYREF
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
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, (unsigned int **)&v29);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)LoggerInfoFromContext;
      }
      p_Length = &v29->SecurityQos.Length;
      v9 = *(_DWORD *)(a2 + 64);
      v10 = *((_DWORD *)&v29->SecurityQos + 3);
      v26 = (unsigned int *)(&v29->SecurityQos + 1);
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
        v20 = (struct _DMA_ADAPTER *)*((_QWORD *)p_Length + 92);
        if ( v20 )
        {
          HalPutDmaAdapter(v20);
          *((_QWORD *)p_Length + 92) = 0LL;
        }
        p_Length = &v29->SecurityQos.Length;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, v29 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v21 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(p_Length + 50) = v21;
        EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)p_Length, 2u);
        if ( LoggerInfoFromContext < 0 || !p_Length[84] )
          goto LABEL_7;
      }
      if ( (v10 & 0x400) != 0 )
        goto LABEL_18;
      if ( (v9 & 0x100) != 0 )
      {
        v10 |= 0x100u;
        if ( !p_Length[56] )
          p_Length[56] = (v10 & 0x10) != 0 ? 1000 : 1;
LABEL_18:
        v12 = p_Length + 73;
        v13 = *(_QWORD *)(p_Length + 73);
        v14 = *(_QWORD *)&HeapGuid.Data1 - v13;
        if ( *(_QWORD *)&HeapGuid.Data1 == v13 )
          v14 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(p_Length + 75);
        if ( v14 )
        {
          v15 = *(_QWORD *)&CritSecGuid.Data1 - v13;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v13 )
            v15 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(p_Length + 75);
          if ( v15 )
          {
LABEL_24:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, (__int64)p_Length);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v26 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(p_Length, 128LL), LoggerInfoFromContext >= 0)
                && (a1 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension((__int64)p_Length, a2, 0),
                     LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks(p_Length, a2), LoggerInfoFromContext >= 0) )
              {
                v16 = *(_DWORD *)(a2 + 56);
                if ( v16 )
                {
                  if ( p_Length[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(p_Length);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v16 > SystemMaximumBufferCount )
                  {
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                    v16 = SystemMaximumBufferCount;
                  }
                  if ( v16 > p_Length[63] )
                    p_Length[63] = v16;
                }
                if ( (v10 & 0x400) == 0 )
                {
                  v17 = *(_DWORD *)(a2 + 68);
                  if ( v17 )
                  {
                    if ( v17 != p_Length[56] )
                    {
                      p_Length[56] = v17;
                      EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
                    }
                  }
                }
                if ( (v9 & 0x80000) == 0 )
                {
                  if ( (v10 & 0x80000) != 0 )
                    v10 &= ~0x80000u;
                  goto LABEL_36;
                }
                if ( p_Length[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)p_Length + 209, 0x800u);
                  v10 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    p_Length = &v29->SecurityQos.Length;
                  }
                  else
                  {
                    p_Length = &v29->SecurityQos.Length;
                    EtwpSendDbgId(v29);
                  }
LABEL_36:
                  if ( (v9 & 0x80u) == 0
                    || (v30 = 0LL,
                        EtwpGetSecurityDescriptorByGuid(v12, &v30),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(p_Length, v30),
                        EtwpFreeSecurityDescriptor(&v30),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v26 = v10;
                    v18 = *(_DWORD *)(a2 + 76);
                    if ( v18 )
                    {
                      if ( p_Length[56] || (v10 & 0x400) != 0 )
                        goto LABEL_87;
                      v24 = p_Length[63] - EtwpQueryUsedProcessorCount((__int64)p_Length);
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
                    p_Length[57] = v18;
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)p_Length);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v19, &ETW_EVENT_UPDATE_TRACE, p_Length);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_7:
            RtlFreeAnsiString(&UnicodeString);
            EtwpReleaseLoggerContext(p_Length, 1);
            goto LABEL_8;
          }
          v22 = 1LL;
        }
        else
        {
          v22 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *p_Length, v22);
        goto LABEL_24;
      }
      if ( (v10 & 0x100) == 0 )
        goto LABEL_18;
      if ( *((_QWORD *)p_Length + 102) )
      {
        v10 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)p_Length, 8u);
        goto LABEL_18;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
