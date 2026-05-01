/*
 * XREFs of ?GetName@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18044CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063B9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18044CC90 (-GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop::GetName(CVirtualDesktop *this, HSTRING *a2, __int64 a3)
{
  int NameInternal; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), &SRWLock);
  NameInternal = CVirtualDesktop::GetNameInternal((CVirtualDesktop *)((char *)this + 16), a2);
  v6 = NameInternal;
  if ( NameInternal >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)NameInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v6;
}
