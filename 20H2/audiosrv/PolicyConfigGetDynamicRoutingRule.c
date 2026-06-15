/*
 * XREFs of PolicyConfigGetDynamicRoutingRule @ 0x1800D93A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PolicyConfigGetDynamicRoutingRule(
        DynamicAudioEndpointManager *a1,
        __int64 a2,
        struct _DynamicRoutingRule *a3)
{
  return DynamicAudioEndpointManager::GetRule(a1, a1, a2, a3);
}
