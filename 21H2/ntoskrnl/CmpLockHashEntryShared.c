/*
 * XREFs of CmpLockHashEntryShared @ 0x14071B930
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  __int64 result; // rax

  v2 = (unsigned int)BugCheckParameter4;
  ExAcquirePushLockSharedEx(
    *(_QWORD *)(BugCheckParameter2 + 1648)
  + 24
  * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                  * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))),
    0LL);
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v2);
  return result;
}
