/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x140761310
 * Callers:
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x14087C4AC (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
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
