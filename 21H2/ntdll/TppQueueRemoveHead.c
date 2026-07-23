/*
 * XREFs of TppQueueRemoveHead @ 0x18008AA6C
 * Callers:
 *     TppWorkerFindTask @ 0x18004E664 (TppWorkerFindTask.c)
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall TppQueueRemoveHead(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Value; // rdi
  unsigned __int64 v3; // rax
  _RTL_SRWLOCK *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  Value = (_RTL_SRWLOCK *)a1->Value;
  if ( *(_RTL_SRWLOCK **)(a1->Value + 8) != a1 || (v3 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
    __fastfail(3u);
  a1->Value = v3;
  *(_QWORD *)(v3 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( Value != a1 )
    return Value;
  return result;
}
