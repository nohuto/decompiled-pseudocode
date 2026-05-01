/*
 * XREFs of ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x18041D610
 * Callers:
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18041CE30 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 *     ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x18041DDE0 (-ObservedKeyUp@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x18041DF50 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@AEBU_GUID@@PEAPEAX@Z @ 0x180420350 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 */

__int64 __fastcall JointResize::CreateGhostDivider(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  int Instance; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 + 21;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 21);
  Instance = GhostDivider_CreateInstance(a1[16], a1[24], a3);
  if ( Instance < 0 )
  {
    v8 = 504LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, a2);
  if ( Instance < 0 )
  {
    v8 = 505LL;
    goto LABEL_5;
  }
  return (unsigned int)Instance;
}
