/*
 * XREFs of ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x180088A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(
        DesktopSingleViewShellExperiencePersonality *this)
{
  char *v1; // rbx
  __int64 (__fastcall ***v2)(_QWORD, GUID *, char *); // rdi
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 16;
  v2 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))(*((_QWORD *)this + 1) + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( !v2 )
    return 0LL;
  v3 = (**v2)(v2, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2, v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
