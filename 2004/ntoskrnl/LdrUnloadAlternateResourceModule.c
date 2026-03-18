/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037D7E8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037D800 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
