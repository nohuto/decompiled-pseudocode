/*
 * XREFs of EtwTraceAppStateChange @ 0x14064FBB0
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14064EA70 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpWriteAppStateChange @ 0x14062F440 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14062F498 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpQueryProcessCommandLine @ 0x140632B5C (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x140632CF8 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x140633974 (EtwpQueryTokenPackageInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x140650DA8 (EtwpInitStateChangeInfo.c)
 *     PsQueryStatisticsProcess @ 0x140666240 (PsQueryStatisticsProcess.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     ObGetProcessHandleCount @ 0x1406D614C (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407771A0 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  _BYTE v25[100]; // [rsp+ECh] [rbp-14h] BYREF
  _OWORD v26[3]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageSize[208]; // [rsp+180h] [rbp+80h] BYREF

  memset(v25, 0, 0x62uLL);
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  v24 = 0;
  if ( dword_140C02BB0 && tlgKeywordOn((__int64)&dword_140C02BB0, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v25);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 2304);
    v7 = *(_BYTE *)(a2 + 52);
    v25[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v25[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v25[41] = v8 / 0x2710;
    *(_QWORD *)&v25[49] = v9 / 0x2710;
    *(_QWORD *)&v25[57] = v6 / 0x2710;
    *(_QWORD *)&v25[65] = v5 / 0x2710;
    *(_QWORD *)&v25[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v21, 0, 0x68uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v21);
      LODWORD(v22[0]) = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v22 + 4) = *(_QWORD *)(BugCheckParameter1 + 1608) << 12;
      *(_QWORD *)((char *)v22 + 12) = *(_QWORD *)(BugCheckParameter1 + 1616) << 12;
      v12 = -1;
      if ( v21[5] < 0xFFFFFFFFLL )
        v12 = v21[5];
      HIDWORD(v22[1]) = v12;
      v13 = -1;
      if ( v21[6] < 0xFFFFFFFFLL )
        v13 = v21[6];
      LODWORD(v23) = v13;
      if ( v21[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v21[8] / 1024LL;
      HIDWORD(v23) = v11;
      if ( v21[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v21[9] / 1024LL;
      v24 = v10;
      *(_QWORD *)((char *)&v22[1] + 4) = v21[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v25, v22, 1024LL);
      v14 = v22;
    }
    else
    {
      EtwpWriteAppStateChange();
      LODWORD(v14) = 0;
    }
    if ( dword_140C02BB0 && tlgKeywordOn((__int64)&dword_140C02BB0, 0x400000000000LL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v19 = 0LL;
      v18 = 0;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v26, 0, sizeof(v26));
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v26);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize, &v18);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1360) && EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
          EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)P);
        EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v19);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v26, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        (unsigned int)v25,
        (_DWORD)v14,
        (unsigned int)PackageSize,
        (__int64)&v19,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
