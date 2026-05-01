/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180452C00
 * Callers:
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x18009826C (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18018CE00 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18019158C (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A2618 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180452CA8 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct IServiceProvider *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  int HostExperiencePriorityManipulator; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ExperienceManagerUtils *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  HostExperiencePriorityManipulator = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, ExperienceManagerUtils **))(*(_QWORD *)this + 24LL))(
                                        this,
                                        &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                        &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                        &v11);
  v7 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator >= 0 )
  {
    HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                          v11,
                                          (struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *)a2,
                                          v6);
    v7 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 262LL;
  }
  else
  {
    v8 = 261LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)HostExperiencePriorityManipulator);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
