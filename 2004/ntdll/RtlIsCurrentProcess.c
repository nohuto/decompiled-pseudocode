/*
 * XREFs of RtlIsCurrentProcess @ 0x180074AE0
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC220 (RtlWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x18009E160 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}
