/*
 * XREFs of _InitAnsiOem@8 @ 0xEB7E2
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall InitAnsiOem(const void *a1, const void *a2)
{
  qmemcpy((void *)(_gpsi + 980), a1, 0x100u);
  qmemcpy((void *)(_gpsi + 1236), a2, 0x100u);
  return 1;
}
