/*
 * XREFs of ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F290C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F24A0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetAltTabInfo @ 0x1C01F39C8 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 * Callees:
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D415C (safe_cast_fnid_to_PSWITCHWND.c)
 */

struct tagSwitchWndInfo *__fastcall Getpswi(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  struct tagSwitchWndInfo *result; // rax
  __int64 v7; // r10

  v5 = safe_cast_fnid_to_PSWITCHWND((__int64)a1, a2, a3, a4);
  result = 0LL;
  if ( v5 )
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( *(unsigned int *)(v7 + 252) + 320LL == *(unsigned __int16 *)(gpsi + 340LL) && *(char *)(v7 + 19) >= 0 )
      return *(struct tagSwitchWndInfo **)(v5 + 8);
  }
  return result;
}
