/*
 * XREFs of HalpApicClearLocalUnitError @ 0x1403A72B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpApicClearLocalUnitError()
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(640LL, 0LL);
}
