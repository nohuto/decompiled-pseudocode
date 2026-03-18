/*
 * XREFs of CmpUnlockHashEntryByKcb @ 0x1405ECD50
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

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
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4272), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)v1);
  return result;
}
