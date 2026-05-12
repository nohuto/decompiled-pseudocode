/*
 * XREFs of RaCreateBus @ 0x1C00789C0
 * Callers:
 *     RaidCreateAdapter @ 0x1C002FB68 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001DA00 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
