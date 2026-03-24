/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x14097FF54
 * Callers:
 *     DestroyAggregateSession @ 0x14097FFD8 (DestroyAggregateSession.c)
 * Callees:
 *     ExDeleteTimer @ 0x14027F910 (ExDeleteTimer.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

__int64 __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // dx
  ULONG_PTR v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 360) )
  {
    v2 = *(_QWORD *)(a1 + 264);
    v3 = *(_WORD *)(v2 + 56);
    *(_WORD *)(v2 + 56) = 2;
    if ( v3 == 1 )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 264) + 32LL), Executive, 0, 0, 0LL);
    v4 = *(_QWORD *)(a1 + 360);
    v6 = 0LL;
    v7 = 0LL;
    result = ExDeleteTimer(v4, 1, 1, (unsigned int *)&v6);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  return result;
}
