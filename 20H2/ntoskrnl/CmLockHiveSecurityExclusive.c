/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x140704918
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
