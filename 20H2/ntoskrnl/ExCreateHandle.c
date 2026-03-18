/*
 * XREFs of ExCreateHandle @ 0x14094EE60
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140657360 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
