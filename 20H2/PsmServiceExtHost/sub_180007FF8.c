/*
 * XREFs of sub_180007FF8 @ 0x180007FF8
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 *     sub_180027BF0 @ 0x180027BF0 (sub_180027BF0.c)
 *     sub_18002ABE0 @ 0x18002ABE0 (sub_18002ABE0.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 */

DWORD __fastcall sub_180007FF8(__int64 a1, __int64 a2)
{
  DWORD result; // eax

  sub_18000B084(a1, a2, 11LL);
  RtlAcquireSRWLockExclusive(a1 + 40);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
