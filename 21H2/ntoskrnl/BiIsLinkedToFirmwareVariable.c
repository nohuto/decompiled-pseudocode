/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1407849A8
 * Callers:
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1407849DC (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1409726E0 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
