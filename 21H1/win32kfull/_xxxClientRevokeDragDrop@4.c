/*
 * XREFs of _xxxClientRevokeDragDrop@4 @ 0x1A75FE
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _xxxUserModeCallback@20 @ 0x1950A7 (_xxxUserModeCallback@20.c)
 */

int __thiscall xxxClientRevokeDragDrop(void *this)
{
  int v2; // [esp+0h] [ebp-8h]
  void *v3; // [esp+4h] [ebp-4h] BYREF

  v3 = this;
  return xxxUserModeCallback(101, (int)&v3, 4, (int)this, v2);
}
