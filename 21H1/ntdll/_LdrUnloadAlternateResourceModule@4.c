/*
 * XREFs of _LdrUnloadAlternateResourceModule@4 @ 0x4B2DA340
 * Callers:
 *     <none>
 * Callees:
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  return LdrUnloadAlternateResourceModuleEx(DllHandle, 0);
}
