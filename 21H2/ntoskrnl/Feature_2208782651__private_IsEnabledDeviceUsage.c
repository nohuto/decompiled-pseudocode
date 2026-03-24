/*
 * XREFs of Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x140202A60 (NtCancelWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x140359B90 (IopCloseWaitCompletionPacket.c)
 *     NtCreateWaitCompletionPacket @ 0x140693F90 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     Feature_2208782651__private_IsEnabledFallback @ 0x1403F1388 (Feature_2208782651__private_IsEnabledFallback.c)
 */

__int64 Feature_2208782651__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2208782651__private_featureState & 0x10) != 0 )
    return Feature_2208782651__private_featureState & 1;
  else
    return Feature_2208782651__private_IsEnabledFallback((unsigned int)Feature_2208782651__private_featureState, 3LL);
}
