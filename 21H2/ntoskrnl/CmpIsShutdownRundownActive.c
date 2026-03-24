/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140875BA8
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
