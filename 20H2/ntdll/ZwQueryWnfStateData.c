/*
 * XREFs of ZwQueryWnfStateData @ 0x18009FD00
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F70 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083CF0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     wil_details_StagingConfig_Load @ 0x18009BE1C (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102410 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18010DEC4 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 355LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
