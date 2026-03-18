/*
 * XREFs of PsIsProtectedProcessLight @ 0x1402E2210
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) == 1;
}
