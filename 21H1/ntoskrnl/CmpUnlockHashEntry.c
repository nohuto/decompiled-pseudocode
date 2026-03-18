/*
 * XREFs of CmpUnlockHashEntry @ 0x140695CA8
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074FCB0 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntry(_QWORD *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = P[205]
     + 24
     * ((unsigned int)(*((_DWORD *)P + 412) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)));
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
