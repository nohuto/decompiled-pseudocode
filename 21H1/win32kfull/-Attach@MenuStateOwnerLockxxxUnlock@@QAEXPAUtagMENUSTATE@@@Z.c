/*
 * XREFs of ?Attach@MenuStateOwnerLockxxxUnlock@@QAEXPAUtagMENUSTATE@@@Z @ 0x1A7C02
 * Callers:
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 */

void __thiscall MenuStateOwnerLockxxxUnlock::Attach(MenuStateOwnerLockxxxUnlock *this, struct tagMENUSTATE *a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)this;
  if ( v3 )
  {
    xxxUnlockMenuStateInternal(v3, 0);
    *(_DWORD *)this = 0;
  }
  if ( a2 )
  {
    if ( _gptiCurrent == *((_DWORD *)a2 + 6) )
    {
      *(_DWORD *)this = a2;
      ++*((_DWORD *)a2 + 7);
    }
    else
    {
      *(_DWORD *)this = 0;
    }
  }
}
