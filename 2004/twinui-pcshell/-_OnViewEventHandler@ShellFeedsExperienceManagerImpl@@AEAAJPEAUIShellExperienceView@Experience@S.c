/*
 * XREFs of ?_OnViewEventHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18009DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009D804 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewEventHandler(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+48h] [rbp+20h] BYREF

  string = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v13);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = ShellFeedsExperienceManagerImpl::_OnViewEvent(this, string, v13);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v9 = 891LL;
    }
    else
    {
      v9 = 890LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_10:
  WindowsDeleteString(string);
  return v7;
}
