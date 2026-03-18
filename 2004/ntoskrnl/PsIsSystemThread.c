/*
 * XREFs of PsIsSystemThread @ 0x140340590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
