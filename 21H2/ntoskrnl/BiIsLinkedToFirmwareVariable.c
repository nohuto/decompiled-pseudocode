/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140784B68
 * Callers:
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14078419C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096EDF8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096EE90 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140784B9C (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1409728C0 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
