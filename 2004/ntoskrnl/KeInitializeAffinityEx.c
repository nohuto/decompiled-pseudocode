/*
 * XREFs of KeInitializeAffinityEx @ 0x14021E0F0
 * Callers:
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
