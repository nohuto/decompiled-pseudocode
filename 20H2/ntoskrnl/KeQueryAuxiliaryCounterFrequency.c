/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x140512960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C00930[0]();
}
