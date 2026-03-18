/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x14033DA74
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14033D9E8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140C23D8E )
    return (unsigned int)dword_140CFB318;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140CFB314;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
