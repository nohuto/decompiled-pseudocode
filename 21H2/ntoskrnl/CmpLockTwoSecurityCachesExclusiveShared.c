/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FB28
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076F88C (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x140879E2C (CmpSyncKeyValues.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
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
