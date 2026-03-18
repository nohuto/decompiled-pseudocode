/*
 * XREFs of HalpApicWriteEndOfInterrupt @ 0x1404D7930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicWriteEndOfInterrupt()
{
  return HalpApicWrite(176LL, 0LL);
}
