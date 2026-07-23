/*
 * XREFs of RtlIsCurrentProcess @ 0x180074BE0
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC5C0 (RtlWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x18009E400 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
