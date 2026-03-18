/*
 * XREFs of _xxxSendUAHMenuMessage@16 @ 0xB6938
 * Callers:
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _MNInitUAHMenu@12 @ 0xB75C2 (_MNInitUAHMenu@12.c)
 */

int __thiscall xxxSendUAHMenuMessage(void *this, int a2, int a3)
{
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v5, 0, sizeof(v5));
  MNInitUAHMenu(v5);
  return xxxSendMessage(this, 0, (int)v5);
}
