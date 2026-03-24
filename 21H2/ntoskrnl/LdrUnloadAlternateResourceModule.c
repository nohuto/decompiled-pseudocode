/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037FD58
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037FD70 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
