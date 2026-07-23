/*
 * XREFs of RtlIsCurrentThread @ 0x1800FF3A0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x18009E950 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
