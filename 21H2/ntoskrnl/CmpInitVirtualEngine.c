/*
 * XREFs of CmpInitVirtualEngine @ 0x140834430
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

bool CmpInitVirtualEngine()
{
  bool result; // al

  result = 0;
  if ( !CmpShareSystemHives )
    result = CmVEEnabled == 1;
  CmpVEEnabled = result;
  return result;
}
