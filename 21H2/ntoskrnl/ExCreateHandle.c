/*
 * XREFs of ExCreateHandle @ 0x1407A347C
 * Callers:
 *     PsAssignThreadId @ 0x1402F3684 (PsAssignThreadId.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1407A1CE8 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(__int64 a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
