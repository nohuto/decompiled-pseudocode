/*
 * XREFs of VmpProcessContextCleanup @ 0x14092C4BC
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     VmCreateMemoryRange @ 0x14092B800 (VmCreateMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessContextCleanup(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  if ( result )
    NT_ASSERT("ReadNoFence64(&ProcessContext->PreallocateForRangeCreateCount) == 0");
  return result;
}
