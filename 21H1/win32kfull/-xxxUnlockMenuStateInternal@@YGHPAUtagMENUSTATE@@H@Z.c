/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4 (-xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QAE@XZ @ 0x14CB0F (--1MenuStateOwnerLockxxxUnlock@@QAE@XZ.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxUnlockAndEndMenuState@4 @ 0x184FB0 (_xxxUnlockAndEndMenuState@4.c)
 *     _xxxUnlockMenuState@4 @ 0x184FBD (_xxxUnlockMenuState@4.c)
 *     _xxxMNDragLeave@0 @ 0x1A7618 (_xxxMNDragLeave@0.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 *     ?Attach@MenuStateOwnerLockxxxUnlock@@QAEXPAUtagMENUSTATE@@@Z @ 0x1A7C02 (-Attach@MenuStateOwnerLockxxxUnlock@@QAEXPAUtagMENUSTATE@@@Z.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 */

int __fastcall xxxUnlockMenuStateInternal(int a1, int a2)
{
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 28))-- != 1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0;
  if ( !a2 && (v4 & 0x1000000) == 0 )
    return 0;
  xxxMNEndMenuState(a1);
  return 1;
}
