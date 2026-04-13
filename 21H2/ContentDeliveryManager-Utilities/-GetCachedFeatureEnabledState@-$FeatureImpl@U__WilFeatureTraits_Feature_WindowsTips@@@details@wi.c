/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180039F08
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ @ 0x180033D90 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsTips>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // ebp
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  int v7; // edx
  int v8; // r9d
  int v9; // ecx
  int v10; // eax
  signed __int32 v11; // eax
  unsigned int v12; // edi
  bool v13; // zf
  signed __int32 v14; // r9d
  signed __int32 v15; // edx
  int v16; // r8d
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState
      || (v6 = (__int64 (__fastcall *)(__int64, __int64, int *))g_wil_details_apiGetFeatureEnabledState) != 0LL )
    {
      v7 = v6(11355840LL, 1LL, &v18);
    }
    else
    {
      v7 = 0;
    }
    v8 = 64;
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v10 = 0;
      if ( (v7 & 0xFFFFFF3F) == 2 )
        v10 = 64;
      v8 = v10;
    }
    v11 = *a2;
    v9 = 8 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    v12 = v8 | v9 | ((v8 | (unsigned int)v9) >> 6) & 1;
    do
    {
      v13 = v18 == 0;
      v14 = v11;
      *a2 = v11;
      v15 = v11;
      if ( !v13 && (v11 & 2) == 0 )
      {
        v15 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)v12) & 0x9C1 | 2;
        *a2 = v15;
      }
      v16 = v11 & 4;
      if ( (v11 & 4) == 0 )
      {
        v15 = ((unsigned __int16)v12 ^ (unsigned __int16)v15) & 0x400 ^ v15 | 4;
        *a2 = v15;
      }
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v15, v11);
    }
    while ( v14 != v11 );
    if ( !v16 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 1, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
