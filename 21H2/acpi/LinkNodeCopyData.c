/*
 * XREFs of LinkNodeCopyData @ 0x1C00922F4
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092350 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1C0093900 (IrqArbCommitAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeCopyData(int a1)
{
  __int64 v1; // rdx
  __int64 *i; // rax

  v1 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v1 = (__int64)(i - 7) )
  {
    if ( a1 == 1 )
    {
      *(_DWORD *)(v1 + 36) = *(_DWORD *)(v1 + 32);
      *(_DWORD *)(v1 + 28) = *(_DWORD *)(v1 + 24);
    }
    else
    {
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v1 + 36);
      *(_DWORD *)(v1 + 24) = *(_DWORD *)(v1 + 28);
    }
    i = *(__int64 **)(v1 + 56);
  }
  return 0LL;
}
