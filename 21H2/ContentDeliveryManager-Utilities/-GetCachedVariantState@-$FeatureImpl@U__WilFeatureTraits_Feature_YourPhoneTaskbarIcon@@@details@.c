/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018C44
 * Callers:
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x1800188C8 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18001893C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000C8D8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18000C9A8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax
  int v6; // esi
  __int64 (__fastcall *v7)(__int64, _QWORD, int *, int *, int *); // rax
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
  if ( (v2 & 0xC) != 0xC )
  {
    i = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v20 = 0;
    v6 = v5;
    v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_internalGetFeatureVariant;
    if ( g_wil_details_internalGetFeatureVariant
      || (v7 = (__int64 (__fastcall *)(__int64, _QWORD, int *, int *, int *))g_wil_details_apiGetFeatureVariant) != 0LL )
    {
      v8 = v7(16257538LL, 0LL, &v21, &v20, &i);
    }
    else
    {
      v8 = 0;
    }
    v9 = BYTE1(v8) & 1;
    v10 = 16 * (v8 & 0x80 | (v20 != 0 ? 0x40 : 0));
    v11 = v8 & 0xFFFFFE7F;
    if ( v11 && (v10 |= (v11 & 0x3F) << 12, v9) )
      v12 = v21;
    else
      v12 = 0;
    v13 = *(_QWORD *)a2;
    v14 = v6 != 0 ? i : 0;
    for ( i = v14; ; v14 = i )
    {
      *(_QWORD *)a2 = v13;
      if ( (v13 & 8) != 0 )
      {
        v15 = v13;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = v12;
        v15 = v10 & 0x3F800 | v13 & 0xFFFC07F7 | (v14 != 0 ? 8 : 0);
        *(_DWORD *)a2 = v15;
      }
      v16 = ((unsigned int)v13 >> 2) & 1;
      if ( !v16 )
        *(_DWORD *)a2 = v15 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v15) & 0x400 | 4;
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
