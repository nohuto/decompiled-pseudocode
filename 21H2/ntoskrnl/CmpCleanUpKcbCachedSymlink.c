/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1405EE830
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405EE874 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140669FA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpMarkKeyUnbacked @ 0x14066CB80 (CmpMarkKeyUnbacked.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A40E8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14073293C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1405EE99C (CmpDelayDerefKeyControlBlock.c)
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
