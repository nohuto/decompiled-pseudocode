/*
 * XREFs of ExCreateHandle @ 0x1409490A0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
