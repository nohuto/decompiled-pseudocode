/*
 * XREFs of _xxxSendUAHInitMenuMessage@12 @ 0xB7560
 * Callers:
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _MNInitUAHMenu@12 @ 0xB75C2 (_MNInitUAHMenu@12.c)
 */

int __fastcall xxxSendUAHInitMenuMessage(void *a1, int a2, int a3)
{
  int v5; // edx
  _BYTE v7[12]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v7, 0, sizeof(v7));
  MNInitUAHMenu(v7);
  v5 = xxxSendMessage(a1, 0, (int)v7);
  if ( v5 )
    *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 20) |= 0x800u;
  else
    *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 20) &= ~0x800u;
  return v5;
}
