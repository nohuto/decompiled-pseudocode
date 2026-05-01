/*
 * XREFs of ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1803F9D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180050118 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__&_ @ 0x1800B8670 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__-_.c)
 *     _lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_ @ 0x1800B8720 (_lambda_3f9052a0d1dbb0256cecc8375556e01f_--__lambda_3f9052a0d1dbb0256cecc8375556e01f_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::PerformDelayedInitialization(
        TabletModePositioner *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rcx
  char *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v16; // [rsp+38h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 2LL, &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 536LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v5);
      v8 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v6;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 48LL))(v16, 3LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 537LL;
      goto LABEL_6;
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = (char *)this - 24;
  v16 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v16 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f____(v12, &v16);
  v14 = v13;
  if ( v13 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v13);
  lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_(&v16);
  if ( v11 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
  return v14;
}
