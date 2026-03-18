/*
 * XREFs of WheaReportHwError @ 0x1405B96D0
 * Callers:
 *     HalpMcaReportError @ 0x1404B90D0 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1404BBD80 (HalHandleNMI.c)
 *     HalpCheckAndReportGhes @ 0x1404CDF78 (HalpCheckAndReportGhes.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BA530 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     WheapAddToDumpFile @ 0x1405B9BC0 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x1405B9C04 (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x1405B9C98 (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x1405B9E30 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x1405B9EA8 (WheapCompressErrorRecord.c)
 *     WheapFillOutErrorRecord @ 0x1405B9FE4 (WheapFillOutErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x1405BA060 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x1405BA084 (WheapGetErrorSource.c)
 *     WheapPersistPageForMemoryError @ 0x1405BA110 (WheapPersistPageForMemoryError.c)
 *     WheapGenerateETWEvents @ 0x1405BB9C0 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x1405BBD58 (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  char v4; // r12
  _QWORD *WheaInfo; // r13
  __int64 v7; // rcx
  __int64 ErrorSource; // rax
  unsigned int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rax
  _DWORD *v12; // r14
  int v13; // ecx
  int v14; // [rsp+38h] [rbp-49h]
  char v15; // [rsp+48h] [rbp-39h]
  int v16; // [rsp+4Ch] [rbp-35h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-31h]
  __int128 Src; // [rsp+58h] [rbp-29h] BYREF
  __int128 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  _DWORD v21[10]; // [rsp+80h] [rbp-1h] BYREF

  v1 = 0;
  v20 = 0LL;
  v16 = 0;
  v15 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  v17 = 0LL;
  Src = 0LL;
  v19 = 0LL;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v3 & 0x40000000) != 0 )
  {
    v15 = 1;
    v3 &= ~0x40000000u;
    v17 = (*(unsigned int *)(a1 + 8) + a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_7:
    *(_DWORD *)(a1 + 20) = v3;
    goto LABEL_8;
  }
  if ( v3 < 0 )
  {
    v3 &= ~0x80000000;
    v4 = 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( v3 == 3 && !v4 )
    return 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_LogErrorRecords__private_reporting,
    0x11B4117u,
    0,
    0,
    (__int64)&Feature_LogErrorRecords_logged_traits,
    1u,
    v14);
  if ( !v4 && *(_DWORD *)(a1 + 20) != 2 && (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 40LL;
    *(_QWORD *)&v19 = 0x800000054C4E524BuLL;
    *((_QWORD *)&v19 + 1) = 0x800000008LL;
    v20 = a1;
    WheaLogInternalEvent(&Src);
  }
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v7 = WheaInfo[1]) == 0 || !*(_DWORD *)(v7 + 4) )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    return 0LL;
  }
  ErrorSource = WheapGetErrorSource(v7, *(unsigned int *)(a1 + 24));
  v10 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v9, 0LL);
    return 3221225664LL;
  }
  _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
  if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
  {
    v21[8] = *(_DWORD *)(a1 + 28);
    v21[9] = *(_DWORD *)(a1 + 24);
    v21[0] = 1733060695;
    v21[1] = 1;
    v21[2] = 40;
    v21[3] = 1;
    v21[5] = -2147483644;
    v21[4] = 1280201291;
    v21[6] = 2;
    v21[7] = 8;
    WheaLogInternalEvent(v21);
    return 0LL;
  }
  v11 = WheapAllocErrorRecord(v10, &v16);
  v12 = (_DWORD *)v11;
  if ( !v11 )
  {
    ++*(_DWORD *)(v10 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  *(_DWORD *)(v11 + 24) ^= (*(_DWORD *)(v11 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v11 + 24) ^= ((unsigned __int8)*(_DWORD *)(v11 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  v16 = WheapFillOutErrorRecord((unsigned int)(v16 - 40), a1, v10, v11 + 40);
  if ( v16 >= 0 )
  {
    if ( v4 || v15 )
      v12[36] |= 8u;
    if ( (v12[36] & 2) != 0 )
    {
      WheapCompressErrorRecord(3LL, v12 + 10);
      goto LABEL_43;
    }
    if ( !WheapPolicyIgnoreDummyWrite && !v4 )
    {
      WheapCompressErrorRecord(0LL, v12 + 10);
      if ( (int)PshedWriteErrorRecord(1LL, (unsigned int)v12[15], v12 + 10) < 0 )
        WheapPolicyIgnoreDummyWrite = 1;
    }
    v13 = *(_DWORD *)(a1 + 20);
    if ( v13 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v12 + 10, v10 + 96);
        WheapPersistPageForMemoryError(v12 + 10);
        WheapCompressErrorRecord(3LL, v12 + 10);
        PshedWriteErrorRecord(0LL, (unsigned int)v12[15], v12 + 10);
        WheapAddToDumpFile(v12 + 10, (unsigned int)v12[15]);
        if ( v15 )
          KeBugCheckEx(0x124u, *(int *)(v10 + 104), (ULONG_PTR)(v12 + 10), *(_QWORD *)(v17 + 72), *(_QWORD *)(v17 + 80));
        goto LABEL_60;
      }
    }
    else if ( (unsigned int)(v13 - 2) > 1 )
    {
      if ( v13 )
      {
        WheapFreeErrorRecord(v12);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v12 + 10, v10 + 96);
      WheapAttemptErrorRecovery(v12 + 10);
      WheapCompressErrorRecord(3LL, v12 + 10);
      if ( v12[13] == 2 )
      {
        v12[36] |= 1u;
      }
      else if ( !v4 )
      {
        WheapPersistPageForMemoryError(v12 + 10);
        PshedWriteErrorRecord(0LL, (unsigned int)v12[15], v12 + 10);
        WheapAddToDumpFile(v12 + 10, (unsigned int)v12[15]);
LABEL_60:
        PshedBugCheckSystem(v10 + 96, v12 + 10);
        return v1;
      }
LABEL_43:
      if ( (v12[6] & 1) != 0 )
      {
        if ( WheapEventingInitialized == 1 )
          WheapGenerateETWEvents(v12 + 10);
        WheapFreeErrorRecord(v12);
        return v1;
      }
      goto LABEL_64;
    }
    PshedFinalizeErrorRecord(v12 + 10, v10 + 96);
    WheapCompressErrorRecord(3LL, v12 + 10);
LABEL_64:
    WheapWorkQueueAddItem(WheaInfo[2], v12);
    return v1;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v12);
  return (unsigned int)v16;
}
