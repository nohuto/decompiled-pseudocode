/*
 * XREFs of ?SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18009D640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@W4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAMAEAMAEAMAEAM@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAM111@Z @ 0x18009A67C (--$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@W4ShellFeedsButtonType@Experience@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::SetPositioningAnchorRect(__int64 a1, int a2, int *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType,float &,float &,float &,float &>(
    &v12,
    a3,
    a3 + 1,
    a3 + 2,
    a3 + 3);
  v5 = *(__int64 **)(a1 + 88);
  v6 = *v5;
  v10 = *(_OWORD *)a3;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v6 + 24))(v5, &v10);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
