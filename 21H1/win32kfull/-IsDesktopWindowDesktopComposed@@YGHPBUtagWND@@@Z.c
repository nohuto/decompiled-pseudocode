/*
 * XREFs of ?IsDesktopWindowDesktopComposed@@YGHPBUtagWND@@@Z @ 0x1CDDE
 * Callers:
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 * Callees:
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 */

BOOL __cdecl IsDesktopWindowDesktopComposed()
{
  int v0; // ecx

  return IsDesktopWindow() && IsWindowDesktopComposed(v0);
}
