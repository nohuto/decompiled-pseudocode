/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1406D407C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     CmLockHiveSecurityShared @ 0x140AB4464 (CmLockHiveSecurityShared.c)
 */

void __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // rcx

  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1784, 0LL);
    CmLockHiveSecurityShared(a2);
  }
  else
  {
    if ( a1 > a2 )
    {
      CmLockHiveSecurityShared(a2);
      v4 = a1 + 1784;
    }
    else
    {
      v4 = a2 + 1784;
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
}
