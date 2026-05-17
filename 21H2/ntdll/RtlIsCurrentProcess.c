/*
 * XREFs of RtlIsCurrentProcess @ 0x180075C10
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC370 (RtlWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x18009E990 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}
