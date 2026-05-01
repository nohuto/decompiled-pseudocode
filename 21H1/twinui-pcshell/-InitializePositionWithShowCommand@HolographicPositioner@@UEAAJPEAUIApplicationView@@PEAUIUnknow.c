/*
 * XREFs of ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18021EBF0
 * Callers:
 *     ?InitializePosition@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18021EB40 (-InitializePosition@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012BBA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@detai.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18021D020 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 */

__int64 __fastcall HolographicPositioner::InitializePositionWithShowCommand(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5)
{
  unsigned int *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = a5;
  if ( a5 )
    *a5 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, unsigned int **))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &a5);
  if ( !a5 )
    goto LABEL_8;
  if ( v8 )
    *v8 |= 0x10000u;
  v9 = HolographicPositioner::ControlGainedForActivation((__int64)this - 8, a2, 0LL, a3);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34E,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v9);
  else
LABEL_8:
    v10 = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&a5);
  return v10;
}
