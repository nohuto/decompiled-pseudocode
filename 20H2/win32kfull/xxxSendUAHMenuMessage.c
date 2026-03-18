/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C00FB170
 * Callers:
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C00FAF50 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C024C4A4 (xxxMNDrawFullNC.c)
 * Callees:
 *     MNInitUAHMenu @ 0x1C0033C68 (MNInitUAHMenu.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r11
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  MNInitUAHMenu(a3, a4, (__int64)&v7);
  return xxxSendMessage(v5, v4, 0LL, (struct _LARGE_STRING *)&v7);
}
