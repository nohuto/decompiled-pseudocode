/*
 * XREFs of CmpIsShutdownRundownActive @ 0x1408782BC
 * Callers:
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
