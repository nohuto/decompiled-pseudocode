/*
 * XREFs of CmpAssignSecurityToKcb @ 0x14071B640
 * Callers:
 *     CmpLightWeightCommitAddKeyUoW @ 0x14065E1EC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140923C08 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140346D80 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmLockHiveSecurityShared @ 0x140AB4464 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v6; // r14
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v6 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      CmLockHiveSecurityShared(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( CmpFindSecurityCellCacheIndex(v10, v6, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1888) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v9 = 0;
    }
    if ( !a4 )
      CmUnlockHiveSecurity(v10);
  }
  return v9;
}
