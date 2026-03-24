/*
 * XREFs of CmpUnlockHashEntry @ 0x1405EC638
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766570 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(PVOID P, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)P + 205)
     + 24
     * ((unsigned int)(*((_DWORD *)P + 412) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)));
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(P);
  return result;
}
