/*
 * XREFs of EtwpStartLogger @ 0x1406DE1A0
 * Callers:
 *     EtwpStartTrace @ 0x1406C1AB4 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1403609B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     EtwpSetQpcDeltaTracking @ 0x1405AA7A8 (EtwpSetQpcDeltaTracking.c)
 *     EtwpSetPartitionContext @ 0x1405B0AA0 (EtwpSetPartitionContext.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x14064430C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14064434C (EtwpGetSecurityDescriptorByGuid.c)
 *     SeCreateClientSecurity @ 0x14065DD70 (SeCreateClientSecurity.c)
 *     RtlCreateUnicodeString @ 0x1406748C0 (RtlCreateUnicodeString.c)
 *     EtwpGenerateFileName @ 0x1406ABAFC (EtwpGenerateFileName.c)
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406B566C (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1406C0144 (EtwpStopLoggerInstance.c)
 *     PsCreateSystemThread @ 0x1406D0140 (PsCreateSystemThread.c)
 *     EtwpValidateFlagExtension @ 0x1406DD7E0 (EtwpValidateFlagExtension.c)
 *     EtwpLookupLoggerIdByName @ 0x1406DD8EC (EtwpLookupLoggerIdByName.c)
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1406DDD64 (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406DDEE0 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1406DDF20 (EtwpGetFlagExtension.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406DDF64 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpCaptureString @ 0x1406DF044 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406DF154 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406DF4A0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCreateLogFile @ 0x1406DFAAC (EtwpCreateLogFile.c)
 *     EtwpSendSessionNotification @ 0x1406E14E8 (EtwpSendSessionNotification.c)
 *     ExUuidCreate @ 0x1407208B0 (ExUuidCreate.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14079705C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1407988E8 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934444 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140939B5C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x140939E7C (EtwpEventWriteTemplateSession.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409414C0 (EtwpCheckCurrentUserGuidAccess.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  unsigned int *v19; // rax
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
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  char v52; // al
  __int64 v53; // rcx
  unsigned int v54; // ecx
  __int64 v55; // rbx
  unsigned int v56; // ebx
  const WCHAR *v57; // rdx
  bool v58; // zf
  unsigned int v59; // eax
  __int64 v60; // rax
  int v61; // r9d
  unsigned int v62; // eax
  void *v63; // rcx
  __int64 v64; // rbx
  int v65; // ecx
  int v66; // r8d
  unsigned int v67; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v68; // [rsp+44h] [rbp-BCh]
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-60h] BYREF
  __int128 StartContext; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  UUID Buf2; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+F8h] [rbp-8h] BYREF
  int *v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]

  v70 = a1;
  v67 = 0;
  ThreadHandle = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Buf2 = 0LL;
  v69 = 8;
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
    v54 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v54 = v6;
    v6 = v54;
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
    v50 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
    if ( !v50 )
      v50 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v50 )
      goto LABEL_132;
    v51 = *(_QWORD *)(a2 + 24) - CKCLGuid;
    if ( !v51 )
      v51 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v51 || (v6 & 4) != 0 )
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
        v65,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v66,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v6);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v67) )
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
  v75 = v10;
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
    v55 = *(_QWORD *)&v11.Data1 - SystemTraceControlGuid;
    if ( *(_QWORD *)&v11.Data1 == SystemTraceControlGuid )
      v55 = *(_QWORD *)v11.Data4 - 0x3969A8086000829ALL;
    if ( v55 )
    {
      v56 = 2;
      v69 = 1;
      v57 = L"Circular Kernel Context Logger";
    }
    else
    {
      v56 = 0;
      v69 = 0;
      v57 = L"NT Kernel Logger";
    }
    v67 = v56;
    if ( !RtlCreateUnicodeString(&DestinationString, v57) )
      goto LABEL_228;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8LL * v56), v10 | 1, 1LL) == 1;
      goto LABEL_191;
    }
    goto LABEL_132;
  }
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v14 )
  {
    v67 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
      goto LABEL_216;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_228;
      v69 = 0;
LABEL_216:
      v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8), v10 | 1, 1LL) == 1;
LABEL_191:
      if ( v58 )
      {
        v20 = v70;
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
    v67 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v10 | 1, 1LL) == 1;
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
    v60 = *(_QWORD *)&v11.Data1 - AuditLoggerGuid;
    if ( *(_QWORD *)&v11.Data1 == AuditLoggerGuid )
      v60 = *(_QWORD *)v11.Data4 + 0x6A2DF162E6CE8D6ELL;
    if ( v60 )
      goto LABEL_211;
  }
  v16 = v70;
  v17 = 4;
  v18 = *(_DWORD *)(v70 + 16);
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
    v16 = v70;
    ++v17;
    v18 = *(_DWORD *)(v70 + 16);
    if ( v17 >= v18 )
      goto LABEL_51;
  }
  v41 = *(_QWORD *)(v19 + 73) - *(_QWORD *)&v11.Data1;
  if ( !v41 )
    v41 = *(_QWORD *)(v19 + 75) - *(_QWORD *)v11.Data4;
  if ( v41 )
  {
    EtwpReleaseLoggerContext(v19, 0);
    goto LABEL_50;
  }
  EtwpReleaseLoggerContext(v19, 0);
  v20 = v70;
  v18 = *(_DWORD *)(v70 + 16);
LABEL_52:
  if ( v17 < v18 )
    goto LABEL_211;
  v67 = 4;
  if ( v18 > 4 )
  {
    v21 = v75;
    v22 = v75 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v67), v22, 1LL) == 1 )
        break;
      ++v67;
    }
    while ( v67 < *(_DWORD *)(v20 + 16) );
  }
  if ( v67 >= *(_DWORD *)(v20 + 16) )
  {
    if ( !byte_140CF7960 )
    {
      byte_140CF7960 = 1;
      if ( (unsigned int)dword_140C02BF0 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C02BF0, 0x800000000000LL) )
        {
          v74 = v61;
          v82 = &v74;
          v83 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02BF0,
            (unsigned __int8 *)byte_14002D2D0,
            0LL,
            0LL,
            3u,
            &v81);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_244;
  }
LABEL_58:
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v20 + 448) + 8LL * v67), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, v8, 0LL);
  if ( FileName < 0 )
    goto LABEL_243;
  v23 = HeapGuid - *(_QWORD *)&Buf2.Data1;
  if ( HeapGuid == *(_QWORD *)&Buf2.Data1 )
    v23 = 0x4AA2F2756B3425A8LL - *(_QWORD *)Buf2.Data4;
  if ( v23 )
    v68 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v68 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v69 == 8 )
  {
    FileName = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
    if ( FileName < 0 )
      goto LABEL_243;
    v59 = 2;
    v69 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(v20 + 4224), v59) )
        break;
      ++v59;
    }
    while ( v59 < 8 );
    v69 = v59;
    if ( v59 == 8 )
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
      FileName = EtwpSetPartitionContext((__int64 *)inited + 163, *(_QWORD *)(FlagExtension + 2), v26);
      if ( FileName < 0 )
        goto LABEL_234;
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_243:
    v64 = v67;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v70 + 448) + 8LL * v67), 1u);
    _InterlockedExchange64((volatile __int64 *)(v75 + 8 * v64), 1LL);
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
  v30 = v67;
  inited[57] = v29;
  *inited = v30;
  *((_QWORD *)inited + 135) = v20;
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
    v20 = v70;
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
  v33 = v69;
  if ( v69 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v33;
    if ( (unsigned int)v33 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    *(_BYTE *)(v20 + 2 * v33 + 4208) = v67;
    if ( inited[54] - 1 >= 4 )
      v52 = 1;
    else
      v52 = *((_BYTE *)inited + 216);
    *(_BYTE *)(v20 + 2 * v33 + 4209) = v52;
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
        _interlockedbittestandreset((volatile signed __int32 *)(v70 + 4224), v69);
      v62 = inited[208];
      if ( (v62 & 0x80u) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
        v62 = inited[208];
      }
      if ( (v62 & 0x2000) != 0 )
        _InterlockedDecrement(&dword_140C53D80);
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
      RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
      v63 = (void *)*((_QWORD *)inited + 102);
      if ( v63 )
        ZwClose(v63);
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
  v43 = v70;
  v44 = v67;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v70 + 448) + 8LL * v67), 1u);
  if ( (inited[3] & 0x400) != 0 )
  {
LABEL_123:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
      EtwpEventWriteTemplateSession(v47, &ETW_EVENT_START_TRACE, inited);
    KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v75 + 8 * v44), (__int64)inited);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
    if ( (inited[3] & 0x2000000) == 0 )
      goto LABEL_126;
    if ( v43 == EtwpHostSiloState )
    {
      LOBYTE(v48) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v48);
      if ( FileName < 0 )
        goto LABEL_258;
      v53 = 5LL * v69;
      *((_WORD *)&EtwpObjectTypeFilter + 2 * v53) = 1;
      *((_DWORD *)&EtwpObjectTypeFilter + v53 + 1) = 42;
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
    {
LABEL_126:
      if ( v68 != 9 )
        EtwpUpdatePerProcessTracing(a2, v43, *inited, v68);
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
  *(_QWORD *)&StartContext = PsGetCurrentServerSilo(v46, v45);
  *((_QWORD *)&StartContext + 1) = inited;
  FileName = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)EtwpLogger,
               &StartContext);
  if ( FileName >= 0 )
  {
    ZwClose(ThreadHandle);
    FileName = KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
    goto LABEL_123;
  }
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v43 + 448) + 8 * v44), 1u);
LABEL_257:
  EtwpFreeLoggerContext((char *)inited);
  return (unsigned int)FileName;
}
