/*
 * XREFs of PopDirectedDripsDiagTraceProblemDevice @ 0x1408F838C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408F8AC0 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1408F8DF0 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1408F91C4 (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x1408F7088 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

char __fastcall PopDirectedDripsDiagTraceProblemDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  REGHANDLE v5; // rdi
  int v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  v8 = a1;
  v7 = a3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v4 = *(_QWORD *)(v8 + 776);
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 4LL * v7 + 192);
    if ( !v4 )
      goto LABEL_8;
    PopDirectedDripsDiagInsertErrorRecord(a2, v4, v7);
  }
  if ( v4 )
  {
    *(_DWORD *)(v4 + 152) |= 1 << v7;
    if ( PopDiagHandleRegistered )
    {
      v5 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
      {
        UserData.Reserved = 0;
        v12 = 0;
        v15 = 0;
        UserData.Ptr = v4 + 148;
        UserData.Size = 4;
        v10 = &v8;
        v13 = &v7;
        v14 = 4;
        v11 = 8;
        EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE, 0LL, 3u, &UserData);
      }
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
