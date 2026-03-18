/*
 * XREFs of DbgkpLkmdSnapThread @ 0x1404E93D4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140884C2C (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x1405151C0 (KeEnumerateQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140885264 (DbgkpLkmdLaunchSnapApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
