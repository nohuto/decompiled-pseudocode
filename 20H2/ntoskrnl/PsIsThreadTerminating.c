/*
 * XREFs of PsIsThreadTerminating @ 0x1402E55A0
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
