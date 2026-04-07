/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800BEB54
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800BEC20 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800E2F0C )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800E5A80, 2u, 0LL);
    v1 = byte_1800E2F0C;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800E2F0C = v1;
  }
  return (unsigned __int8)byte_1800E5A80;
}
