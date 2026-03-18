/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000D054
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000D120 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1400195E2 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1400195E0, 2u, 0LL);
    v1 = byte_1400195E2;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1400195E2 = v1;
  }
  return (unsigned __int8)byte_1400195E0;
}
