/*
 * XREFs of _FreeWindowMessageFilter@4 @ 0x71856
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 * Callees:
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 *     ?MsgLookupTableCleanUp@@YGXPAPAX@Z @ 0x9D804 (-MsgLookupTableCleanUp@@YGXPAPAX@Z.c)
 */

void __thiscall FreeWindowMessageFilter(int this)
{
  _DWORD **v1; // [esp-8h] [ebp-Ch]
  void **v2; // [esp+0h] [ebp-4h] BYREF
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  v2 = 0;
  v1 = (_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 8) + 232) + 484);
  if ( VWPLRemoveBase(v1, (struct tagVWPL **)this, (unsigned int)v1, (struct tagWND *)&v2, 0, savedregs) )
    MsgLookupTableCleanUp(v2);
}
