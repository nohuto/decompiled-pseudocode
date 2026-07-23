/*
 * XREFs of EtwTraceAppStateChange @ 0x14061EF70
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14061DE30 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14061F28C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x140620168 (EtwpInitStateChangeInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14065F0CC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14065F268 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14065F5C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x14069B8D0 (PsQueryStatisticsProcess.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406F9FC8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     ObGetProcessHandleCount @ 0x14070310C (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChange @ 0x140707CE4 (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140768B90 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  _OWORD *v14; // r15
  char v15; // r14
  char v16; // si
  struct _DMA_ADAPTER *v17; // rbx
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v21[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-20h]
  int v23; // [rsp+E8h] [rbp-18h]
  _BYTE v24[100]; // [rsp+ECh] [rbp-14h] BYREF
  _OWORD v25[3]; // [rsp+150h] [rbp+50h] BYREF
  ULONG_PTR PackageSize[52]; // [rsp+180h] [rbp+80h] BYREF

  memset(v24, 0, 0x62uLL);
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  v23 = 0;
  if ( dword_140C02B78 && tlgKeywordOn((__int64)&dword_140C02B78, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v24);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 2304);
    v7 = *(_BYTE *)(a2 + 52);
    v24[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v24[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v24[41] = v8 / 0x2710;
    *(_QWORD *)&v24[49] = v9 / 0x2710;
    *(_QWORD *)&v24[57] = v6 / 0x2710;
    *(_QWORD *)&v24[65] = v5 / 0x2710;
    *(_QWORD *)&v24[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v20, 0, 0x68uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v20);
      LODWORD(v21[0]) = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v21 + 4) = *(_QWORD *)(BugCheckParameter1 + 1608) << 12;
      *(_QWORD *)((char *)v21 + 12) = *(_QWORD *)(BugCheckParameter1 + 1616) << 12;
      v12 = -1;
      if ( v20[5] < 0xFFFFFFFFLL )
        v12 = v20[5];
      HIDWORD(v21[1]) = v12;
      v13 = -1;
      if ( v20[6] < 0xFFFFFFFFLL )
        v13 = v20[6];
      LODWORD(v22) = v13;
      if ( v20[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v20[8] / 1024LL;
      HIDWORD(v22) = v11;
      if ( v20[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v20[9] / 1024LL;
      v23 = v10;
      *(_QWORD *)((char *)&v21[1] + 4) = v20[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v24, v21, 1024LL);
      v14 = v21;
    }
    else
    {
      EtwpWriteAppStateChange(v24);
      LODWORD(v14) = 0;
    }
    if ( dword_140C02B78 && tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v18 = 0LL;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v25, 0, sizeof(v25));
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v25);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1360)
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
        {
          EtwpQueryProcessCommandLine(BugCheckParameter1, P);
        }
        EtwpQueryProcessOtherInfo(BugCheckParameter1, &v18);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v25, 0LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        (unsigned int)v24,
        (_DWORD)v14,
        (unsigned int)PackageSize,
        (__int64)&v18,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
