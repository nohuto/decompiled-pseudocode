/*
 * XREFs of MiIsFreshPfnFromZeroedList @ 0x1403493D0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreshPfnFromZeroedList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0;
}
