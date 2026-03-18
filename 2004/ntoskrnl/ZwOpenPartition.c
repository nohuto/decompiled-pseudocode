/*
 * XREFs of ZwOpenPartition @ 0x1403F5A80
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140894690 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
