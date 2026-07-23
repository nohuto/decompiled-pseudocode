/*
 * XREFs of CmpAssignSecurityToKcb @ 0x14065EF50
 * Callers:
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14065EDC4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14087ECAC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087F21C (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v6; // rbp
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

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
      ExAcquirePushLockSharedEx(v10 + 1776, 0LL);
    if ( CmpFindSecurityCellCacheIndex(v10, v6, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1880) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v10 + 1776, 0LL);
  }
  return v9;
}
