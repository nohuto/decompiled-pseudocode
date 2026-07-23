/*
 * XREFs of EtwpUpdateTrace @ 0x140796F68
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x14063911C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14063915C (EtwpGetSecurityDescriptorByGuid.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     SeCreateClientSecurity @ 0x140652B90 (SeCreateClientSecurity.c)
 *     EtwpValidateFlagExtension @ 0x1406B4AC0 (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406B51C0 (EtwpCheckForStackTracingExtension.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1406B6324 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1406B66E8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14079725C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140798AE8 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x140798B78 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934614 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x14093CF20 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409416FC (EtwpUpdateLoggerSecurityDescriptor.c)
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
  unsigned int *p_Length; // rdi
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
  struct _SECURITY_CLIENT_CONTEXT *v32; // [rsp+A0h] [rbp+50h] BYREF
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
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, (unsigned int **)&v32);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v9, v10);
        return (unsigned int)LoggerInfoFromContext;
      }
      p_Length = &v32->SecurityQos.Length;
      v12 = *(_DWORD *)(a2 + 64);
      v13 = *((_DWORD *)&v32->SecurityQos + 3);
      v29 = (unsigned int *)(&v32->SecurityQos + 1);
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
        v23 = (struct _DMA_ADAPTER *)*((_QWORD *)p_Length + 92);
        if ( v23 )
        {
          HalPutDmaAdapter(v23);
          *((_QWORD *)p_Length + 92) = 0LL;
        }
        p_Length = &v32->SecurityQos.Length;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, v32 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v24 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(p_Length + 50) = v24;
        EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)p_Length, 2u);
        if ( LoggerInfoFromContext < 0 || !p_Length[84] )
          goto LABEL_7;
      }
      if ( (v13 & 0x400) != 0 )
        goto LABEL_18;
      if ( (v12 & 0x100) != 0 )
      {
        v13 |= 0x100u;
        if ( !p_Length[56] )
          p_Length[56] = (v13 & 0x10) != 0 ? 1000 : 1;
LABEL_18:
        v15 = p_Length + 73;
        v16 = *(_QWORD *)(p_Length + 73);
        v17 = *(_QWORD *)&HeapGuid.Data1 - v16;
        if ( *(_QWORD *)&HeapGuid.Data1 == v16 )
          v17 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(p_Length + 75);
        if ( v17 )
        {
          v18 = *(_QWORD *)&CritSecGuid.Data1 - v16;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v16 )
            v18 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(p_Length + 75);
          if ( v18 )
          {
LABEL_24:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, (__int64)p_Length);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v29 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(p_Length, 128LL), LoggerInfoFromContext >= 0)
                && (a1 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension(p_Length, a2, 0LL),
                     LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks(p_Length, a2), LoggerInfoFromContext >= 0) )
              {
                v19 = *(_DWORD *)(a2 + 56);
                if ( v19 )
                {
                  if ( p_Length[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(p_Length);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v19 > SystemMaximumBufferCount )
                  {
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                    v19 = SystemMaximumBufferCount;
                  }
                  if ( v19 > p_Length[63] )
                    p_Length[63] = v19;
                }
                if ( (v13 & 0x400) == 0 )
                {
                  v20 = *(_DWORD *)(a2 + 68);
                  if ( v20 )
                  {
                    if ( v20 != p_Length[56] )
                    {
                      p_Length[56] = v20;
                      EtwpSynchronizeWithLogger((__int64)p_Length, 4u);
                    }
                  }
                }
                if ( (v12 & 0x80000) == 0 )
                {
                  if ( (v13 & 0x80000) != 0 )
                    v13 &= ~0x80000u;
                  goto LABEL_36;
                }
                if ( p_Length[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)p_Length + 209, 0x800u);
                  v13 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    p_Length = &v32->SecurityQos.Length;
                  }
                  else
                  {
                    p_Length = &v32->SecurityQos.Length;
                    EtwpSendDbgId(v32);
                  }
LABEL_36:
                  if ( (v12 & 0x80u) == 0
                    || (v33 = 0LL,
                        EtwpGetSecurityDescriptorByGuid(v15, &v33),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(p_Length, v33),
                        EtwpFreeSecurityDescriptor(&v33),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v29 = v13;
                    v21 = *(_DWORD *)(a2 + 76);
                    if ( v21 )
                    {
                      if ( p_Length[56] || (v13 & 0x400) != 0 )
                        goto LABEL_87;
                      v27 = p_Length[63] - EtwpQueryUsedProcessorCount((__int64)p_Length);
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
                    p_Length[57] = v21;
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)p_Length);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v22, &ETW_EVENT_UPDATE_TRACE, p_Length);
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
          v25 = 1LL;
        }
        else
        {
          v25 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *p_Length, v25);
        goto LABEL_24;
      }
      if ( (v13 & 0x100) == 0 )
        goto LABEL_18;
      if ( *((_QWORD *)p_Length + 102) )
      {
        v13 &= ~0x100u;
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
