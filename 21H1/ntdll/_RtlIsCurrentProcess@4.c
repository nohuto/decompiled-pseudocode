/*
 * XREFs of _RtlIsCurrentProcess@4 @ 0x4B3668F0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCompareObjects@8 @ 0x4B2F3330 (_ZwCompareObjects@8.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1 || ZwCompareObjects((HANDLE)0xFFFFFFFF, ProcessHandle) >= 0;
}
