/*
 * XREFs of HalpApicClearLocalUnitError @ 0x1403A4730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicClearLocalUnitError()
{
  return HalpApicWrite(640LL, 0LL);
}
