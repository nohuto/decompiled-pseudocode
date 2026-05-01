/*
 * XREFs of sub_18003BB80 @ 0x18003BB80
 * Callers:
 *     sub_18003BAA0 @ 0x18003BAA0 (sub_18003BAA0.c)
 *     sub_18007BE54 @ 0x18007BE54 (sub_18007BE54.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_18003BB80(__int64 a1, __int64 a2)
{
  DWORD result; // eax

  sub_18000B084(a1, a2, 8u, 0);
  RtlAcquireSRWLockExclusive(a1 + 96);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
