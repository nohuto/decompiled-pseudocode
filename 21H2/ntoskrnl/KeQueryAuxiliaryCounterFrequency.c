/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x1405146E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C00930[0]();
}
