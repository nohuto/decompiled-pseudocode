/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C00608DC
 * Callers:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 * Callees:
 *     MNInitUAHMenu @ 0x1C0061288 (MNInitUAHMenu.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(__int64 a1, __int64 ***a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = (__int64 *)a2[2];
  v9 = 0LL;
  v8 = 0LL;
  if ( !v3 )
    v3 = **a2;
  MNInitUAHMenu(v3, a3, &v8);
  v6 = xxxSendMessage(v5, 147LL, 0LL, &v8);
  if ( v6 )
    *(_DWORD *)((**a2)[5] + 40) |= 0x800u;
  else
    *(_DWORD *)((**a2)[5] + 40) &= ~0x800u;
  return v6;
}
