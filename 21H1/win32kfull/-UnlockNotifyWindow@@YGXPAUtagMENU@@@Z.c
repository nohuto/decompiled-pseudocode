/*
 * XREFs of ?UnlockNotifyWindow@@YGXPAUtagMENU@@@Z @ 0x184FDD
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?UnlockNotifyWindow@@YGXPAUtagMENU@@@Z @ 0x184FDD (-UnlockNotifyWindow@@YGXPAUtagMENU@@@Z.c)
 * Callees:
 *     ?UnlockNotifyWindow@@YGXPAUtagMENU@@@Z @ 0x184FDD (-UnlockNotifyWindow@@YGXPAUtagMENU@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void __thiscall UnlockNotifyWindow(_DWORD *this, struct tagMENU *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  struct tagMENU *v4; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)(this[5] + 24);
  if ( v2 )
  {
    v3 = (_DWORD *)(this[14] + 8);
    do
    {
      --v2;
      if ( *v3 )
        UnlockNotifyWindow(v4);
      v3 += 20;
    }
    while ( v2 );
  }
  JUMPOUT(0x24F900);
}
