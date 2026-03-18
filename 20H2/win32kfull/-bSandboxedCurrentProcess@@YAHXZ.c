/*
 * XREFs of ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00720E0
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0071780 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSandboxedCurrentProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( result )
    return *(_DWORD *)(result + 264) | *(_DWORD *)(result + 12) & 0x80u;
  return result;
}
