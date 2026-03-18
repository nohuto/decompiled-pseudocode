/*
 * XREFs of ?AllowDesktopDestruction@@YGXPAX@Z @ 0xAEE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall AllowDesktopDestruction(HANDLE Handle)
{
  ObCloseHandle(Handle, 0);
}
