/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1406969B4
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140696828 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x14074DC48 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14076840C (CmpCommitSetSecurityUoW.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14087A794 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087AD10 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1405F9850 (CmpFindSecurityCellCacheIndex.c)
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
