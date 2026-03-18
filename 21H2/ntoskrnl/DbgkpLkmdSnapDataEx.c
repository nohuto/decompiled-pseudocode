/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1405402B4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14092AC5C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14092B55C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 16448))(a1 + 0x4000);
}
