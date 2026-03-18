/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003DF0
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00039D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rdx

  v3 = 0;
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || a2 != (HWND)-1LL) )
    return (unsigned int)InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), a2, 5LL);
  return v3;
}
