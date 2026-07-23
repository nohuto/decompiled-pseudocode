/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1406DDF90
 * Callers:
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1405E1BB8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14065EDC4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140732AFC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1406DE0FC (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
