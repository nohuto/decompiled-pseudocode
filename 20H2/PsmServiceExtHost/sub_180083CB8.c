/*
 * XREFs of sub_180083CB8 @ 0x180083CB8
 * Callers:
 *     sub_180083790 @ 0x180083790 (sub_180083790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180083CB8(__int64 a1)
{
  RtlAcquireSRWLockExclusive(a1 + 48);
  GetCurrentThreadId();
  *(_BYTE *)(a1 + 64) |= 1u;
  *(_DWORD *)(a1 + 56) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 48);
}
