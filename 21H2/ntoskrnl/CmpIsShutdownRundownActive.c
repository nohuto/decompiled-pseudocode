/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140875D08
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
