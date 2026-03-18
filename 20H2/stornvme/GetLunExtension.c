/*
 * XREFs of GetLunExtension @ 0x1C0003660
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C00035C0 (ProcessNvmeHealthInfoLog.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0018BC0 (NVMeLogTelemetryWaitForCmdComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v4; // r8d
  __int64 *i; // rcx

  if ( a2 == -1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 200);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  for ( i = (__int64 *)(a1 + 1720); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_DWORD *)(result + 16) == a2 )
        break;
    }
    if ( ++v4 >= v3 )
      return 0LL;
  }
  return result;
}
