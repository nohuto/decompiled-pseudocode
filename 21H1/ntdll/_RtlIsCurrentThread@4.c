/*
 * XREFs of _RtlIsCurrentThread@4 @ 0x4B366920
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCompareObjects@8 @ 0x4B2F3330 (_ZwCompareObjects@8.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2 || ZwCompareObjects((HANDLE)0xFFFFFFFE, ThreadHandle) >= 0;
}
