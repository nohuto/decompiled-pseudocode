/*
 * XREFs of ZwOpenPartition @ 0x1403FA650
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14089A340 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
