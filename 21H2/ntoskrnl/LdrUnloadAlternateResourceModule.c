/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14037F8A8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(DllHandle, v1);
}
