/*
 * XREFs of _xxxClientLoadOLE@0 @ 0x1A75CC
 * Callers:
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 * Callees:
 *     _xxxUserModeCallback@20 @ 0x1950A7 (_xxxUserModeCallback@20.c)
 */

int __stdcall xxxClientLoadOLE()
{
  int v0; // ecx
  int CurrentProcessWin32Process; // esi
  int result; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 8) & 0x100000) != 0 )
    return 0;
  result = xxxUserModeCallback(99, 0, 0, v0, v0);
  if ( result >= 0 )
    *(_DWORD *)(CurrentProcessWin32Process + 8) |= 0x100000u;
  return result;
}
