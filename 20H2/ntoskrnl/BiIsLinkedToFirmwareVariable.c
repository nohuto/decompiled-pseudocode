/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140780BC8
 * Callers:
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140971598 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140780BFC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x140974FC8 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
