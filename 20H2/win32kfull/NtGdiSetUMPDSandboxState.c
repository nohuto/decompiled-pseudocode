/*
 * XREFs of NtGdiSetUMPDSandboxState @ 0x1C012C900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetUMPDSandboxState(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // rax

  v3 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( CurrentProcessWin32Process )
    *(_DWORD *)(CurrentProcessWin32Process + 264) = v3;
  return 0LL;
}
