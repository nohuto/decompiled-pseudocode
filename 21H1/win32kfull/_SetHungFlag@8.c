/*
 * XREFs of _SetHungFlag@8 @ 0x17252
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC (-VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z.c)
 */

int __fastcall SetHungFlag(struct tagVWPL **a1, int a2)
{
  struct tagWND *v4; // ecx
  unsigned int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  if ( (*((_BYTE *)a1[5] + 11) & 0x18) == 0 && a1[14] == (struct tagVWPL *)_GetDesktopWindow() )
    VWPLAddBase(a1, 0xAu, v4, v6, v7);
  return SetOrClrWF(a2, 1);
}
