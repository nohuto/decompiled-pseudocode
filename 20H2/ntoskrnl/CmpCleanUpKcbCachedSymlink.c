/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1406721C0
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A45F8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140704958 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14072E6CC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14067232C (CmpDelayDerefKeyControlBlock.c)
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
