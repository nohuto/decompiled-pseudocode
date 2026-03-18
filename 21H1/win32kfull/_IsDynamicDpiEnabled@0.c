/*
 * XREFs of _IsDynamicDpiEnabled@0 @ 0xF5B38
 * Callers:
 *     _IsValidKernelDpiAwarenessContext@4 @ 0x94768 (_IsValidKernelDpiAwarenessContext@4.c)
 * Callees:
 *     <none>
 */

int __stdcall IsDynamicDpiEnabled()
{
  return DrvIsUniformSpaceMapping(*(_DWORD *)(_gpDispInfo + 8));
}
