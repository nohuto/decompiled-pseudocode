/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140700294
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14033CD34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 *     PopClearSpecialRequest @ 0x1408DCE8C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
