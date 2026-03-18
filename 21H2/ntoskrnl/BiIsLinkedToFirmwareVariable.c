/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140803438
 * Callers:
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x140A1CB84 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140A1CC1C (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1408140B4 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x140A20648 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
