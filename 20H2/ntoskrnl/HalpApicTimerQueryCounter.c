/*
 * XREFs of HalpApicTimerQueryCounter @ 0x1403CB0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerQueryCounter()
{
  return -1 - (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(912LL);
}
