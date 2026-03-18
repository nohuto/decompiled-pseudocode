/*
 * XREFs of VmpProcessContextCleanup @ 0x14092B20C
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     VmCreateMemoryRange @ 0x14092A550 (VmCreateMemoryRange.c)
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
