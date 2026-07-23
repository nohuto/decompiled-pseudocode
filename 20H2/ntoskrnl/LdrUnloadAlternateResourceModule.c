/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037F518
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F530 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(DllHandle, v1);
}
