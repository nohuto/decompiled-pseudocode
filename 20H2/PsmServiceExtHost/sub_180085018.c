/*
 * XREFs of sub_180085018 @ 0x180085018
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085018(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( *(_DWORD *)(a1 + 40) )
    RtlSleepConditionVariableSRW(a1 + 32, v1, 0LL, 0LL);
  return RtlReleaseSRWLockExclusive(v1);
}
