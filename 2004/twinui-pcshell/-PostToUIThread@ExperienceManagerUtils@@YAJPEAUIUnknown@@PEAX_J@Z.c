/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180051D90 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_280b45e0809411ada214328da8ed29e6_::_lambda_invoker_cdecl_ @ 0x180096280 (_lambda_280b45e0809411ada214328da8ed29e6_--_lambda_invoker_cdecl_.c)
 *     _lambda_f51720ce74bc227b5f49bc6a309c1440_::_lambda_invoker_cdecl_ @ 0x18009E7A0 (_lambda_f51720ce74bc227b5f49bc6a309c1440_--_lambda_invoker_cdecl_.c)
 *     _lambda_1e0a83294f3611732c0919d4ce58b900_::_lambda_invoker_cdecl_ @ 0x1800AD0D0 (_lambda_1e0a83294f3611732c0919d4ce58b900_--_lambda_invoker_cdecl_.c)
 *     _lambda_63a258090519b332dfe8d270edc6c21b_::_lambda_invoker_cdecl_ @ 0x1800AD110 (_lambda_63a258090519b332dfe8d270edc6c21b_--_lambda_invoker_cdecl_.c)
 *     _lambda_665c64ac43c225ea8e9358a4e95b62dc_::_lambda_invoker_cdecl_ @ 0x1800AD180 (_lambda_665c64ac43c225ea8e9358a4e95b62dc_--_lambda_invoker_cdecl_.c)
 *     _lambda_a719c80089d31377b5869cff445c0b02_::_lambda_invoker_cdecl_ @ 0x1800AD1F0 (_lambda_a719c80089d31377b5869cff445c0b02_--_lambda_invoker_cdecl_.c)
 *     _lambda_aa2cf3828d9244bdbf46fd61e18b6e20_::_lambda_invoker_cdecl_ @ 0x1800AD250 (_lambda_aa2cf3828d9244bdbf46fd61e18b6e20_--_lambda_invoker_cdecl_.c)
 *     _lambda_fcf0bcfa456be39992ce9a70dab7748d_::_lambda_invoker_cdecl_ @ 0x1800AD2B0 (_lambda_fcf0bcfa456be39992ce9a70dab7748d_--_lambda_invoker_cdecl_.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B07C4 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B4EE0 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1801BCF20 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801C5674 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_7947749ff377f6aa715860047a9db9b7_::operator() @ 0x180333B18 (_lambda_7947749ff377f6aa715860047a9db9b7_--operator().c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180335BD0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800866AC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
