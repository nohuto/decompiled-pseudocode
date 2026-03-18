/*
 * XREFs of ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1
 * Callers:
 *     ?DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z @ 0x15BF55 (-DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     __GetAltTabInfo@20 @ 0x15D068 (__GetAltTabInfo@20.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     _safe_cast_fnid_to_PSWITCHWND@4 @ 0x143725 (_safe_cast_fnid_to_PSWITCHWND@4.c)
 */

struct tagSwitchWndInfo *__thiscall Getpswi(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // esi

  v1 = safe_cast_fnid_to_PSWITCHWND(this);
  if ( v1
    && (v3 = *(_DWORD *)(v2 + 20), *(_DWORD *)(v3 + 160) + 204 == *(unsigned __int16 *)(_gpsi + 176))
    && *(char *)(v3 + 11) >= 0 )
  {
    return *(struct tagSwitchWndInfo **)(v1 + 4);
  }
  else
  {
    return 0;
  }
}
