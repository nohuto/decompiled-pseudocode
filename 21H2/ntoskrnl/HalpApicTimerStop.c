/*
 * XREFs of HalpApicTimerStop @ 0x140247920
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140247950 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}
