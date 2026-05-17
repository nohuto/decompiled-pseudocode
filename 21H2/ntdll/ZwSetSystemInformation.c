/*
 * XREFs of ZwSetSystemInformation @ 0x1800A0BB0
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x180101D10 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x180101F18 (RtlpFcUpdateUsageSubscriptions.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemInformation()
{
  __int64 result; // rax

  result = 428LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
