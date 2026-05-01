/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800866AC
 * Callers:
 *     _lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_ @ 0x180086670 (_lambda_efaffaa5f4b32d09aefa47929c9cb96f_--_lambda_invoker_cdecl_.c)
 *     ?ShellModeChanged@ShellFeedsDesktopExperienceView@@EEAAJ_N@Z @ 0x1800A7480 (-ShellModeChanged@ShellFeedsDesktopExperienceView@@EEAAJ_N@Z.c)
 *     _lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_ @ 0x1801B5B50 (_lambda_28679c782842d195cae8ac06fc3af96d_--_lambda_invoker_cdecl_.c)
 *     _lambda_61803147bf409ca120dc11436b4d5efa_::_lambda_invoker_cdecl_ @ 0x1801CA000 (_lambda_61803147bf409ca120dc11436b4d5efa_--_lambda_invoker_cdecl_.c)
 *     ?OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801CC100 (-OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z @ 0x1801CC400 (-OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z.c)
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801D4020 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 *     _lambda_b73f07922ca53c55ec272d654ca15780_::_lambda_invoker_cdecl_ @ 0x1801F9530 (_lambda_b73f07922ca53c55ec272d654ca15780_--_lambda_invoker_cdecl_.c)
 *     _lambda_df558bc7901e48a4a17d91fd5caa1bf4_::_lambda_invoker_cdecl_ @ 0x1801F9570 (_lambda_df558bc7901e48a4a17d91fd5caa1bf4_--_lambda_invoker_cdecl_.c)
 *     ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180207D80 (-PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18021064C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        void *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  LPVOID v10; // rbx
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( !this )
  {
    v8 = CoCreateInstance(
           &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
           0LL,
           0x404u,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           &ppv);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    v13 = 248LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_7;
  }
  v8 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, LPVOID *))this)(
         this,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 244LL;
    goto LABEL_11;
  }
LABEL_3:
  v15[0] = 0LL;
  v10 = ppv;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
          v10,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 252LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown *, __int64))(*(_QWORD *)v15[0] + 48LL))(
          v15[0],
          v5,
          a2,
          a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 253LL;
    goto LABEL_14;
  }
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v9;
}
