/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C005D4CC
 * Callers:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C024DAAC (xxxMNDrawFullNC.c)
 * Callees:
 *     MNInitUAHMenu @ 0x1C0061288 (MNInitUAHMenu.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  MNInitUAHMenu(a3, a4, &v7);
  return xxxSendMessage(v5, v4, 0LL, &v7);
}
