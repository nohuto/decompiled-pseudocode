/*
 * XREFs of ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CA68
 * Callers:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CA34 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 * Callees:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C001CB68 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        wil_details_FeatureStateCache observedState,
        const wil_details_FeatureDescriptor *descriptor)
{
  unsigned int v3; // r14d
  unsigned int exchange; // edi
  unsigned __int16 exchange64; // bx
  int v8; // esi
  signed __int32 v9; // eax
  int shouldCacheState; // [rsp+50h] [rbp+30h] BYREF
  wil_details_FeatureStateCache state; // [rsp+58h] [rbp+38h]

  v3 = 0;
  shouldCacheState = 0;
  state = observedState;
  exchange = observedState.exchange;
  if ( WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Blink )
    v3 = ((unsigned int (__fastcall *)())WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Blink)();
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
  if ( (exchange & 2) == 0 && *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceLock.Header.Lock )
    (*(void (__fastcall **)(wil_details_FeatureStateCache *, wil_FeatureChangeTime, unsigned int))&WPP_GLOBAL_WDF_Control.DeviceLock.Header.Lock)(
      featureState,
      (wil_FeatureChangeTime)descriptor->changeTime,
      v3);
  if ( !shouldCacheState )
    state.exchange = ((unsigned __int16)v8 ^ exchange64) & 0x278 ^ v8;
  return state;
}
