/*
 * XREFs of CmpIsShutdownRundownActive @ 0x14087276C
 * Callers:
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
