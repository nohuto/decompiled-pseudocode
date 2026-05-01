/*
 * XREFs of ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1803FA670
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__&_ @ 0x1800B6BC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__-_.c)
 *     _lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_ @ 0x1800B6C70 (_lambda_3f9052a0d1dbb0256cecc8375556e01f_--__lambda_3f9052a0d1dbb0256cecc8375556e01f_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::PerformDelayedInitialization(TabletModePositioner *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  char *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v14; // [rsp+38h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  v2 = *((_QWORD *)this + 53);
  if ( v2 )
  {
    v14 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, 2LL, &v14);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 536LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v3);
      v6 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v4;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 3LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 537LL;
      goto LABEL_6;
    }
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = (char *)this - 24;
  v14 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v14 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f____(v10, &v14);
  v12 = v11;
  if ( v11 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v11);
  lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_(&v14);
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  return v12;
}
