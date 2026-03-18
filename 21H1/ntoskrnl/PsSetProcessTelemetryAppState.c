/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x140663550
 * Callers:
 *     PspExitProcess @ 0x140662D14 (PspExitProcess.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x1406CF908 (PsFreezeProcess.c)
 *     PsSetProcessFaultInformation @ 0x14075E230 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A2C0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405EF3AC (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x140664690 (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(signed __int64 *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v3; // r14
  unsigned int v6; // edi
  signed __int64 v7; // r15
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter1 + 135;
  v18 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v13);
    v6 = 0;
    v7 = *((_QWORD *)&v13 + 1) - v14 - BugCheckParameter1[289];
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v8 = BugCheckParameter1[292];
    if ( v8 >> 61 != 3 && BugCheckParameter1[291] <= (unsigned __int64)v13 )
    {
      *(_QWORD *)&v16 = BugCheckParameter1[291];
      LODWORD(v18) = v8 >> 61;
      *((_QWORD *)&v16 + 1) = v8 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v8 >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[291] = v13;
      BugCheckParameter1[292] = v7 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v6 = 1;
    }
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
    if ( (unsigned __int64)BugCheckParameter1[292] >> 61 == 3 )
      break;
    if ( v6 )
      goto LABEL_10;
  }
  if ( !v6 )
    return v6;
LABEL_10:
  v15 = v13;
  *((_QWORD *)&v17 + 1) = v14;
  *(_QWORD *)&v17 = v7;
  HIDWORD(v18) = a2;
  EtwTraceAppStateChange((ULONG_PTR)BugCheckParameter1);
  return v6;
}
