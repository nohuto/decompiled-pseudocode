/*
 * XREFs of EtwTraceAppStateChange @ 0x140712868
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObGetProcessHandleCount @ 0x14066C174 (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14068A3DC (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406C6268 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpQueryTokenPackageInfo @ 0x14070B934 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14070BACC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14070BB0C (EtwpQueryProcessCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x140711DA8 (EtwpWriteAppStateChange.c)
 *     EtwpInitStateChangeInfo @ 0x140711E3C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140712BA0 (EtwpWriteAppStateChangeSummary.c)
 *     PsQueryStatisticsProcess @ 0x1407B81B0 (PsQueryStatisticsProcess.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(struct _EX_RUNDOWN_REF *BugCheckParameter1, __int64 a2)
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
  unsigned __int64 v17; // rbx
  _DWORD *v18; // r9
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]
  _BYTE v26[100]; // [rsp+ECh] [rbp-14h] BYREF
  _OWORD v27[3]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v28[416]; // [rsp+180h] [rbp+80h] BYREF

  memset(v26, 0, 0x62uLL);
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0;
  if ( dword_140C043A8 && tlgKeywordOn((__int64)&dword_140C043A8, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo((__int64)BugCheckParameter1, (__int64)v26);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - BugCheckParameter1[288].Count;
    v7 = *(_BYTE *)(a2 + 52);
    v26[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v26[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v26[41] = v8 / 0x2710;
    *(_QWORD *)&v26[49] = v9 / 0x2710;
    *(_QWORD *)&v26[57] = v6 / 0x2710;
    *(_QWORD *)&v26[65] = v5 / 0x2710;
    *(_QWORD *)&v26[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v22, 0, 0x68uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v22);
      LODWORD(v23[0]) = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v23 + 4) = BugCheckParameter1[201].Count << 12;
      *(_QWORD *)((char *)v23 + 12) = BugCheckParameter1[202].Count << 12;
      v12 = -1;
      if ( v22[5] < 0xFFFFFFFFLL )
        v12 = v22[5];
      HIDWORD(v23[1]) = v12;
      v13 = -1;
      if ( v22[6] < 0xFFFFFFFFLL )
        v13 = v22[6];
      LODWORD(v24) = v13;
      if ( v22[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v22[8] / 1024LL;
      HIDWORD(v24) = v11;
      if ( v22[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v22[9] / 1024LL;
      v25 = v10;
      *(_QWORD *)((char *)&v23[1] + 4) = v22[3];
      EtwpWriteAppStateChangeWithStats();
      v14 = v23;
    }
    else
    {
      EtwpWriteAppStateChange();
      LODWORD(v14) = 0;
    }
    if ( dword_140C043A8 && tlgKeywordOn((__int64)&dword_140C043A8, 0x400000000000LL) )
    {
      memset(v28, 0, 0x198uLL);
      v20 = 0LL;
      v19 = 0;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v27, 0, sizeof(v27));
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection(BugCheckParameter1 + 139) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27, v18);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
      EtwpQueryTokenPackageInfo(v17, (__int64)v28, &v19);
      ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[151], v17, 0x746C6644u);
      if ( v16 )
      {
        if ( BugCheckParameter1[170].Count && EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)BugCheckParameter1) )
          EtwpQueryProcessCommandLine((__int64)BugCheckParameter1, (__int64)P);
        EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v20);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v27, 0LL);
        ExReleaseRundownProtection(BugCheckParameter1 + 139);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)BugCheckParameter1,
        (unsigned int)v26,
        (_DWORD)v14,
        (unsigned int)v28,
        (__int64)&v20,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
