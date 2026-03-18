/*
 * XREFs of CmUnlockHiveSecurity @ 0x140704938
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

char __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 1776, 0LL);
}
