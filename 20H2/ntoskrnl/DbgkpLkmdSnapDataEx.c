/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1404EC894
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14088A77C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14088B0AC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10304))(a1 + 10240);
}
