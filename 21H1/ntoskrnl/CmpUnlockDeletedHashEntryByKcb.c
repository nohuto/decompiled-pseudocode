/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x140693AC8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(v1 + 1656)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1664) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v2 + 1656)
  + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1664) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9))),
    0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v1);
}
