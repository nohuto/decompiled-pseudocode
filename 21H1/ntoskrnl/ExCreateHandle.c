/*
 * XREFs of ExCreateHandle @ 0x140947D00
 * Callers:
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     ExCreateHandleEx @ 0x14061D9E0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
