/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0128520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rdx
  __int64 v6; // r8
  _DWORD *v7; // rdx

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( CurrentProcess == gpepCSRSS )
  {
    UserSetLastError(12LL, CurrentProcess, v6);
  }
  else
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(MmUserProbeAddress, v7, v6) + 824);
    return 1;
  }
  return v4;
}
