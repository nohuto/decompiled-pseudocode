/*
 * XREFs of EtwTraceAppStateChange @ 0x140664690
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpQueryProcessCommandLine @ 0x1405D8DCC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1405D8F68 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x140616850 (PsQueryStatisticsProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406649AC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x140665888 (EtwpInitStateChangeInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D6868 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     ObGetProcessHandleCount @ 0x1406E037C (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChange @ 0x1406E4374 (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407667B0 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(__int64 BugCheckParameter1, __int64 a2)
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
  __int64 v18; // r8
  _DWORD *v19; // r9
  _DWORD *v20; // r9
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v25[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  _BYTE v28[100]; // [rsp+ECh] [rbp-14h] BYREF
  _OWORD v29[3]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageSize[208]; // [rsp+180h] [rbp+80h] BYREF

  memset(v28, 0, 0x62uLL);
  memset(v25, 0, sizeof(v25));
  v26 = 0LL;
  v27 = 0;
  if ( dword_140C02B78 && tlgKeywordOn((__int64)&dword_140C02B78, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v28);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 2304);
    v7 = *(_BYTE *)(a2 + 52);
    v28[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v28[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v28[41] = v8 / 0x2710;
    *(_QWORD *)&v28[49] = v9 / 0x2710;
    *(_QWORD *)&v28[57] = v6 / 0x2710;
    *(_QWORD *)&v28[65] = v5 / 0x2710;
    *(_QWORD *)&v28[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v24, 0, 0x68uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v24);
      LODWORD(v25[0]) = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v25 + 4) = *(_QWORD *)(BugCheckParameter1 + 1608) << 12;
      *(_QWORD *)((char *)v25 + 12) = *(_QWORD *)(BugCheckParameter1 + 1616) << 12;
      v12 = -1;
      if ( v24[5] < 0xFFFFFFFFLL )
        v12 = v24[5];
      HIDWORD(v25[1]) = v12;
      v13 = -1;
      if ( v24[6] < 0xFFFFFFFFLL )
        v13 = v24[6];
      LODWORD(v26) = v13;
      if ( v24[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v24[8] / 1024LL;
      HIDWORD(v26) = v11;
      if ( v24[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v24[9] / 1024LL;
      v27 = v10;
      *(_QWORD *)((char *)&v25[1] + 4) = v24[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v28, v25, 1024LL);
      v14 = v25;
    }
    else
    {
      EtwpWriteAppStateChange(v28);
      LODWORD(v14) = 0;
    }
    if ( dword_140C02B78 && tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v22 = 0LL;
      v21 = 0;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v29, 0, sizeof(v29));
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v29, v20);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize, &v21);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1360)
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
        {
          EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)P);
        }
        EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v22);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v29, 0LL, v18, v19);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        (unsigned int)v28,
        (_DWORD)v14,
        (unsigned int)PackageSize,
        (__int64)&v22,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
