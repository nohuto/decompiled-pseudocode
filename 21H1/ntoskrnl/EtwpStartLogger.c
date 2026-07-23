/*
 * XREFs of EtwpStartLogger @ 0x1406798DC
 * Callers:
 *     EtwpStartTrace @ 0x140678DB0 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     EtwpSetQpcDeltaTracking @ 0x1405A4BE8 (EtwpSetQpcDeltaTracking.c)
 *     EtwpSetPartitionContext @ 0x1405AAE50 (EtwpSetPartitionContext.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405F289C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405F28DC (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     PsCreateSystemThread @ 0x140655530 (PsCreateSystemThread.c)
 *     ExUuidCreate @ 0x14065B780 (ExUuidCreate.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwpValidateFlagExtension @ 0x140678F6C (EtwpValidateFlagExtension.c)
 *     EtwpLookupLoggerIdByName @ 0x140679038 (EtwpLookupLoggerIdByName.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1406794A0 (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x14067961C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x14067965C (EtwpGetFlagExtension.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406796A0 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpCaptureString @ 0x14067A844 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14067A954 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x14067ACA0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 *     EtwpSendSessionNotification @ 0x14067D228 (EtwpSendSessionNotification.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14070423C (EtwpFreeTraceBufferPool.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14077FD78 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140780E28 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x14092FB94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1409352BC (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1409355DC (EtwpEventWriteTemplateSession.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x14093CCB4 (EtwpCheckCurrentUserGuidAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // r15d
  int FileName; // edi
  ACCESS_MASK v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdi
  UUID v11; // kr00_16
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  signed __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int *inited; // rsi
  unsigned __int16 *FlagExtension; // rax
  __int64 v26; // r8
  unsigned int v27; // eax
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  UNICODE_STRING *v31; // r13
  int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  int v38; // edx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rcx
  unsigned int v52; // ecx
  __int64 v53; // rbx
  unsigned int v54; // ebx
  const WCHAR *v55; // rdx
  bool v56; // zf
  unsigned int v57; // eax
  __int64 v58; // rax
  int v59; // r9d
  unsigned int v60; // eax
  void *v61; // rcx
  __int64 v62; // rbx
  int v63; // ecx
  int v64; // r8d
  unsigned int v65; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v66; // [rsp+44h] [rbp-BCh]
  unsigned int v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-60h] BYREF
  __int128 StartContext; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  UUID Buf2; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+F8h] [rbp-8h] BYREF
  int *v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]

  v68 = a1;
  v65 = 0;
  ThreadHandle = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Buf2 = 0LL;
  v67 = 8;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  StartContext = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v6 = v5 | 0x80;
  if ( (v5 & 0x40000) == 0 )
    v6 = v5;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v6 &= ~0x1000000u;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0x4000F) != 0 )
      goto LABEL_132;
    v52 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v52 = v6;
    v6 = v52;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v6 & 3) == 3
    || (v6 & 0xC000) == 0xC000
    || (v6 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v6 & 6) == 6
    || (v6 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v6 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v6 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v6 & 0x402) == 0 && ((v6 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v6 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_132;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_132;
    }
    v48 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v48 )
      v48 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v48 )
      goto LABEL_132;
    v49 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v49 || (v6 & 4) != 0 )
      goto LABEL_132;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x400) == 0 || (v4 & 0x10000) != 0 )
    goto LABEL_132;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !EtwpKsrCallbackObject )
    {
      FileName = -1073741637;
      goto LABEL_244;
    }
    if ( (v4 & 0x400) == 0 || (v4 & 0x1000000) != 0 )
      goto LABEL_132;
  }
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_244;
  v8 = ((v6 & 0x100 | 0x400u) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v8 = (v6 & 0x100 | 0x400u) >> 3;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_132;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_244:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v63,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v64,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v65) )
  {
LABEL_211:
    FileName = -1073741771;
    goto LABEL_244;
  }
  v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v9 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_244;
  }
  if ( (v6 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)MmGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v6 |= 0x400000u;
    }
    else
    {
      v6 |= 0x800000u;
    }
  }
  v10 = *(_QWORD *)(a1 + 456);
  v11 = Buf2;
  v12 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v73 = v10;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v12 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v12 )
    goto LABEL_181;
  v13 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v13 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v13 )
  {
LABEL_181:
    RtlFreeAnsiString(&DestinationString);
    v53 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
      v53 = *(_QWORD *)v11.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v53 )
    {
      v54 = 2;
      v67 = 1;
      v55 = L"Circular Kernel Context Logger";
    }
    else
    {
      v54 = 0;
      v67 = 0;
      v55 = L"NT Kernel Logger";
    }
    v65 = v54;
    if ( !RtlCreateUnicodeString(&DestinationString, v55) )
      goto LABEL_228;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8LL * v54), v10 | 1, 1LL) == 1;
      goto LABEL_191;
    }
    goto LABEL_132;
  }
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v14 )
  {
    v65 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
      goto LABEL_216;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_228;
      v67 = 0;
LABEL_216:
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8), v10 | 1, 1LL) == 1;
LABEL_191:
      if ( v56 )
      {
        v20 = v68;
        goto LABEL_58;
      }
      goto LABEL_211;
    }
LABEL_132:
    FileName = -1073741811;
    goto LABEL_244;
  }
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v15 )
  {
    v65 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v10 | 1, 1LL) == 1;
        goto LABEL_191;
      }
LABEL_228:
      FileName = -1073741801;
      goto LABEL_244;
    }
    goto LABEL_132;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v58 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v58 = *(_QWORD *)v11.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v58 )
      goto LABEL_211;
  }
  v16 = v68;
  v17 = 4;
  v18 = *(_DWORD *)(v68 + 16);
  if ( v18 <= 4 )
  {
LABEL_51:
    v20 = v16;
    goto LABEL_52;
  }
  while ( 1 )
  {
    v19 = EtwpAcquireLoggerContextByLoggerId(v16, v17, 0);
    if ( v19 )
      break;
LABEL_50:
    v16 = v68;
    ++v17;
    v18 = *(_DWORD *)(v68 + 16);
    if ( v17 >= v18 )
      goto LABEL_51;
  }
  v41 = *(_QWORD *)(v19 + 292) - *(_QWORD *)&v11.Data1;
  if ( !v41 )
    v41 = *(_QWORD *)(v19 + 300) - *(_QWORD *)v11.Data4;
  if ( v41 )
  {
    EtwpReleaseLoggerContext((unsigned int *)v19, 0);
    goto LABEL_50;
  }
  EtwpReleaseLoggerContext((unsigned int *)v19, 0);
  v20 = v68;
  v18 = *(_DWORD *)(v68 + 16);
LABEL_52:
  if ( v17 < v18 )
    goto LABEL_211;
  v65 = 4;
  if ( v18 > 4 )
  {
    v21 = v73;
    v22 = v73 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v65), v22, 1LL) == 1 )
        break;
      ++v65;
    }
    while ( v65 < *(_DWORD *)(v20 + 16) );
  }
  if ( v65 >= *(_DWORD *)(v20 + 16) )
  {
    if ( !byte_140CF74E0 )
    {
      byte_140CF74E0 = 1;
      if ( (unsigned int)dword_140C02BB0 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C02BB0, 0x800000000000LL) )
        {
          v72 = v59;
          v80 = &v72;
          v81 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02BB0,
            (unsigned __int8 *)&dword_14002C11C,
            0LL,
            0LL,
            3u,
            &v79);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_244;
  }
LABEL_58:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v20 + 448) + 8LL * v65), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, v8, 0LL);
  if ( FileName < 0 )
    goto LABEL_243;
  v23 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v23 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v23 )
    v66 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v66 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v67 == 8 )
  {
    FileName = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
    if ( FileName < 0 )
      goto LABEL_243;
    v57 = 2;
    v67 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(v20 + 4224), v57) )
        break;
      ++v57;
    }
    while ( v57 < 8 );
    v67 = v57;
    if ( v57 == 8 )
    {
      FileName = -1073741670;
      goto LABEL_243;
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v6);
  FlagExtension = EtwpGetFlagExtension(a2, 6);
  if ( FlagExtension )
  {
    if ( 4 * *FlagExtension == 12 )
    {
      FileName = EtwpSetPartitionContext((__int64 *)inited + 167, *(_QWORD *)(FlagExtension + 2), v26);
      if ( FileName < 0 )
        goto LABEL_234;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_243:
    v62 = v65;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v68 + 448) + 8LL * v65), 1u);
    _InterlockedExchange64((volatile __int64 *)(v73 + 8 * v62), 1LL);
    goto LABEL_244;
  }
  *(UUID *)(inited + 73) = Buf2;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
  inited[54] = *(_DWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
  {
    FileName = EtwpSetQpcDeltaTracking((__int64)inited);
    if ( FileName < 0 )
      goto LABEL_234;
  }
  if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
    inited[208] |= 0x40000000u;
  v27 = *(_DWORD *)(a2 + 68);
  if ( v27 )
  {
    inited[56] = v27;
  }
  else if ( (v6 & 0x100) != 0 )
  {
    inited[56] = (v6 & 0x10) != 0 ? 1000 : 1;
  }
  v28 = *(_DWORD *)(a2 + 76);
  v29 = v28;
  if ( v28 && (inited[56] || v28 < 0) )
  {
    *(_DWORD *)(a2 + 76) = 0;
    v29 = 0;
  }
  v30 = v65;
  inited[57] = v29;
  *inited = v30;
  *((_QWORD *)inited + 139) = v20;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
        goto LABEL_234;
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  v31 = (UNICODE_STRING *)(inited + 42);
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 46) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    FileName = EtwpGenerateFileName(
                 (unsigned __int16 *)inited + 92,
                 (volatile signed __int32 *)inited + 78,
                 (UNICODE_STRING *)(inited + 42));
    if ( FileName < 0 )
      goto LABEL_234;
    v20 = v68;
  }
  else
  {
    *v31 = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
  }
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  ClientSecurityQos.Length = 12;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
    goto LABEL_234;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  v32 = *(_DWORD *)(a2 + 112);
  if ( (v32 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
    v32 = *(_DWORD *)(a2 + 112);
  }
  if ( (v32 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
    v32 = *(_DWORD *)(a2 + 112);
  }
  if ( (v32 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited);
  v33 = v67;
  if ( v67 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v33;
    if ( (unsigned int)v33 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    *(_BYTE *)(v20 + 2 * v33 + 4208) = v65;
    if ( inited[54] - 1 >= 4 )
      v50 = 1;
    else
      v50 = *((_BYTE *)inited + 216);
    *(_BYTE *)(v20 + 2 * v33 + 4209) = v50;
    _interlockedbittestandset((volatile signed __int32 *)(v20 + 4224), v33);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_234;
  v34 = *(_DWORD *)(a2 + 52);
  if ( v34 )
    inited[60] = v34;
  v35 = *(_DWORD *)(a2 + 56);
  if ( v35 )
    inited[63] = v35;
  v36 = *(_DWORD *)(a2 + 48);
  if ( v36 )
  {
    if ( v36 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v36 = 0x4000;
    }
    inited[1] = v36 << 10;
  }
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    inited[1] = (inited[1] + 0x1FFFFF) & 0xFFE00000;
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20000000u);
  }
  if ( v31->Length )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile(inited, 0LL);
    if ( FileName < 0 )
    {
LABEL_234:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v68 + 4224), v67);
      v60 = inited[208];
      if ( (v60 & 0x80u) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
        v60 = inited[208];
      }
      if ( (v60 & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140C53C60);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v61 = (void *)*((_QWORD *)inited + 102);
      if ( v61 )
        ZwClose(v61);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_243;
    }
  }
  v37 = inited[1];
  if ( v37 < 0x1000 && (v31->Length || (inited[3] & 0x400) != 0) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
    v37 = inited[1];
  }
  v38 = 0xFFFF;
  if ( (unsigned __int64)v37 - 72 < 0xFFFF )
    v38 = v37 - 72;
  inited[2] = v38 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_255;
  v39 = inited[77];
  if ( !v39 || (inited[3] & 0x2000) != 0 )
    v40 = 10485760LL;
  else
    v40 = (unsigned __int64)v39 << 20;
  v42 = inited[1] * inited[63];
  if ( v40 <= (unsigned int)(2 * v42) )
    v40 = (unsigned int)(2 * v42);
  *((_QWORD *)inited + 54) = v40;
  FileName = EtwpInitializeLoggerSecurityDescriptor((__int64)inited, (char *)SecurityDescriptor);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_255:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_234;
  }
  _InterlockedAdd((volatile signed __int32 *)(v20 + 4124), 1u);
  v43 = v68;
  v44 = v65;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v68 + 448) + 8LL * v65), 1u);
  if ( (inited[3] & 0x400) != 0 )
  {
LABEL_123:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
      EtwpEventWriteTemplateSession(v45, &ETW_EVENT_START_TRACE, inited);
    KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v73 + 8 * v44), (__int64)inited);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
    if ( (inited[3] & 0x2000000) == 0 )
      goto LABEL_126;
    if ( v43 == EtwpHostSiloState )
    {
      LOBYTE(v46) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v46);
      if ( FileName < 0 )
        goto LABEL_258;
      v51 = 5LL * v67;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v51) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v51 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
    {
LABEL_126:
      if ( v66 != 9 )
        EtwpUpdatePerProcessTracing(a2, v43, *inited, v66);
      EtwpGetLoggerInfoFromContext(a2, inited);
      EtwpReleaseLoggerContext(inited, 1);
      return (unsigned int)FileName;
    }
LABEL_258:
    inited[14] = FileName;
    EtwpStopLoggerInstance((unsigned __int64)inited);
    if ( (inited[3] & 0x400) != 0 )
    {
      EtwpGetLoggerInfoFromContext(a2, inited);
      EtwpReleaseLoggerContext(inited, 1);
      goto LABEL_257;
    }
    goto LABEL_126;
  }
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&StartContext = PsGetCurrentServerSilo();
  *((_QWORD *)&StartContext + 1) = inited;
  FileName = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, EtwpLogger, &StartContext);
  if ( FileName >= 0 )
  {
    ZwClose(ThreadHandle);
    FileName = KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
    goto LABEL_123;
  }
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v43 + 448) + 8 * v44), 1u);
LABEL_257:
  EtwpFreeLoggerContext(inited);
  return (unsigned int)FileName;
}
