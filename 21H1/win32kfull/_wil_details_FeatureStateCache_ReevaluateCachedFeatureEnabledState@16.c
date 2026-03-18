/*
 * XREFs of _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0xF2CE4
 * Callers:
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ @ 0xF20F0 (-Feature_ReadClipboardEvent__private_IsEnabled@@YGHXZ.c)
 *     _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0xF2CC0 (_wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8.c)
 * Callees:
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0xF2DB6 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 */

signed __int32 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        int a2,
        signed __int32 a3,
        int a4)
{
  int v4; // esi
  unsigned __int16 CurrentFeatureEnabledState; // bx
  int v7; // edi
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // ecx
  signed __int32 v10; // esi
  signed __int32 v12[2]; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  volatile signed __int32 *v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h] BYREF

  v4 = 0;
  v14 = a1;
  v15 = 0;
  v12[0] = 0;
  v12[1] = 0;
  v16 = 0;
  v13 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
  {
    v4 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
    v15 = v4;
  }
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a2, &v16);
  if ( *(_BYTE *)(a2 + 8) )
    v7 = v16;
  else
    v7 = v4 != 0 ? v16 : 0;
  v8 = a3;
  v9 = v14;
  for ( v12[0] = a3; ; v8 = v12[0] )
  {
    v10 = v8;
    if ( v7 && (v8 & 1) == 0 )
      v10 = v8 ^ ((unsigned __int16)v8 ^ CurrentFeatureEnabledState) & 0x278 | 1;
    if ( (v8 & 2) == 0 )
      v10 = ((unsigned __int16)v10 ^ CurrentFeatureEnabledState) & 0x100 ^ v10 | 2;
    if ( wil_atomic_uint32_compare_exchange_relaxed(v9, v12, v10) )
      break;
  }
  if ( (v12[0] & 2) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(v14, *(unsigned __int8 *)(v13 + 8), v15);
  if ( !v7 )
    return ((unsigned __int16)v10 ^ CurrentFeatureEnabledState) & 0x278 ^ v10;
  return v10;
}
