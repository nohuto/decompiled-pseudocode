/*
 * XREFs of _xxxUnlockAndEndMenuState@4 @ 0x184FB0
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __thiscall xxxUnlockAndEndMenuState(void *this)
{
  return xxxUnlockMenuStateInternal((int)this, 1);
}
