/*
 * XREFs of ExCreateHandle @ 0x14094C630
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 * Callees:
 *     ExCreateHandleEx @ 0x14062D820 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
