/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x14074E0A0
 * Callers:
 *     CmpCopyKeyPartial @ 0x14074DE30 (CmpCopyKeyPartial.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     CmpSyncKeyValues @ 0x14087564C (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
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
