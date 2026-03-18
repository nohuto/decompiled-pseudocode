/*
 * XREFs of EnableFlushTimer @ 0x1403A72E4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1402A1AEC (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140389CB0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1407FA9D0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(ULONG_PTR a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, (__int64)v3);
  }
  return result;
}
