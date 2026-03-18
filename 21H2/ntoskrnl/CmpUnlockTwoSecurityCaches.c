/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1406D404C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a1 == a2 )
    v2 = a1;
  else
    CmUnlockHiveSecurity(a1);
  return CmUnlockHiveSecurity(v2);
}
