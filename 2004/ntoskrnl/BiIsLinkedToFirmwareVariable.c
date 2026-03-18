/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1407725C8
 * Callers:
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096B730 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096B7C8 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1407725FC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x14096F1F8 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
