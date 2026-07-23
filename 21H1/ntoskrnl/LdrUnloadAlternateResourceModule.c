/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037CD28
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(DllHandle, v1);
}
