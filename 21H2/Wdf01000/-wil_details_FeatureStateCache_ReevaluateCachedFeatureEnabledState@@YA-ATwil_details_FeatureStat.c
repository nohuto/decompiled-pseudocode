/*
 * XREFs of ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00367EC
 * Callers:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00367B8 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 * Callees:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00368E4 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int v3; // ebp
  unsigned int exchange; // edi
  unsigned __int16 exchange64; // bx
  int v8; // esi
  signed __int32 v9; // eax
  int shouldCacheState; // [rsp+50h] [rbp+8h] BYREF
  wil_details_FeatureStateCache state; // [rsp+58h] [rbp+10h]

  v3 = 0;
  shouldCacheState = 0;
  state = observedState;
  exchange = observedState.exchange;
  if ( WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink )
    v3 = ((unsigned int (__fastcall *)())WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink)();
  exchange64 = wil_details_GetCurrentFeatureEnabledState(descriptor, &shouldCacheState).exchange64;
  if ( !descriptor->changeTime )
    shouldCacheState = v3 != 0 ? shouldCacheState : 0;
  while ( 1 )
  {
    v8 = exchange;
    state.exchange = exchange;
    if ( shouldCacheState && (exchange & 1) == 0 )
    {
      v8 = exchange ^ (exchange64 ^ (unsigned __int16)exchange) & 0x278 | 1;
      state.exchange = v8;
    }
    if ( (exchange & 2) == 0 )
    {
      v8 = ((unsigned __int16)v8 ^ exchange64) & 0x100 ^ v8 | 2;
      state.exchange = v8;
    }
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)featureState, v8, exchange);
    if ( exchange == v9 )
      break;
    exchange = v9;
  }
  if ( (exchange & 2) == 0 && *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type )
    (*(void (__fastcall **)(wil_details_FeatureStateCache *, wil_FeatureChangeTime, unsigned int))&WPP_GLOBAL_WDF_Control.DeviceQueue.Type)(
      featureState,
      (wil_FeatureChangeTime)descriptor->changeTime,
      v3);
  if ( !shouldCacheState )
    state.exchange = ((unsigned __int16)v8 ^ exchange64) & 0x278 ^ v8;
  return state;
}
