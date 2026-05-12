/*
 * XREFs of RaCreateBus @ 0x1C0078A9C
 * Callers:
 *     RaidCreateAdapter @ 0x1C002F5B8 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001B4C0 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
