/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1407701B8
 * Callers:
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1407701EC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x14096DE58 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
