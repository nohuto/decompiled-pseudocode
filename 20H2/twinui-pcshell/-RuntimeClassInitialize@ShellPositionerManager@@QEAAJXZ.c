/*
 * XREFs of ?RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ @ 0x1803D4C60
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D29B4 (--$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall ShellPositionerManager::RuntimeClassInitialize(ShellPositionerManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v4 = GUID_ff62716a_0bd0_4105_a6ec_83b09d864267;
  v5 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (ShellPositionerManager *)((char *)this + 24),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
