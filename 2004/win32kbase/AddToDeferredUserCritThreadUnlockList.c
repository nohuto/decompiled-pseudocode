/*
 * XREFs of AddToDeferredUserCritThreadUnlockList @ 0x1C011AF88
 * Callers:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C0023DF0 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectInternal @ 0x1C00763C0 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 * Callees:
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0016FCC (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0017000 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall AddToDeferredUserCritThreadUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() && !(unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)a1;
  return result;
}
