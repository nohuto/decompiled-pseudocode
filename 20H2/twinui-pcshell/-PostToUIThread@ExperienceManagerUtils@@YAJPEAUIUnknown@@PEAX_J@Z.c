/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18047656C
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007A380 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_280b45e0809411ada214328da8ed29e6_::_lambda_invoker_cdecl_ @ 0x180097760 (_lambda_280b45e0809411ada214328da8ed29e6_--_lambda_invoker_cdecl_.c)
 *     _lambda_f51720ce74bc227b5f49bc6a309c1440_::_lambda_invoker_cdecl_ @ 0x18009FB70 (_lambda_f51720ce74bc227b5f49bc6a309c1440_--_lambda_invoker_cdecl_.c)
 *     _lambda_0c6410c3c5d23ec4472b49c3e944911e_::_lambda_invoker_cdecl_ @ 0x1800AEE50 (_lambda_0c6410c3c5d23ec4472b49c3e944911e_--_lambda_invoker_cdecl_.c)
 *     _lambda_8932f757a934d64e07b909fa03286b6b_::_lambda_invoker_cdecl_ @ 0x1800AEEB0 (_lambda_8932f757a934d64e07b909fa03286b6b_--_lambda_invoker_cdecl_.c)
 *     _lambda_c7e681ade98c61054f1f21bde138f9d7_::_lambda_invoker_cdecl_ @ 0x1800AEF20 (_lambda_c7e681ade98c61054f1f21bde138f9d7_--_lambda_invoker_cdecl_.c)
 *     _lambda_db7dcdecbe5e2a35d911fcb90ff32aa7_::_lambda_invoker_cdecl_ @ 0x1800AEF90 (_lambda_db7dcdecbe5e2a35d911fcb90ff32aa7_--_lambda_invoker_cdecl_.c)
 *     _lambda_e11c57372fcff8f62577b0ab02c1aa40_::_lambda_invoker_cdecl_ @ 0x1800AEFF0 (_lambda_e11c57372fcff8f62577b0ab02c1aa40_--_lambda_invoker_cdecl_.c)
 *     _lambda_f6422edf6f59b1e5ef6b8686a2d8b5e4_::_lambda_invoker_cdecl_ @ 0x1800AF050 (_lambda_f6422edf6f59b1e5ef6b8686a2d8b5e4_--_lambda_invoker_cdecl_.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B03A4 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B4AF0 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1801BCA90 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801C51E4 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_7947749ff377f6aa715860047a9db9b7_::operator() @ 0x1803330B8 (_lambda_7947749ff377f6aa715860047a9db9b7_--operator().c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180335170 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18008561C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
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
