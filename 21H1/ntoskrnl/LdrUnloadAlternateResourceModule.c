/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037CD28
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
