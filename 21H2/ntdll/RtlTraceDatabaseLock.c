/*
 * XREFs of RtlTraceDatabaseLock @ 0x180102BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlTraceDatabaseLock(__int64 a1)
{
  __int64 result; // rax

  result = RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
