/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FCE8
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  bool v4; // cc
  ULONG_PTR v5; // rcx

  v2 = a2 + 1776;
  v4 = a1 <= a2;
  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  else
  {
    v5 = a2 + 1776;
    if ( !v4 )
    {
      ExAcquirePushLockSharedEx(v5, 0LL);
      v5 = a1 + 1776;
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
}
