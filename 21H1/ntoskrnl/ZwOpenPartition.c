/*
 * XREFs of ZwOpenPartition @ 0x1403F47F0
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140893370 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
