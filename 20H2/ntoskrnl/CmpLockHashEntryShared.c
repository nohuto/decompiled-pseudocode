/*
 * XREFs of CmpLockHashEntryShared @ 0x1406DB458
 * Callers:
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140762F80 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 */

char __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  char result; // al

  v2 = (unsigned int)BugCheckParameter4;
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(BugCheckParameter2 + 1640)
  + 24
  * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1648) - 1) & ((101027
                                                                  * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))),
    0LL);
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v2);
  return result;
}
