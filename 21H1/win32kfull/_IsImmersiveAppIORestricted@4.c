/*
 * XREFs of _IsImmersiveAppIORestricted@4 @ 0x7C2DE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 */

BOOL __thiscall IsImmersiveAppIORestricted(void *this)
{
  int v1; // edx

  return HasImmersiveAppRight(this) && (*(_DWORD *)(v1 + 464) & 0x200) == 0;
}
