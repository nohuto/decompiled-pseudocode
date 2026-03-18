/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1406701B0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v4 = *(_QWORD *)(v2 + 1640) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
