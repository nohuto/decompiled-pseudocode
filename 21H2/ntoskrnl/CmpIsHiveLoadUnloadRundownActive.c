/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140AB419C
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     CmpInitHiveFromFile @ 0x1407122B0 (CmpInitHiveFromFile.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
