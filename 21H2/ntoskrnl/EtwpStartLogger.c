/*
 * XREFs of EtwpStartLogger @ 0x1406EE2AC
 * Callers:
 *     EtwpStartTrace @ 0x1406EDF6C (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 *     EtwpStartBootLogger @ 0x1409EC6F0 (EtwpStartBootLogger.c)
 * Callees:
 *     EtwpStartLoggerThread @ 0x140261C40 (EtwpStartLoggerThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     EtwpSetQpcDeltaTracking @ 0x14062CE58 (EtwpSetQpcDeltaTracking.c)
 *     EtwpSetPartitionContext @ 0x14063383C (EtwpSetPartitionContext.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406D1CF4 (EtwpFreeTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpCaptureString @ 0x1406EF170 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x1406EF58C (EtwpSendSessionNotification.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406EF8B8 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406EF910 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406EFB1C (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1406EFB84 (EtwpGetFlagExtension.c)
 *     EtwpInitializeTimeStamp @ 0x1406EFBC8 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     EtwpLookupLoggerIdByName @ 0x1406F01A4 (EtwpLookupLoggerIdByName.c)
 *     EtwpValidateFlagExtension @ 0x1406F0238 (EtwpValidateFlagExtension.c)
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140797BD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14079805C (EtwpFreeSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1408141A0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14081C500 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1409E08A8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0AEC (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E491C (EtwpUpdatePerProcessTracing.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409EB7FC (EtwpCheckCurrentUserGuidAccess.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpStartLogger(ULONGLONG a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // r15d
  int v7; // eax
  int FileName; // edi
  ACCESS_MASK v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONGLONG v18; // rcx
  unsigned int v19; // esi
  unsigned int *v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  signed __int64 v25; // rdx
  ULONGLONG Ptr; // r13
  __int64 v27; // rax
  unsigned int *inited; // rsi
  __int64 FlagExtension; // rax
  __int64 v30; // r8
  unsigned int v31; // eax
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  UNICODE_STRING *v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  int v42; // edx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  char v52; // al
  __int64 v53; // rcx
  unsigned int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rbx
  unsigned int v59; // ebx
  const WCHAR *v60; // rdx
  bool v61; // zf
  __int64 Pool2; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // ecx
  int v66; // edx
  __int64 v67; // rdx
  unsigned int v68; // eax
  void *v69; // rcx
  __int64 v70; // rbx
  int v71; // ecx
  int v72; // r8d
  unsigned int v73; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int8 v74; // [rsp+44h] [rbp-55h]
  unsigned int v75; // [rsp+48h] [rbp-51h]
  int v76; // [rsp+4Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-31h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+78h] [rbp-21h]
  __int64 v81; // [rsp+80h] [rbp-19h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+88h] [rbp-11h] BYREF
  UUID Buf2; // [rsp+98h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+Fh] BYREF

  UserData.Ptr = a1;
  v73 = 0;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  v76 = 0;
  v75 = 8;
  Buf2 = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
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
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0xF) != 0 )
      goto LABEL_144;
    v57 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v57 = v6;
    v6 = v57;
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
    goto LABEL_144;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_144;
    }
    v55 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
    if ( !v55 )
      v55 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v55 )
      goto LABEL_144;
    v56 = *(_QWORD *)(a2 + 24) - CKCLGuid;
    if ( !v56 )
      v56 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v56 || (v6 & 4) != 0 )
      goto LABEL_144;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x106) != 0 || (v4 & 0x10000) != 0 )
    goto LABEL_144;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !EtwpKsrCallbackObject )
    {
      FileName = -1073741637;
      goto LABEL_284;
    }
    if ( (v4 & 0x400) == 0 || (v4 & 0x1000000) != 0 )
      goto LABEL_144;
  }
  v7 = *(_DWORD *)(a2 + 112);
  if ( v7 < 0 )
  {
    if ( EtwpBootPhase || (v7 & 2) == 0 || (v4 & 0x2000000) == 0 || ((*(_DWORD *)(a2 + 40) - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_144;
    v63 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
    if ( !v63 )
      v63 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
    if ( !v63 )
      goto LABEL_144;
  }
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
    goto LABEL_284;
  v9 = ((v6 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v6 & 0x100 | 0x400) >> 3;
  DesiredAccess = v9;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
  {
LABEL_144:
    FileName = -1073741811;
    goto LABEL_284;
  }
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
    goto LABEL_284;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v73) )
    goto LABEL_236;
  v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v10 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_284;
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
  v11 = *(_QWORD *)&Buf2.Data1;
  v12 = *(_QWORD *)(a1 + 456);
  v13 = *(_QWORD *)&Buf2.Data1 - SystemTraceControlGuid;
  v14 = *(_QWORD *)Buf2.Data4;
  v81 = v12;
  if ( *(_QWORD *)&Buf2.Data1 == SystemTraceControlGuid )
    v13 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
  if ( !v13 )
    goto LABEL_204;
  v15 = *(_QWORD *)&Buf2.Data1 - CKCLGuid;
  if ( *(_QWORD *)&Buf2.Data1 == CKCLGuid )
    v15 = *(_QWORD *)Buf2.Data4 - 0x74F156D0633E71AFLL;
  if ( !v15 )
  {
LABEL_204:
    RtlFreeUnicodeString(&DestinationString);
    v58 = v11 - SystemTraceControlGuid;
    if ( !v58 )
      v58 = v14 - 0x3969A8086000829ALL;
    if ( v58 )
    {
      v59 = 2;
      v75 = 1;
      v60 = L"Circular Kernel Context Logger";
    }
    else
    {
      v59 = 0;
      v75 = 0;
      v60 = L"NT Kernel Logger";
    }
    v73 = v59;
    if ( !RtlCreateUnicodeString(&DestinationString, v60) )
      goto LABEL_252;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8LL * v59), v12 | 1, 1LL) == 1;
      goto LABEL_214;
    }
    goto LABEL_144;
  }
  v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v16 )
  {
    v73 = 1;
    if ( EtwpGetFlagExtension(a2, 1LL) )
    {
      if ( (v6 & 0x1000000) != 0 )
        goto LABEL_144;
      RtlFreeUnicodeString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_252;
      v75 = 0;
    }
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v12 | 1, 1LL) == 1;
LABEL_214:
    if ( !v61 )
      goto LABEL_236;
    v14 = *(_QWORD *)Buf2.Data4;
    v11 = *(_QWORD *)&Buf2.Data1;
LABEL_65:
    Ptr = UserData.Ptr;
    ExAcquireRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(UserData.Ptr + 448) + 8LL * v73),
      1u);
    if ( *(int *)(a2 + 112) >= 0 )
    {
      EtwpGetSecurityDescriptorByGuid(&Buf2, &SecurityDescriptor);
      FileName = EtwpAccessCheck(SecurityDescriptor, v9);
      if ( FileName < 0 )
        goto LABEL_283;
      v14 = *(_QWORD *)Buf2.Data4;
      v11 = *(_QWORD *)&Buf2.Data1;
    }
    v27 = HeapGuid - v11;
    if ( HeapGuid == v11 )
      v27 = 0x4AA2F2756B3425A8LL - v14;
    if ( v27 )
      v74 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
    else
      v74 = 0;
    if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v75 == 8 )
    {
      if ( *(int *)(a2 + 112) >= 0 )
      {
        FileName = EtwpCheckCurrentUserGuidAccess(&SystemTraceControlGuid, 128LL);
        if ( FileName < 0 )
          goto LABEL_283;
      }
      v54 = 2;
      v75 = 2;
      while ( _bittest((const signed __int32 *)(Ptr + 4248), v54) )
      {
        v75 = ++v54;
        if ( v54 >= 8 )
        {
          v75 = v54;
          if ( v54 != 8 )
            break;
          FileName = -1073741670;
          goto LABEL_283;
        }
      }
    }
    inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v6);
    FlagExtension = EtwpGetFlagExtension(a2, 6LL);
    if ( FlagExtension )
    {
      if ( 4 * *(_WORD *)FlagExtension == 12 )
      {
        FileName = EtwpSetPartitionContext((__int64 *)inited + 165, *(_QWORD *)(FlagExtension + 4), v30);
        if ( FileName < 0 )
          goto LABEL_274;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( inited )
    {
      *(UUID *)(inited + 69) = Buf2;
      inited[73] = *(_DWORD *)(a2 + 60);
      if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
      inited[50] = *(_DWORD *)(a2 + 40);
      if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
      {
        FileName = EtwpSetQpcDeltaTracking((__int64)inited);
        if ( FileName < 0 )
          goto LABEL_274;
      }
      if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
        inited[204] |= 0x40000000u;
      v31 = *(_DWORD *)(a2 + 68);
      if ( v31 )
      {
        inited[52] = v31;
      }
      else if ( (v6 & 0x100) != 0 )
      {
        inited[52] = (v6 & 0x10) != 0 ? 1000 : 1;
      }
      v32 = *(_DWORD *)(a2 + 76);
      v33 = v32;
      if ( v32 && (inited[52] || v32 < 0) )
      {
        *(_DWORD *)(a2 + 76) = 0;
        v33 = 0;
      }
      v34 = v73;
      FileName = 0;
      inited[53] = v33;
      *inited = v34;
      *((_QWORD *)inited + 137) = Ptr;
      if ( *(_WORD *)(a2 + 128) )
      {
        if ( *(_QWORD *)(a2 + 136) )
        {
          FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
          if ( FileName < 0 )
            goto LABEL_274;
        }
      }
      if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
      {
        inited[74] = *(_DWORD *)(a2 + 96);
        *(_DWORD *)(a2 + 96) = 0;
      }
      v35 = (UNICODE_STRING *)(inited + 38);
      if ( (inited[3] & 8) != 0 )
      {
        *(UNICODE_STRING *)(inited + 42) = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
        FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
        if ( FileName < 0 )
          goto LABEL_273;
        v35 = (UNICODE_STRING *)(inited + 38);
      }
      else
      {
        *v35 = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
      }
      if ( *(int *)(a2 + 112) >= 0 )
      {
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        FileName = SeCreateClientSecurity(
                     KeGetCurrentThread(),
                     &ClientSecurityQos,
                     0,
                     (PSECURITY_CLIENT_CONTEXT)(inited + 176));
      }
      if ( FileName >= 0 )
      {
        if ( (inited[3] & 0x100) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
        else
          _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
        v36 = *(_DWORD *)(a2 + 112);
        if ( (v36 & 2) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( v36 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x80000000);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( (v36 & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( (v36 & 0x4000) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
        EtwpInitializeTimeStamp(inited);
        v37 = v75;
        if ( v75 < 8 )
        {
          inited[3] |= 0x2000000u;
          *((_BYTE *)inited + 818) = v37;
          if ( (unsigned int)v37 <= 1 )
            _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
          Ptr = UserData.Ptr;
          *(_BYTE *)(UserData.Ptr + 2 * v37 + 4232) = v73;
          if ( inited[50] - 1 >= 4 )
            v52 = 1;
          else
            v52 = *((_BYTE *)inited + 200);
          *(_BYTE *)(Ptr + 2 * v37 + 4233) = v52;
          _interlockedbittestandset((volatile signed __int32 *)(Ptr + 4248), v37);
        }
        else
        {
          Ptr = UserData.Ptr;
        }
        FileName = EtwpCheckForStackTracingExtension(a2, inited);
        if ( FileName < 0 )
          goto LABEL_274;
        v38 = *(_DWORD *)(a2 + 52);
        if ( v38 )
          inited[56] = v38;
        v39 = *(_DWORD *)(a2 + 56);
        if ( v39 )
          inited[59] = v39;
        v40 = *(_DWORD *)(a2 + 48);
        if ( v40 )
        {
          if ( v40 > 0x4000 )
          {
            *(_DWORD *)(a2 + 48) = 0x4000;
            v40 = 0x4000;
          }
          inited[1] = v40 << 10;
        }
        if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
        {
          inited[1] = (inited[1] + 0x1FFFFF) & 0xFFE00000;
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20000000u);
        }
        if ( v35->Length )
        {
          *((_QWORD *)inited + 4) = KeGetCurrentThread();
          while ( 1 )
          {
            _InterlockedOr((volatile signed __int32 *)inited + 206, 1u);
            FileName = EtwpCreateLogFile(inited, 0LL, &v76);
            if ( FileName >= 0 )
              break;
            if ( FileName != -1073741306 )
              goto LABEL_274;
            v65 = inited[1];
            v66 = ~(v76 - 1) & (v65 + v76 - 1);
            if ( v65 == v66 )
              goto LABEL_274;
            inited[1] = v66;
          }
        }
        v41 = inited[1];
        if ( v41 < 0x1000 && (v35->Length || (inited[3] & 0x400) != 0) )
        {
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
          v41 = inited[1];
        }
        v42 = 0xFFFF;
        if ( (unsigned __int64)v41 - 72 < 0xFFFF )
          v42 = v41 - 72;
        inited[2] = v42 & 0xFFFFFFF8;
        FileName = EtwpAllocateTraceBufferPool(inited);
        if ( FileName < 0 )
          goto LABEL_268;
        if ( (v6 & 0x4000000) != 0 && (v6 & 0x400) == 0 )
        {
          Pool2 = ExAllocatePool2(64LL, inited[1], 1517777989LL);
          *((_QWORD *)inited + 144) = Pool2;
          if ( !Pool2 )
          {
            FileName = -1073741801;
LABEL_274:
            if ( (inited[3] & 0x2000000) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)(Ptr + 4248), v75);
            v68 = inited[204];
            if ( (v68 & 0x80u) != 0 )
            {
              ExFreePoolWithTag(*((PVOID *)inited + 125), 0);
              v68 = inited[204];
            }
            if ( (v68 & 0x2000) != 0 )
              _InterlockedDecrement(&dword_140C5A6C0);
            RtlFreeUnicodeString((PUNICODE_STRING)(inited + 38));
            RtlFreeUnicodeString((PUNICODE_STRING)(inited + 42));
            v69 = (void *)*((_QWORD *)inited + 100);
            if ( v69 )
              ZwClose(v69);
            ExFreePoolWithTag(inited, 0);
            goto LABEL_283;
          }
        }
        v43 = inited[73];
        if ( (_DWORD)v43 && (inited[3] & 0x2000) == 0 )
          v44 = v43 << 20;
        else
          v44 = 10485760LL;
        v45 = inited[1] * inited[59];
        if ( v44 <= (unsigned int)(2 * v45) )
          v44 = (unsigned int)(2 * v45);
        *((_QWORD *)inited + 52) = v44;
        if ( *(int *)(a2 + 112) >= 0 )
        {
          FileName = EtwpInitializeLoggerSecurityDescriptor(inited, SecurityDescriptor);
          EtwpFreeSecurityDescriptor(&SecurityDescriptor);
          if ( FileName < 0 )
          {
LABEL_268:
            EtwpFreeTraceBufferPool(inited);
            goto LABEL_274;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)(Ptr + 4132), 1u);
        v46 = v73;
        ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v73), 1u);
        if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
          if ( FileName < 0 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8 * v46),
              1u);
LABEL_270:
            EtwpFreeLoggerContext((char *)inited);
            return (unsigned int)FileName;
          }
        }
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
          EtwpEventWriteTemplateSession(v48, &ETW_EVENT_START_TRACE, inited);
        KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
        _InterlockedExchange64((volatile __int64 *)(v81 + 8 * v46), (__int64)inited);
        EtwpSendSessionNotification(inited, 5LL);
        if ( (inited[3] & 0x2000000) == 0 )
          goto LABEL_138;
        if ( Ptr == EtwpHostSiloState )
        {
          LOBYTE(v49) = 1;
          FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v49);
          if ( FileName < 0 )
          {
LABEL_271:
            inited[10] = FileName;
            EtwpStopLoggerInstance((unsigned __int64)inited);
            if ( (inited[3] & 0x400) != 0 )
            {
              EtwpGetLoggerInfoFromContext(a2, inited);
              LOBYTE(v67) = 1;
              EtwpReleaseLoggerContext(inited, v67);
              goto LABEL_270;
            }
LABEL_138:
            if ( v74 != 9 )
              EtwpUpdatePerProcessTracing(a2, Ptr, *inited, v74);
            EtwpGetLoggerInfoFromContext(a2, inited);
            LOBYTE(v50) = 1;
            EtwpReleaseLoggerContext(inited, v50);
            return (unsigned int)FileName;
          }
          v53 = 5LL * v75;
          *((_WORD *)&EtwpObjectTypeFilter + 2 * v53) = 1;
          *((_DWORD *)&EtwpObjectTypeFilter + v53 + 1) = 42;
        }
        FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
        if ( FileName >= 0 )
          goto LABEL_138;
        goto LABEL_271;
      }
LABEL_273:
      Ptr = UserData.Ptr;
      goto LABEL_274;
    }
    FileName = -1073741801;
LABEL_283:
    v70 = v73;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v73), 1u);
    _InterlockedExchange64((volatile __int64 *)(v81 + 8 * v70), 1LL);
    goto LABEL_284;
  }
  v17 = *(_QWORD *)&Buf2.Data1 - AuditLoggerGuid;
  if ( *(_QWORD *)&Buf2.Data1 == AuditLoggerGuid )
    v17 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
  if ( !v17 )
  {
    v73 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v12 | 1, 1LL) == 1;
        goto LABEL_214;
      }
LABEL_252:
      FileName = -1073741801;
      goto LABEL_284;
    }
    goto LABEL_144;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v64 = v11 - AuditLoggerGuid;
    if ( v11 == AuditLoggerGuid )
      v64 = v14 + 0x6A2DF162E6CE8D6ELL;
    if ( v64 )
      goto LABEL_236;
  }
  v18 = UserData.Ptr;
  v19 = 4;
  v20 = (unsigned int *)(UserData.Ptr + 16);
  v21 = *(_DWORD *)(UserData.Ptr + 16);
  if ( v21 <= 4 )
    goto LABEL_58;
  while ( 1 )
  {
    v22 = EtwpAcquireLoggerContextByLoggerId(v18, v19, 0LL);
    if ( !v22 )
      goto LABEL_52;
    v23 = *(_QWORD *)(v22 + 276) - v11;
    if ( !v23 )
      v23 = *(_QWORD *)(v22 + 284) - v14;
    if ( !v23 )
      break;
    EtwpReleaseLoggerContext(v22, 0LL);
LABEL_52:
    v21 = *v20;
    if ( ++v19 >= *v20 )
      goto LABEL_58;
    v18 = UserData.Ptr;
  }
  EtwpReleaseLoggerContext(v22, 0LL);
  v21 = *(_DWORD *)(UserData.Ptr + 16);
  if ( v19 < v21 )
  {
LABEL_236:
    FileName = -1073741771;
    goto LABEL_284;
  }
LABEL_58:
  v73 = 4;
  if ( v21 > 4 )
  {
    v24 = v81;
    v25 = v81 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8LL * v73), v25, 1LL) == 1 )
        break;
      ++v73;
    }
    while ( v73 < *v20 );
    v14 = *(_QWORD *)Buf2.Data4;
    v11 = *(_QWORD *)&Buf2.Data1;
  }
  if ( v73 < *v20 )
  {
    v9 = DesiredAccess;
    goto LABEL_65;
  }
  if ( !byte_140D01B80 )
  {
    byte_140D01B80 = 1;
    UserData.Ptr = (ULONGLONG)v20;
    *(_QWORD *)&UserData.Size = 4LL;
    EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &UserData);
  }
  FileName = -1073741670;
LABEL_284:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
    EtwpEventWriteTemplateAdmin(
      v71,
      (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
      v72,
      (unsigned int)&DestinationString,
      (__int64)&UnicodeString,
      FileName,
      v6);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)FileName;
}
