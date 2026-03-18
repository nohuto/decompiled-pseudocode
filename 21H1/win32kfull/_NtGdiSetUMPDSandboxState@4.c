/*
 * XREFs of _NtGdiSetUMPDSandboxState@4 @ 0x21B16A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSetUMPDSandboxState(int a1)
{
  int CurrentProcessWin32Process; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    *(_DWORD *)(CurrentProcessWin32Process + 148) = a1;
  return 0;
}
