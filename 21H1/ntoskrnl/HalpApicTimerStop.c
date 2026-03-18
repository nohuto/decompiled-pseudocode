/*
 * XREFs of HalpApicTimerStop @ 0x140319890
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x1403198C0 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return HalpApicWrite(896LL, 0LL);
}
