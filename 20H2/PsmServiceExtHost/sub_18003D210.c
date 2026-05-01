/*
 * XREFs of sub_18003D210 @ 0x18003D210
 * Callers:
 *     sub_18003D10C @ 0x18003D10C (sub_18003D10C.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_18003D210(__int64 a1, __int64 a2)
{
  DWORD result; // eax

  sub_18000B084(a1, a2, 7u, 0);
  RtlAcquireSRWLockExclusive(a1 + 168);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 176) = result;
  return result;
}
