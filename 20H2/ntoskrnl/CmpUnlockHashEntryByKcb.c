/*
 * XREFs of CmpUnlockHashEntryByKcb @ 0x140702950
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9));
  *(_QWORD *)(*(_QWORD *)(v1 + 1640)
            + 24 * ((unsigned int)(*(_DWORD *)(v1 + 1648) - 1) & (v2 ^ ((unsigned __int64)v2 >> 9)))
            + 8) = 0LL;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v3 + 1640)
  + 24 * ((unsigned int)(*(_DWORD *)(v3 + 1648) - 1) & (v4 ^ ((unsigned __int64)(unsigned int)v4 >> 9))),
    0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v1);
}
