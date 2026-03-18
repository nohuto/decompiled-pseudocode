/*
 * XREFs of AddToDeferredUserCritThreadUnlockList @ 0x1C0121C98
 * Callers:
 *     ThreadUnlockWorker1 @ 0x1C000FE20 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004E800 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C005AD7C (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall AddToDeferredUserCritThreadUnlockList(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() && !(unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)a1;
  return result;
}
