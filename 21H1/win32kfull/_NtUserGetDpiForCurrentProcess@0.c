/*
 * XREFs of _NtUserGetDpiForCurrentProcess@0 @ 0x98C4A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserGetDpiForCurrentProcess()
{
  return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
}
