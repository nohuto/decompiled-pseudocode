/*
 * XREFs of ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 */

void __thiscall xxxDWP_DoCancelMode(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  struct tagMENUSTATE *v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+4h] [ebp-14h]
  _DWORD *v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v7 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 56);
  v2 = *(_DWORD *)(this[2] + 328);
  if ( v2 )
  {
    if ( this == *(_DWORD **)(*(_DWORD *)v2 + 4) && (*(_DWORD *)(v2 + 4) & 0x100) == 0 )
    {
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        (MenuStateOwnerLockxxxUnlock *)&v8,
        (struct tagMENUSTATE *)v2);
      xxxEndMenu(v2);
      if ( v8 )
        xxxUnlockMenuStateInternal(v5, v6);
    }
  }
  if ( v7 == this )
  {
    v3 = *(_DWORD *)(this[2] + 392);
    if ( v3 && *(_DWORD *)(v3 + 32) )
      xxxEndScroll(this, 1);
    v4 = *(_DWORD *)(_gptiCurrent + 368);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 184) |= 8u;
      *(_DWORD *)(_gptiCurrent + 264) &= ~0x8000u;
      CCursorClip::ClearClip(_gpCursorClip);
    }
    xxxReleaseCapture();
  }
}
