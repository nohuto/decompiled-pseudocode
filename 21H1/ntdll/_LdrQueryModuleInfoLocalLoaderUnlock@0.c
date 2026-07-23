/*
 * XREFs of _LdrQueryModuleInfoLocalLoaderUnlock@0 @ 0x4B32E9F0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 */

NTSTATUS __thiscall LdrQueryModuleInfoLocalLoaderUnlock(void *this)
{
  return LdrpReleaseLoaderLock((int)this, 10, 0, (int)this);
}
