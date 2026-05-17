/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A02B0
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F30 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800840F0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     wil_details_StagingConfig_Load @ 0x18009C59C (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801022B0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18010DD64 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 356LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
