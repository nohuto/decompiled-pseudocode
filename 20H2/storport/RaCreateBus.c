/*
 * XREFs of RaCreateBus @ 0x1C0079EC8
 * Callers:
 *     RaidCreateAdapter @ 0x1C00309D4 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
