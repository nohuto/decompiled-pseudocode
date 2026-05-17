/*
 * XREFs of _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0x4B306632
 * Callers:
 *     _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0x4B30660E (_wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8.c)
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0x4B306237 (_wil_atomic_uint32_compare_exchange_relaxed@12.c)
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 */

signed __int32 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        int a2,
        signed __int32 a3,
        int a4)
{
  int v5; // edi
  unsigned __int16 CurrentFeatureEnabledState; // bx
  void (__stdcall *v7)(_DWORD, _DWORD, _DWORD); // edi
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // ecx
  signed __int32 v10; // esi
  int v14; // [esp+24h] [ebp-Ch]
  signed __int32 i; // [esp+28h] [ebp-8h] BYREF
  void (__stdcall *v16)(_DWORD, _DWORD, _DWORD); // [esp+2Ch] [ebp-4h] BYREF

  v5 = 0;
  v14 = 0;
  i = a3;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
  {
    v5 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges(g_wil_details_ensureSubscribedToFeatureConfigurationChanges);
    v14 = v5;
  }
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a2, &v16);
  if ( *(_BYTE *)(a2 + 8) )
    v7 = v16;
  else
    v7 = v5 != 0 ? v16 : 0;
  v8 = a3;
  v9 = a1;
  for ( i = a3; ; v8 = i )
  {
    v10 = v8;
    if ( v7 && (v8 & 1) == 0 )
      v10 = v8 ^ ((unsigned __int16)v8 ^ CurrentFeatureEnabledState) & 0x278 | 1;
    if ( (v8 & 2) == 0 )
      v10 = ((unsigned __int16)v10 ^ CurrentFeatureEnabledState) & 0x100 ^ v10 | 2;
    if ( wil_atomic_uint32_compare_exchange_relaxed(v9, &i, v10) )
      break;
  }
  if ( (i & 2) == 0 )
  {
    v16 = (void (__stdcall *)(_DWORD, _DWORD, _DWORD))g_wil_details_subscribeFeatureStateCacheToConfigurationChanges;
    if ( g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
      v16(a1, *(unsigned __int8 *)(a2 + 8), v14);
  }
  if ( !v7 )
    return ((unsigned __int16)v10 ^ CurrentFeatureEnabledState) & 0x278 ^ v10;
  return v10;
}
