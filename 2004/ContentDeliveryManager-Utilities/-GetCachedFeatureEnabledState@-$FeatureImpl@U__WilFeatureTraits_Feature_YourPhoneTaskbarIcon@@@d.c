/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180017DE8
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800177F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000CA04 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000CAD4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // esi
  enum FEATURE_ENABLED_STATE (*v6)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax
  int v7; // ecx
  unsigned int v8; // r8d
  int v9; // edx
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // edx
  signed __int32 v13; // eax
  int v14; // ecx
  signed __int32 v15; // r10d
  signed __int32 v16; // r8d
  int v17; // r9d
  int v19; // [rsp+30h] [rbp+8h] BYREF
  int v20; // [rsp+38h] [rbp+10h]
  int v21; // [rsp+3Ch] [rbp+14h]

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v6 = g_wil_details_internalGetFeatureEnabledState;
    if ( g_wil_details_internalGetFeatureEnabledState || (v6 = g_wil_details_apiGetFeatureEnabledState) != 0LL )
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, int *))v6)(16257538LL, 0LL, &v19);
    else
      v7 = 0;
    v21 = 0;
    v8 = v7 & 0xFFFFFF3F;
    v9 = 2 * (v7 & 0x80 | (4 * (v7 & 0x40 | (4 * (v7 & 3)))));
    if ( (v7 & 0xFFFFFF3F) != 0 )
    {
      v11 = 0;
      if ( v8 == 2 )
        v11 = 16;
      v10 = v9 & 0xFFFFFFEF | v11;
    }
    else
    {
      v10 = v9 | 0x10;
    }
    v12 = ((unsigned __int8)v10 ^ (unsigned __int8)(v10 >> 1)) & 8 ^ v10;
    v20 = v12;
    v13 = *a2;
    v14 = v5 != 0 ? v19 : 0;
    v19 = v14;
    while ( 1 )
    {
      *a2 = v13;
      v15 = v13;
      v16 = v13;
      if ( v14 && (v13 & 1) == 0 )
      {
        v16 = v13 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v13) & 0x278 | 1;
        *a2 = v16;
      }
      v17 = v13 & 2;
      if ( (v13 & 2) == 0 )
      {
        v16 = ((unsigned __int16)v12 ^ (unsigned __int16)v16) & 0x100 ^ v16 | 2;
        *a2 = v16;
      }
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v16, v13);
      if ( v15 == v13 )
        break;
      v14 = v19;
      LOWORD(v12) = v20;
    }
    if ( !v17 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v20 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
