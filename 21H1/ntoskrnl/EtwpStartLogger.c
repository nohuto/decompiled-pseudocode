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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // al
  __int64 v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rbx
  unsigned int v57; // ebx
  const WCHAR *v58; // rdx
  bool v59; // zf
  unsigned int v60; // eax
  __int64 v61; // rax
  int v62; // r9d
  unsigned int v63; // eax
  void *v64; // rcx
  __int64 v65; // rbx
  int v66; // ecx
  int v67; // r8d
  unsigned int v68; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v69; // [rsp+44h] [rbp-BCh]
  unsigned int v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-60h] BYREF
  __int128 StartContext; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  UUID Buf2; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+F8h] [rbp-8h] BYREF
  int *v83; // [rsp+118h] [rbp+18h]
  __int64 v84; // [rsp+120h] [rbp+20h]

  v71 = a1;
  v68 = 0;
  ThreadHandle = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Buf2 = 0LL;
  v70 = 8;
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
    v55 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v55 = v6;
    v6 = v55;
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
    v51 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
    if ( !v51 )
      v51 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v51 )
      goto LABEL_132;
    v52 = *(_QWORD *)(a2 + 24) - CKCLGuid;
    if ( !v52 )
      v52 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v52 || (v6 & 4) != 0 )
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
        v66,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v67,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v68) )
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
  v12 = *(_QWORD *)&Buf2.Data1 - SystemTraceControlGuid;
  v76 = v10;
  if ( *(_QWORD *)&Buf2.Data1 == SystemTraceControlGuid )
    v12 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
  if ( !v12 )
    goto LABEL_181;
  v13 = *(_QWORD *)&Buf2.Data1 - CKCLGuid;
  if ( *(_QWORD *)&Buf2.Data1 == CKCLGuid )
    v13 = *(_QWORD *)Buf2.Data4 - 0x74F156D0633E71AFLL;
  if ( !v13 )
  {
LABEL_181:
    RtlFreeAnsiString(&DestinationString);
    v56 = *(_QWORD *)&v11.Data1 - SystemTraceControlGuid;
    if ( *(_QWORD *)&v11.Data1 == SystemTraceControlGuid )
      v56 = *(_QWORD *)v11.Data4 - 0x3969A8086000829ALL;
    if ( v56 )
    {
      v57 = 2;
      v70 = 1;
      v58 = L"Circular Kernel Context Logger";
    }
    else
    {
      v57 = 0;
      v70 = 0;
      v58 = L"NT Kernel Logger";
    }
    v68 = v57;
    if ( !RtlCreateUnicodeString(&DestinationString, v58) )
      goto LABEL_228;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8LL * v57), v10 | 1, 1LL) == 1;
      goto LABEL_191;
    }
    goto LABEL_132;
  }
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v14 )
  {
    v68 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
      goto LABEL_216;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_228;
      v70 = 0;
LABEL_216:
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8), v10 | 1, 1LL) == 1;
LABEL_191:
      if ( v59 )
      {
        v20 = v71;
        goto LABEL_58;
      }
      goto LABEL_211;
    }
LABEL_132:
    FileName = -1073741811;
    goto LABEL_244;
  }
  v15 = *(_QWORD *)&Buf2.Data1 - AuditLoggerGuid;
  if ( *(_QWORD *)&Buf2.Data1 == AuditLoggerGuid )
    v15 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
  if ( !v15 )
  {
    v68 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v10 | 1, 1LL) == 1;
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
    v61 = *(_QWORD *)&v11.Data1 - AuditLoggerGuid;
    if ( *(_QWORD *)&v11.Data1 == AuditLoggerGuid )
      v61 = *(_QWORD *)v11.Data4 + 0x6A2DF162E6CE8D6ELL;
    if ( v61 )
      goto LABEL_211;
  }
  v16 = v71;
  v17 = 4;
  v18 = *(_DWORD *)(v71 + 16);
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
    v16 = v71;
    ++v17;
    v18 = *(_DWORD *)(v71 + 16);
    if ( v17 >= v18 )
      goto LABEL_51;
  }
  v44 = *(_QWORD *)(v19 + 292) - *(_QWORD *)&v11.Data1;
  if ( !v44 )
    v44 = *(_QWORD *)(v19 + 300) - *(_QWORD *)v11.Data4;
  if ( v44 )
  {
    EtwpReleaseLoggerContext((unsigned int *)v19, 0);
    goto LABEL_50;
  }
  EtwpReleaseLoggerContext((unsigned int *)v19, 0);
  v20 = v71;
  v18 = *(_DWORD *)(v71 + 16);
