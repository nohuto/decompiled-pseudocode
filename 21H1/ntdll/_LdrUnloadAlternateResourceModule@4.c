/*
 * XREFs of _LdrUnloadAlternateResourceModule@4 @ 0x4B2DA340
 * Callers:
 *     <none>
 * Callees:
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 */

int __stdcall LdrUnloadAlternateResourceModule(int a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1, 0);
}
