/*
 * XREFs of HalpApicWriteEndOfInterrupt @ 0x1404DD020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpApicWriteEndOfInterrupt()
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(176LL, 0LL);
}
