/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x14050F030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C00930[0]();
}
