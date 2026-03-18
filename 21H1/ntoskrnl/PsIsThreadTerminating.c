/*
 * XREFs of PsIsThreadTerminating @ 0x1402C1300
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
