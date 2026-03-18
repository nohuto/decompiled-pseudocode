/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x1402DF0C4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140C238EE )
    return (unsigned int)dword_140CFB318;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140CFB314;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