LABEL_52:
  if ( v17 < v18 )
    goto LABEL_211;
  v68 = 4;
  if ( v18 > 4 )
  {
    v21 = v76;
    v22 = v76 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v68), v22, 1LL) == 1 )
        break;
      ++v68;
    }
    while ( v68 < *(_DWORD *)(v20 + 16) );
  }
  if ( v68 >= *(_DWORD *)(v20 + 16) )
  {
    if ( !byte_140CF74E0 )
    {
      byte_140CF74E0 = 1;
      if ( (unsigned int)dword_140C02BB0 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C02BB0, 0x800000000000LL) )
        {
          v75 = v62;
          v83 = &v75;
          v84 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02BB0,
            (unsigned __int8 *)&dword_14002C11C,
            0LL,
            0LL,
            3u,
            &v82);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_244;
  }
LABEL_58:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v20 + 448) + 8LL * v68), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, v8, 0LL);
  if ( FileName < 0 )
    goto LABEL_243;
  v23 = HeapGuid - *(_QWORD *)&Buf2.Data1;
  if ( HeapGuid == *(_QWORD *)&Buf2.Data1 )
    v23 = 0x4AA2F2756B3425A8LL - *(_QWORD *)Buf2.Data4;
  if ( v23 )
    v69 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v69 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v70 == 8 )
  {
    FileName = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
    if ( FileName < 0 )
      goto LABEL_243;
    v60 = 2;
    v70 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(v20 + 4224), v60) )
        break;
      ++v60;
    }
    while ( v60 < 8 );
    v70 = v60;
    if ( v60 == 8 )
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
    v65 = v68;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v71 + 448) + 8LL * v68), 1u);
    _InterlockedExchange64((volatile __int64 *)(v76 + 8 * v65), 1LL);
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
  v30 = v68;
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
    v20 = v71;
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
  v35 = *(_DWORD *)(a2 + 112);
  if ( (v35 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
    v35 = *(_DWORD *)(a2 + 112);
  }
  if ( (v35 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
    v35 = *(_DWORD *)(a2 + 112);
  }
  if ( (v35 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited, v32, v33, v34);
  v36 = v70;
  if ( v70 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v36;
    if ( (unsigned int)v36 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    *(_BYTE *)(v20 + 2 * v36 + 4208) = v68;
    if ( inited[54] - 1 >= 4 )
      v53 = 1;
    else
      v53 = *((_BYTE *)inited + 216);
    *(_BYTE *)(v20 + 2 * v36 + 4209) = v53;
    _interlockedbittestandset((volatile signed __int32 *)(v20 + 4224), v36);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_234;
  v37 = *(_DWORD *)(a2 + 52);
  if ( v37 )
    inited[60] = v37;
  v38 = *(_DWORD *)(a2 + 56);
  if ( v38 )
    inited[63] = v38;
  v39 = *(_DWORD *)(a2 + 48);
  if ( v39 )
  {
    if ( v39 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v39 = 0x4000;
    }
    inited[1] = v39 << 10;
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
        _interlockedbittestandreset((volatile signed __int32 *)(v71 + 4224), v70);
      v63 = inited[208];
      if ( (v63 & 0x80u) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
        v63 = inited[208];
      }
      if ( (v63 & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140C53C60);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v64 = (void *)*((_QWORD *)inited + 102);
      if ( v64 )
        ZwClose(v64);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_243;
    }
  }
  v40 = inited[1];
  if ( v40 < 0x1000 && (v31->Length || (inited[3] & 0x400) != 0) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
    v40 = inited[1];
  }
  v41 = 0xFFFF;
  if ( (unsigned __int64)v40 - 72 < 0xFFFF )
    v41 = v40 - 72;
  inited[2] = v41 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_255;
  v42 = inited[77];
  if ( !v42 || (inited[3] & 0x2000) != 0 )
    v43 = 10485760LL;
  else
    v43 = (unsigned __int64)v42 << 20;
  v45 = inited[1] * inited[63];
  if ( v43 <= (unsigned int)(2 * v45) )
    v43 = (unsigned int)(2 * v45);
  *((_QWORD *)inited + 54) = v43;
  FileName = EtwpInitializeLoggerSecurityDescriptor((__int64)inited, (char *)SecurityDescriptor);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_255:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_234;
  }
  _InterlockedAdd((volatile signed __int32 *)(v20 + 4124), 1u);
  v46 = v71;
  v47 = v68;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v71 + 448) + 8LL * v68), 1u);
  if ( (inited[3] & 0x400) != 0 )
  {
LABEL_123:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
      EtwpEventWriteTemplateSession(v48, &ETW_EVENT_START_TRACE, inited);
    KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v76 + 8 * v47), (__int64)inited);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
    if ( (inited[3] & 0x2000000) == 0 )
      goto LABEL_126;
    if ( v46 == EtwpHostSiloState )
    {
      LOBYTE(v49) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v49);
      if ( FileName < 0 )
        goto LABEL_258;
      v54 = 5LL * v70;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v54) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v54 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
    {
LABEL_126:
      if ( v69 != 9 )
        EtwpUpdatePerProcessTracing(a2, v46, *inited, v69);
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
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v46 + 448) + 8 * v47), 1u);
LABEL_257:
  EtwpFreeLoggerContext(inited);
  return (unsigned int)FileName;
}
