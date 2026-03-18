/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01DF838
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0221F50 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(struct tagMENUSTATE **this)
{
  struct tagMENUSTATE *v1; // rcx

  v1 = *this;
  if ( v1 )
    xxxUnlockMenuStateInternal(v1, 0);
}
