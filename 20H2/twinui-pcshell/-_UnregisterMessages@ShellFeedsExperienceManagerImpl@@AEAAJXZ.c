/*
 * XREFs of ?_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F6F4
 * Callers:
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x18009AE60 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18009E19C (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_UnregisterMessages(ShellFeedsExperienceManagerImpl *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  v2 = ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
         this,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v6);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 35) )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 32LL))(v6);
      *((_DWORD *)this + 35) = 0;
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F0,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return v3;
}
