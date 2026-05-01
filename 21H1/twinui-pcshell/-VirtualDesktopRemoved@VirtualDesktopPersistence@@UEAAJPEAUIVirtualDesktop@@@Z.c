/*
 * XREFs of ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180413060
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180411F70 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopRemoved(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2)
{
  VirtualDesktopPersistence *v4; // rcx
  int VirtualDesktopRegKeyName; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v10; // eax
  wchar_t v11[56]; // [rsp+20h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(v4, a2, v11);
  v7 = 0;
  v8 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    LOBYTE(v6) = 1;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, wchar_t *))(**((_QWORD **)this + 2) + 56LL))(
            *((_QWORD *)this + 2),
            v6,
            v11);
    if ( v10 < 0 )
      return (unsigned int)v10;
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v8;
  }
}
