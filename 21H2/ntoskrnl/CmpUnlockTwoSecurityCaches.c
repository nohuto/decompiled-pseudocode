/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x14076FCB8
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rax

  v2 = a1 + 1776;
  if ( a1 != a2 )
  {
    ExReleasePushLockEx(a1 + 1776, 0LL);
    v2 = a2 + 1776;
  }
  return ExReleasePushLockEx(v2, 0LL);
}
