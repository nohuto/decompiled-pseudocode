/*
 * XREFs of EnableFlushTimer @ 0x1C0060AF8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C0060D08 (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0061070 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C02FC670 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))ExSetTimer)(a1, -10000LL * a2, 0LL, v3);
  }
  return result;
}
