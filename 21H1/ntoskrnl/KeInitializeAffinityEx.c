/*
 * XREFs of KeInitializeAffinityEx @ 0x140277140
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
