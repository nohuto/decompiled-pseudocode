/*
 * XREFs of MiIsFreshPfnFromZeroedList @ 0x14034DBE4
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreshPfnFromZeroedList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0;
}
