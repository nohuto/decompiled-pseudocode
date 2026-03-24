/*
 * XREFs of KeInitializeAffinityEx @ 0x140229350
 * Callers:
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
