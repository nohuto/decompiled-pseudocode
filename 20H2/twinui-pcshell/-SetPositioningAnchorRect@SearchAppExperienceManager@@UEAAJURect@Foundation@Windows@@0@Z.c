/*
 * XREFs of ?SetPositioningAnchorRect@SearchAppExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801F6480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::SetPositioningAnchorRect(__int64 a1, float *a2, float *a3)
{
  float v6; // xmm1_4
  int v7; // r10d
  int v8; // r9d
  float v9; // xmm1_4
  int v10; // edx
  int v11; // ecx
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int v17[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3[1];
  v7 = (int)(float)(*a3 + a3[2]);
  v8 = (int)(float)(v6 + a3[3]);
  *(_DWORD *)(a1 + 572) = (int)*a3;
  *(_DWORD *)(a1 + 576) = (int)v6;
  *(_DWORD *)(a1 + 580) = v7;
  *(_DWORD *)(a1 + 584) = v8;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetImpl'::`2'::impl) )
  {
    v9 = a2[1];
    v10 = (int)(float)(*a2 + a2[2]);
    v11 = (int)(float)(v9 + a2[3]);
    *(_DWORD *)(a1 + 588) = (int)*a2;
    *(_DWORD *)(a1 + 592) = (int)v9;
    *(_DWORD *)(a1 + 596) = v10;
    *(_DWORD *)(a1 + 600) = v11;
  }
  v12 = *(__int64 **)(a1 + 496);
  v13 = *v12;
  *(_OWORD *)v17 = *(_OWORD *)a3;
  v18 = *(_OWORD *)a2;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v13 + 40))(v12, &v18, v17);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  return v15;
}
