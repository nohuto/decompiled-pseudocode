/*
 * XREFs of HalpApicGetLocalUnitError @ 0x1403A4760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicGetLocalUnitError()
{
  return ((__int64 (__fastcall *)(__int64))HalpApicRead)(640LL);
}
