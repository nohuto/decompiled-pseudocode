/*
 * XREFs of ?SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0xC229C
 * Callers:
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __fastcall SetGhostProp(int a1, int a2)
{
  int v4; // esi
  int Prop; // eax

  v4 = 0;
  Prop = _GetProp(a1, *(unsigned __int16 *)(_gpsi + 500), 1);
  if ( (!Prop || Prop == -1) && (Prop != -1 || a2 != -1) )
    return InternalSetProp(a1, *(unsigned __int16 *)(_gpsi + 500), a2, 5);
  return v4;
}
