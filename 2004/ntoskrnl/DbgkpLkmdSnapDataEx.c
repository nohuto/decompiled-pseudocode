/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1404E9004
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140884C2C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14088555C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10304))(a1 + 10240);
}
