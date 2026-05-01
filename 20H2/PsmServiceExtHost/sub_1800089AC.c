/*
 * XREFs of sub_1800089AC @ 0x1800089AC
 * Callers:
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_1800089AC(__int64 a1, __int64 a2)
{
  DWORD result; // eax

  sub_18000B084(a1, a2, 9LL);
  RtlAcquireSRWLockExclusive(a1 + 24);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
