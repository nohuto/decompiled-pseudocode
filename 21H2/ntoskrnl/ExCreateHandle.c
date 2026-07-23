/*
 * XREFs of ExCreateHandle @ 0x14094C800
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1405E38B0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
