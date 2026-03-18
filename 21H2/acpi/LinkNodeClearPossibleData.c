/*
 * XREFs of LinkNodeClearPossibleData @ 0x1C009B288
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009A2E0 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009C700 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B6FF8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

__int64 *LinkNodeClearPossibleData()
{
  __int64 v0; // rcx
  __int64 *result; // rax

  v0 = LinkNodeListHead - 56;
  for ( result = (__int64 *)LinkNodeListHead; &LinkNodeListHead != result; v0 = (__int64)(result - 7) )
  {
    *(_DWORD *)(v0 + 36) = 0;
    result = *(__int64 **)(v0 + 56);
    *(_DWORD *)(v0 + 28) = 0;
  }
  return result;
}
