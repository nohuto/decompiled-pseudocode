/*
 * XREFs of HalpApicTimerStop @ 0x1402C9040
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x1402C9070 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}
