/*
 * XREFs of ?SetTopmostEnum@@YGXPAUtagWND@@HH@Z @ 0x176E4
 * Callers:
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066 (-SetTopmost@@YGXPAUtagWND@@HH@Z.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 */

void __userpurge SetTopmostEnum(int a1@<edx>, struct tagWND *a2, int a3, int a4)
{
  struct tagWND *v4; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  if ( !a1 && !a2 )
    GetRootOwner(v4);
  SetTopmost(a2, (int)v4, savedregs);
}
