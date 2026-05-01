/*
 * XREFs of ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FC970
 * Callers:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x1803F9C74 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Z @ 0x1803FC4D8 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FCA5C (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall GhostDivider_CreateInstance(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  v18 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<GhostDivider,GhostDivider,IPriviledgedPositioner * &,IApplicationView * &,enum GhostDividerPlacement &>(
         &v18,
         &v15,
         &v16,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 259LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)v8);
    goto LABEL_11;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7b6fb5ff_f28e_4cb4_b5a2_b48301faca38, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v18;
    *v5 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v10, v10) )
  {
    v11 = v18;
    v7 = 0;
    *v5 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 260LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v18);
  return (unsigned int)v7;
}
