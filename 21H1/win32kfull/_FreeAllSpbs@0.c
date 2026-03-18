/*
 * XREFs of _FreeAllSpbs@0 @ 0xB246C
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 */

int __stdcall FreeAllSpbs()
{
  int result; // eax

  while ( *(_DWORD *)(_gpDispInfo + 16) )
    FreeSpb(*(_DWORD *)(_gpDispInfo + 16));
  result = _gpDispInfo;
  *(_DWORD *)(_gpDispInfo + 16) = 0;
  return result;
}
