/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800178D0
 * Callers:
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180017550 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x1800175C4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000CA04 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000CAD4 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax
  int v6; // esi
  unsigned int (*v7)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax
  int v8; // ecx
  char v9; // r8
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r10d
  signed __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  unsigned int v16; // r9d
  signed __int64 v17; // rtt
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF
  int v21; // [rsp+60h] [rbp+30h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 6) != 6 )
  {
    i = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v20 = 0;
    v6 = v5;
    v7 = g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant || (v7 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))v7)(16257538LL, 0LL, &v21, &v20, &i);
    else
      v8 = 0;
    v9 = BYTE1(v8) & 1;
    v10 = 4 * (v8 & 0x80 | (v20 != 0 ? 0x40 : 0));
    v11 = v8 & 0xFFFFFE7F;
    if ( v11 && (LOWORD(v10) = ((v11 & 0x3F) << 10) | v10, v9) )
      v12 = v21;
    else
      v12 = 0;
    v13 = *(_QWORD *)a2;
    v14 = v6 != 0 ? i : 0;
    for ( i = v14; ; v14 = i )
    {
      *(_QWORD *)a2 = v13;
      if ( (v13 & 4) != 0 )
      {
        v15 = v13;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = v12;
        v15 = v10 & 0xFE00 | v13 & 0xFFFF01FB | (v14 != 0 ? 4 : 0);
        *(_DWORD *)a2 = v15;
      }
      v16 = ((unsigned int)v13 >> 1) & 1;
      if ( !v16 )
        *(_DWORD *)a2 = v15 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v15) & 0x100 | 2;
      v17 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v13);
      if ( v17 == v13 )
        break;
    }
    if ( !v16 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v6);
  }
  return a2;
}
