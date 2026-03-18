/*
 * XREFs of ?IsCurrentProcessDwm@@YGHXZ @ 0xADB5C
 * Callers:
 *     _EditionOpenInputDesktopEntryPoint@12 @ 0xF2960 (_EditionOpenInputDesktopEntryPoint@12.c)
 * Callees:
 *     <none>
 */

int __stdcall IsCurrentProcessDwm()
{
  int CurrentProcess; // eax

  CurrentProcess = PsGetCurrentProcess();
  return IsProcessDwm(CurrentProcess);
}
