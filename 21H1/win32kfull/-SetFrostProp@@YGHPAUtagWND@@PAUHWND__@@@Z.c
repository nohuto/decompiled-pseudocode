/*
 * XREFs of ?SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0x16FC1D
 * Callers:
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

int __fastcall SetFrostProp(int a1, int a2)
{
  int v4; // esi

  v4 = 0;
  if ( !_GetProp(a1, *(unsigned __int16 *)(_gpsi + 978), 1) )
    return InternalSetProp(a1, *(unsigned __int16 *)(_gpsi + 978), a2, 5);
  return v4;
}
